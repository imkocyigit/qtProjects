#include "PortController.h"

PortController::PortController(QObject *parent) : QObject(parent)
{
}

void PortController::sendData(QByteArray data)
{
    if(m_serialPort->isOpen()){
        qDebug() << "data sending.." << data;
        m_serialPort->write(data);
        m_serialPort->flush();
        //qDebug() << m_serialPort->error();
    }
    else {
        qDebug() << "port is not opened";
        qDebug() << m_serialPort->error();
    }
}

void PortController::connectSerialPort(QString portname)
{
    m_serialPort = new QSerialPort(this);
    m_serialPort->setPortName(portname);
    m_serialPort->setBaudRate(QSerialPort::Baud9600);
    m_serialPort->setDataBits(QSerialPort::Data8);
    m_serialPort->setParity(QSerialPort::NoParity);
    m_serialPort->setStopBits(QSerialPort::OneStop);
    m_serialPort->setFlowControl(QSerialPort::NoFlowControl);


    connect(m_serialPort, &QSerialPort::readyRead, this, &PortController::readData);
    if (m_serialPort->open(QIODevice::ReadWrite)) {
        qDebug() << this->metaObject()->className() << "Serial Port connected for control iris";
        //sendData(QByteArray::number(123));
    } else {
        qCritical() << this->metaObject()->className() << "Serial Port could not connected for control iris." << m_serialPort->error();
    }
}

void PortController::disconnectFromPort()
{
    if (m_serialPort->isOpen())
            m_serialPort->close();

    qDebug() << this->metaObject()->className() << "Disconnected from serial Port";
    emit disconnected();
}

void PortController::readData()
{
    QByteArray data = m_serialPort->readAll();
    qDebug() << this->metaObject()->className() << "New Data: " << QString(data);
}

