#include "mainwindow.h"
#include <QApplication>
#include "header.h"

//程序内部使用，每次发布新的程序，记得修改版本号
const char *AppInnerVer = "V0.0.1";
const char *AppName = "AACS_PACKTOOL";

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);

    a.setApplicationVersion(AppInnerVer);
    a.setApplicationName(AppName);

    myHelper::SetUTF8Code();
    myHelper::SetChinese();
    a.setFont(QFont("Microsoft Yahei", 10));
    a.setWindowIcon(QIcon(":/main.ico"));
#if (QT_VERSION >= QT_VERSION_CHECK(5,6,0))
    a.setAttribute(Qt::AA_EnableHighDpiScaling);
#endif

    //创建共享内存,判断是否已经运行程序
    QSharedMemory mem("AACS_PAKC");
    if (!mem.create(1)) {
        myHelper::ShowMessageBoxError("程序已运行,软件将自动关闭!");
        return 1;
    }

    //读取配置
    myApp::ReadConfig();

    AppInit::Instance()->start();

    QUIWidget::setTranslator(":/image/qt_zh_CN.qm");
    QUIWidget::setCode();

    MainWindow *mainWnd = new MainWindow();

    QUIWidget qui;

    qui.setMainWidget(mainWnd);

    //设置标题文本居中
    qui.setAlignment(Qt::AlignCenter);
    //设置程序的版本号
    qui.setTitle(QString("%1 %2").arg(myApp::AppTitle,myApp::AppVerNo));
    QUIWidget::setStyle(QUIWidget::Style_LightBlue);

    //设置窗体可拖动大小
    qui.setSizeGripEnabled(true);

    //设置换肤下拉菜单可见
    qui.setVisible(QUIWidget::BtnMenu, true);

    qui.show();

    return a.exec();
}
