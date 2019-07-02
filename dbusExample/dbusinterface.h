#ifndef DBUSINTERFACE_H
#define DBUSINTERFACE_H

#include <QObject>
#include <QtDBus>

class dbusinterface : public QObject
{
    Q_OBJECT
public:
    explicit dbusinterface(QObject *parent = NULL);

private:
    QString m_serviceName;
    QString m_interfaceName;
    QString m_path;

signals:

public slots:
    void saySomething(QString msg);
};

#endif // DBUSINTERFACE_H
