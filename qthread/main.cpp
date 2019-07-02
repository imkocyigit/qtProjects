
#include <QCoreApplication>
#include <QObject>
#include "mythread.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MyThread thread1("A"), thread2("B"), thread3("C");

    thread1.start();
    //thread2.start();
    //thread3.start();

    thread1.stop = true;

    return a.exec();
}
