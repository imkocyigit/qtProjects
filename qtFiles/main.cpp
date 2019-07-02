#include <QTextStream>
#include <QFileInfo>
#include <QDebug>
#include <QFile>

int main(int argc, char **argv) {
    QTextStream out(stdout);

 /*   if (argc != 2) {
        qWarning("Usage: file_size file");
        return 1;
    }

    QString filename = argv[1];

    if (!QFile(filename).exists()) {
        qWarning("The File does not exist\n");
        return 1;
    }

    QFileInfo fileinfo(filename);

    qint64 size = fileinfo.size();

    QString str = "The size is %1 bytes";

    qDebug() << str.arg(size) << endl;

*/

    QFile file("Colours");

    if (!file.open(QIODevice::ReadWrite)) {
        qWarning("Cannot open file for reading");
        return 1;
    }


    QTextStream in(&file);

    in << "\Scarlett" << endl;

    while (!in.atEnd()) {
        QString line = in.readLine();
        out << line << endl;
    }

    file.close();
}
