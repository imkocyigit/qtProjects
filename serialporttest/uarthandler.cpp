#include "uarthandler.h"
#include <QDebug>

UartHandler::UartHandler(QString portName, quint32 baudrate, QObject *parent) : QObject(parent)
{
    // TODO: Make it parametric.
    // make all of following properties parametric.
    // currently just portName and baudrate properties are parametric.
    m_port.setPortName(portName);
    m_port.setBaudRate(baudrate);
    m_port.setDataBits(QSerialPort::Data8);
    m_port.setParity(QSerialPort::NoParity);
    m_port.setFlowControl(QSerialPort::NoFlowControl);
    connect(&m_port, &QSerialPort::readyRead, this, &UartHandler::dataReceived);
    // FIXME: Signal-slot problem.
    // below signals causing the code behave weird.
    // if they are implemented, sometimes closing/opening port is not working and these signals fire thousands of times in a second
    // upon a device disconnection.
    // a workaround can be done by disconnecting these signal-slots when the first signal arrives (followed by closing/re-opening the port)
    // or by destructing and re-initializing the whole UartHandler object in a parent class.
    // Don't have any fuckin idea..
//    connect(&m_port, SIGNAL(error(QSerialPort::SerialPortError)), this, SLOT(errorReceived(QSerialPort::SerialPortError)));
//    connect(&m_port, &QSerialPort::aboutToClose, this, &UartHandler::portDisconnected);

    m_portResetTimer.setSingleShot(true);
    m_portResetTimer.setInterval(0);
    connect(&m_portResetTimer, &QTimer::timeout, this, &UartHandler::autoResetTimeout);

}

UartHandler::~UartHandler()
{

}

/**
 * @brief UartHandler::openPort
 * Opens port with preset parameters (baudrate and portname).
 * Also starts auto-reset timer if any timout is set.
 * @return
 * false if port could not be opened.
 * true otherwise.
 */
bool UartHandler::openPort()
{
    if (m_port.isOpen())
        return false;

    if(!m_port.open(QIODevice::ReadWrite))
        return false;

    m_port.clear();

    if(m_portResetTimer.interval())
        m_portResetTimer.start();

    emit portOpened();
    return true;
}

/**
 * @brief UartHandler::closePort
 * Flushes all data, reads all data and closes port.
 * Also stops auto-reset timer if it is running.
 * @return False if port is not opened.
 */
bool UartHandler::closePort()
{
    if(!m_port.isOpen())
        return false;

    // WARNING: Possible race condition.
    // A safer design is needed when accessing this timer.
    // If auto-reset timer timeouts ( autoResetTimeout() function ) at
    // the same time with a call of this function a race condition may arise.
    // Simple mutex solution -not sure- can work in here.
    // This warning also noted in autoResetTimeout() function.
    if(m_portResetTimer.isActive())
        m_portResetTimer.stop();

    m_port.flush();
    m_port.clear();
    m_port.close();
    return true;
}

/**
 * @brief UartHandler::setAutoReset
 * Enable/disable auto reset (close and open) function. This will reset the channel if any data is
 * "NOT" received within the given timeout.
 * Timer only runs if the port is open.
 * If timeout is equals to 0 (zero) then this function will be disabled.
 * If the timer is not running, sets the interval.
 * If the timer is active, resets the interval.
 * If port is open starts the timer, otherwise just sets the interval and returns.
 * @param timeout
 * Timer interval
 */
void UartHandler::setAutoReset(const quint32 timeout)
{
    if(m_portResetTimer.isActive())
        m_portResetTimer.stop();

    if(!timeout)
        return;

    m_portResetTimer.setInterval(timeout);
    if(m_port.isOpen())
        m_portResetTimer.start();
}

QString UartHandler::portName() const
{
    return m_port.portName();
}

quint32 UartHandler::baudrate() const
{
    return m_port.baudRate();
}

bool UartHandler::setPortName(const QString &portName)
{
    if(m_port.isOpen())
        return false;

    m_port.setPortName(portName);
    return true;
}
bool UartHandler::setBaudrate(const quint32 &baudrate)
{
    if(m_port.isOpen())
        return false;

    m_port.setBaudRate(baudrate);
    return true;
}

/**
 * @brief UartHandler::autoResetTimeout
 * Auto-reset timer timeout function.
 * Closes and openes the port in order.
 * Managed by m_portResetTimer.
 */
void UartHandler::autoResetTimeout(){

    // WARNING: Possible race condition.
    // A race condition may arise if someone calls
    // closePort()/openPort() manually and auto-reset timer
    // timeouts simutaneously.
    // This warning also noted in closePort() function.
    if(!closePort()){
        emit autoClosePortFailed();
        qDebug() << this->metaObject()->className() << ":: autoreset close failed ";
        return;
    }
    if(!openPort()){
        emit autoOpenPortFailed();
        qDebug() << this->metaObject()->className() << ":: autoreset open failed ";
        return;
    }
    emit autoPortResetSuccessfull();
}

void UartHandler::errorReceived(QSerialPort::SerialPortError error)
{
    if (m_portResetTimer.isActive())
        m_portResetTimer.stop();

    if(error == QSerialPort::ResourceError){
        emit portClosed();
    }

}

void UartHandler::portDisconnected(){
    emit portClosed();
}

void UartHandler::dataReceived()
{
    if(m_portResetTimer.isActive())
        m_portResetTimer.start();
    QByteArray data = m_port.readAll();
    qDebug() << this->metaObject()->className() << "New Data: " << QString(data);
    emit dataReady(data);
}


/**
 * @brief UartHandler::sendData Sends data to remote device.
 * @param newData QByteArray which will be sent over uart channel.
 * @return False if the port is not in opened state.
 */
bool UartHandler::sendData(const QByteArray newData)
{
    // WARNING: Possible race condition.
    // A race condition may arise if this function called from outside
    // (directly, not with a SIGNAL-SLOT connection) and one of the other
    // functions (which is using m_port object) is being called
    // (by a SIGNAL-SLOT connection) simultaneously..
    if(!m_port.isOpen())
        return false;

    // TODO: Add option.
    // add optional "data send timeout" when sending the data
    // if user has entered a bigger value than 0, then enable it and wait for that timeout.
    // otherwise send it directly.
    int resp = m_port.write(newData);
    m_port.waitForBytesWritten(100);
    if (resp == -1) return false;
    return true;
}

