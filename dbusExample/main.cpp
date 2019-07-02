#include <QCoreApplication>
#include "dbusinterface.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    dbusinterface dbs;
    dbs.saySomething("hello lan");
    return a.exec();
}
