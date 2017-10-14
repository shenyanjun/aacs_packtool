#ifndef MYAPP_H
#define MYAPP_H

class QString;

class myApp
{
public:
    static QString AppPath;                 //应用程序路径
    static int DeskWidth;                   //桌面可用宽度
    static int DeskHeight;                  //桌面可用高度

    static QString AppVerNo;                //软件版本号码

    static QString AppTitle;                //界面标题
    static QString AppStyle;                //界面样式
    static bool AutoRun;                    //开机自动运行
    static QString LastConfig;              //软件最后配置信息

    static QString ScanGunSerialPort;       //扫描枪对应的串口

    static QString AndonDataBaseIP;         //andon系统对应的局域网ip地址
    static QString AndonDataBaseUser;       //andon系统对应的数据库用户名
    static QString AndonDataBasePwd;        //andon系统对应的数据库登入密码

    static void ReadConfig();               //读取配置文件
    static void WriteConfig();              //写入配置文件

};

#endif // MYAPP_H
