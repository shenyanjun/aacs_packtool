#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    initStytleSheet();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::initStytleSheet()
{
    this->setStyleSheet("QGroupBox#gboxMain{border-width:0px;}");
    this->setProperty("Form", true);

    //设置窗体标题栏隐藏--Qt::WindowStaysOnTopHint |
#if 1
    this->setWindowFlags(Qt::FramelessWindowHint |
                         Qt::WindowSystemMenuHint |
                         Qt::WindowMinMaxButtonsHint);
#endif
}
