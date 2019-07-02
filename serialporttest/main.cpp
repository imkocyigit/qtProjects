#include <QCoreApplication>
#include <PortController.h>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    PortController uart;
    uart.connectSerialPort("/dev/ttyUSB1");

    uart.sendData(QByteArray::number(001));

/*    if(uart.sendData(data) == false) {
        qCritical() << "Cannot write to the port!\n";
        } else {
        qDebug() << "Data has written successfully";
        }*/




    return a.exec();
}
/*

    while(1) {
        QByteArray data2;
        cin >> data2;
        uart.sendData(data2);
    }
    PortController port;
    port.PortController::connectSerialPort("/dev/ttyUSB1");

    QByteArray bytes{"12mete34\n"};

    port.sendData(bytes);


*/
