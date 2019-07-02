#include "dbusslave.h"

dbusslave::dbusslave( QObject *parent) : QDBusAbstractAdaptor(parent)
{
    QDBusConnection::sessionBus().registerObject("/dbusInterface",parent);
    if (!QDBusConnection::sessionBus().registerService("org.deneme.dbusInterface.service")) {
        qCritical() << "DBus registration failed" << QDBusConnection::sessionBus().lastError();

    } else {
        qDebug() << "DBus registration successfully";
    }
}


void dbusslave::heardSomething(QString msg) {
    qDebug() << "This function called by another process";
    qDebug() << "I heard this shit ---> " << msg;
}
