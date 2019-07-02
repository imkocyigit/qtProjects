#include "myserver.h"

MyServer::MyServer (QObject *parent) : QObject(parent) {

    server = new QTcpServer(this);

    connect(server, SIGNAL(newConnection()), this, SLOT(newConnection()));
    if(!server->listen(QHostAddress::Any, 12345)) {
        qDebug() << "Server could not start!\n";

    } else {
        qDebug() << "Server started!";

    }

}

void MyServer::newConnection() {
    socket = server->nextPendingConnection();
    connect(socket,&QTcpSocket::readyRead, this, &MyServer::readData);
    connect(socket,&QTcpSocket::disconnected, this , &MyServer::disconnected);

    socket->write("hello myclient");
    socket->flush();
}

void MyServer::readData()
{
    qDebug() <<socket->readAll();
}
void MyServer::disconnected()
{
   qDebug() << "disconnected ! ";
}
