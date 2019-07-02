#include <QCoreApplication>
#include "dbusslave.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    dbusslave dslave(&a);

    return a.exec();
}
