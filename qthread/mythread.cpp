#include "mythread.h"
#include <QDebug>
#include <QMutex>

int counter = 0;

MyThread::MyThread(QString s) : name(s)
{
}

// We overrides the QThread's run() method here
// run() will be called when a thread starts
// the code will be shared by all threads

void MyThread::run()
{
    for(int i = 0; i <= 100; i++)
    {
        QMutex mutex;
        mutex.lock();
        if(this->stop) {
            break;
        }
        mutex.unlock();
        qDebug() << this->name << " " << i << " Counter is : " << counter;
    }
    qDebug() << this->name << " IS DONE";
}
