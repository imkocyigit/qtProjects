#include "sockettest.h"

SocketTest::SocketTest ( QObject *parent) : QObject(parent) {}


void SocketTest::Test() {
    socket = new QTcpSocket(this);
    connect(socket,&QTcpSocket::connected, this, &SocketTest::connected);
    connect(socket, SIGNAL(disconnected()), this, SLOT(disconnected()));
    connect(socket, SIGNAL(readyRead()), this, SLOT(readyRead()));
    connect(socket, SIGNAL(bytesWritten(qint64)), this, SLOT(bytesWritten(qint64)));

    qDebug() << "Connecting...";

    socket->connectToHost("127.0.0.1", 12345);

//    if(!socket->waitForDisconnected(1000)) {
//        qDebug() << "Error : " << socket->errorString();
//    }


}

void SocketTest::connected() {
    qDebug() << "Connected!";

    socket->write("Head / HTTP/1.0\r\n\r\n\r\n\r\n");
}

void SocketTest::disconnected() {
    qDebug() << "Disconnected!";
}

void SocketTest::bytesWritten(qint64 bytes) {
    qDebug() << "We wrote " << bytes;
}

void SocketTest::readyRead() {
    qDebug() << "Reading... ";
    qDebug() << socket->readAll();
}


//void SocketTest::Connect() {
//    socket = new QTcpSocket(this);
//    socket->connectToHost("127.0.0.1",1234);

//    if ( socket->waitForConnected(3000)) {

//        qDebug() << "Connected!";

//        socket->write("hi server\n");
//        socket->waitForBytesWritten(1000);
//        socket->waitForReadyRead(3000);

//        qDebug() << "Reading : " << socket->bytesAvailable();

//        qDebug() << socket->readAll();

//        socket->close();

//    } else {

//        qDebug() << "Not Connected\n";
//    }
//}
