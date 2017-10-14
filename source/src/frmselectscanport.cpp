#include "frmselectscanport.h"
#include "ui_frmselectscanport.h"

frmSelectScanPort::frmSelectScanPort(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::frmSelectScanPort)
{
    ui->setupUi(this);
}

frmSelectScanPort::~frmSelectScanPort()
{
    delete ui;
}
