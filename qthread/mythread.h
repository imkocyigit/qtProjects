#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QThread>
#include <QString>
#include <QObject>

class MyThread : public QThread  {

public:
    // constructor
    // set name using initializer
    explicit MyThread(QString s);

    bool stop;

    // overriding the QThread's run() method
    void run();
private:
    QString name;

};

#endif // MYTHREAD_H

