#ifndef SOCKETTEST_H
#define SOCKETTEST_H

#include <QObject>
#include <QTcpSocket>
#include <QDebug>
#include <QAbstractSocket>


class SocketTest : public QObject {
    Q_OBJECT
public:
    explicit SocketTest(QObject *parent = NULL );
    void Test();

public slots:
    void connected();
    void disconnected();
    void bytesWritten( qint64 bytes);
    void readyRead();

private:
    QTcpSocket *socket;

};


#endif // SOCKETTEST_H

