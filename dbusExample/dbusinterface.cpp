#include "dbusinterface.h"
#include <QDebug>

dbusinterface::dbusinterface(QObject *parent) : QObject(parent)
{
    m_serviceName = "org.deneme.dbusInterface.service";
    m_interfaceName = "org.deneme.dbusInterface.interface";
    m_path = "/dbusInterface";
}

void dbusinterface::saySomething(QString msg) {

    QDBusMessage dbusMessage = QDBusMessage::createMethodCall(m_serviceName,
                                                              m_path,
                                                              m_interfaceName,
                                                              "heardSomething");
    qDebug() << "I say this shit : " << msg;
    dbusMessage << msg;
    qDebug() << "dbus message is here ::: " << dbusMessage.arguments();
    QDBusConnection::sessionBus().call(dbusMessage);
    qDebug() << "DATA IN DBUS ::: going to dbus-slave";
}

