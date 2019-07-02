#ifndef UARTHANDLER_H
#define UARTHANDLER_H

#include <QObject>
#include <QSerialPort>
#include <QTimer>

class UartHandler : public QObject
{
    Q_OBJECT
public:
    explicit UartHandler(QString portName="/dev/ttyACM0", quint32 baudrate=115200, QObject *parent = 0);
    ~UartHandler();

    QString portName() const;
    quint32 baudrate() const;

    bool setPortName(const QString &portName);
    bool setBaudrate(const quint32 &baudrate);
    void setAutoReset(const quint32 timeout=0);

    // TODO: Feature implementation required.
    // Implement below ( setAutoReconnect() ) feature.
    // void setAutoReconnect(const quint32 timeout=0);

private:
    QSerialPort m_port;
    QTimer m_portResetTimer;

signals:
    void portClosed();
    void portOpened();
    void dataReady(QByteArray newData);
    void autoClosePortFailed();
    void autoOpenPortFailed();
    void autoPortResetSuccessfull();

public slots:
    bool sendData(const QByteArray newData);
    bool openPort();
    bool closePort();

private slots:
    void dataReceived();
    void errorReceived(QSerialPort::SerialPortError errorCode);
    void autoResetTimeout();
    void portDisconnected();
};

#endif // UARTHANDLER_H
