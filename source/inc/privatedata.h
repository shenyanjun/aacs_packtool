#ifndef PRIVATEDATA_H
#define PRIVATEDATA_H

#include <QObject>
#include "header.h"

class PrivateData : public QObject
{
    Q_OBJECT
public:
    explicit PrivateData(QObject *parent = 0);

private:

signals:

public slots:
};

#endif // PRIVATEDATA_H
