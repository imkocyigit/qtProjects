#ifndef DBUSSLAVE_H
#define DBUSSLAVE_H

#include <QObject>
#include <QtDBus>

class dbusslave : QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface","org.deneme.dbusInterface.interface")

public:
    dbusslave( QObject *parent = nullptr);
public slots:
    void heardSomething(QString msg);

};

#endif // DBUSSLAVE_H
