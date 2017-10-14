#include "myapp.h"
#include "myhelper.h"

QString myApp::AppPath = "";
int myApp::DeskWidth = 1024;
int myApp::DeskHeight = 768;

QString myApp::AppTitle = "AACS PACKTOOL NET ";

QString myApp::AppStyle = ":/image/silvery.css";

bool myApp::AutoRun = false;

QString myApp::LastConfig = "";

QString myApp::AppVerNo = "v0.0.1";

QString myApp::ScanGunSerialPort = "";

QString myApp::AndonDataBaseIP = "";

QString myApp::AndonDataBaseUser = "";

QString myApp::AndonDataBasePwd = "";

//读取配置文件
void myApp::ReadConfig()
{
    QString fileName = myApp::AppPath + "config.txt";
    //如果配置文件不存在,则以初始值继续运行
    if (!myHelper::FileIsExist(fileName)) {
        //对应中文转成正确的编码
        myApp::AppTitle = myApp::AppTitle.toLatin1();
        return;
    }

    QSettings *set = new QSettings(fileName, QSettings::IniFormat);

    set->beginGroup("AppConfig");
    myApp::AppTitle = set->value("AppTitle").toString();
    myApp::AppStyle = set->value("AppStyle").toString();
    myApp::AutoRun = set->value("AutoRun").toBool();
    myApp::LastConfig = set->value("LastConfig").toString();
    myApp::AppVerNo = set->value("AppVerNo").toString();
    myApp::ScanGunSerialPort = set->value("ScanGunSerialPort").toString();
    myApp::AndonDataBaseIP = set->value("AndonDataBaseIP").toString();
    myApp::AndonDataBaseUser = set->value("AndonDataBaseUser").toString();
    myApp::AndonDataBasePwd = set->value("AndonDataBasePwd").toString();
    set->endGroup();
    delete set;
}

//写入配置文件
void myApp::WriteConfig()
{
    QString fileName = myApp::AppPath + "config.txt";
    QSettings *set = new QSettings(fileName, QSettings::IniFormat);

    set->beginGroup("AppConfig");
    set->setValue("AppTitle", myApp::AppTitle);
    set->setValue("AppStyle", myApp::AppStyle);
    set->setValue("AutoRun", myApp::AutoRun);
    set->setValue("LastConfig", myApp::LastConfig);
    set->setValue("AppVerNo", myApp::AppVerNo);
    set->setValue("ScanGunSerialPort", myApp::ScanGunSerialPort);
    set->setValue("AndonDataBaseIP", myApp::AndonDataBaseIP);
    set->setValue("AndonDataBaseUser", myApp::AndonDataBaseUser);
    set->setValue("AndonDataBasePwd", myApp::AndonDataBasePwd);

    set->endGroup();
    delete set;
}
