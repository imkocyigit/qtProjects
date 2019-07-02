#ifndef MYSERVER_H
#define MYSERVER_H

#include <QObject>
#include <QDebug>
#include <QTcpServer>
#include <QTcpSocket>

class MyServer : public QObject {
    Q_OBJECT
public:
    explicit MyServer ( QObject *parent = NULL);

public slots:
    void newConnection();
    void readData();
    void disconnected();
private:
    QTcpServer *server;
    QTcpSocket *socket;

};

#endif // MYSERVER_H

