#ifndef FRMSELECTSCANPORT_H
#define FRMSELECTSCANPORT_H

#include <QDialog>

namespace Ui {
class frmSelectScanPort;
}

class frmSelectScanPort : public QDialog
{
    Q_OBJECT

public:
    explicit frmSelectScanPort(QWidget *parent = 0);
    ~frmSelectScanPort();

private:
    Ui::frmSelectScanPort *ui;
};

#endif // FRMSELECTSCANPORT_H
