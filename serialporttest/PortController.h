#ifndef PORTCONTROLLER_H
#define PORTCONTROLLER_H

#include <QObject>
#include <QtSerialPort/QSerialPort>
#include <QDebug>

class PortController : public QObject
{
    Q_OBJECT
public:
    explicit PortController(QObject *parent = nullptr);

    void sendData(QByteArray);
    void connectSerialPort(QString portname);
private:
    void disconnectFromPort();
    void readData();

    QSerialPort *m_serialPort;
    QString m_portName;

signals:
    void newData(QByteArray);
    void disconnected();

public slots:
};

#endif // IRISCONTROLLER_H
