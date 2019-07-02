#include <QApplication>
#include <QPushButton>
#include <QTextStream>
#include <QTime>
#include <QDate>
#include <QVector>
#include <QList>
#include <algorithm>
#include <QSet>
#include <QMap>
#include <QDebug>

int main(int argc, char **argv) {

    QApplication app (argc,argv);


    QTextStream out(stdout);

    out << endl << "LIST EXAMPLE!!!" << endl;

    QList<QString> authors = {"Tolstoy", "Balzac", "London", "LeGuin" };

    for (int i=0 ; i <authors.size() ; ++i) out << authors.at(i) << endl;

    authors << "Martin" << "Tolkien";

    out << "*************" << endl;

    std::sort(authors.begin(),authors.end());

    out << "Sorted :" << endl;
    for(QString author : authors) out << author << endl;

    out << endl << endl << endl;

    out << endl << "QVECTOR EXAMPLE " << endl;

    QVector<int> vals = { 1, 2, 3, 4, 5, 6};

    out << "The size of the vector is : " << vals.size() << endl;

    out << "The first item is : " << vals.first() << endl;
    out << "The second item is : " << vals.last() << endl;

    vals.append(7);
    vals.prepend(0);

    out << "Elements : " ;

    for(int val : vals) out << val << " ";

    out << endl << endl << endl;

    out << endl << "QSTRINGLIST EXAMPLE" << endl;

    QString string = "coin, book, cup, pencil, clock, bookmark";

    QStringList items = string.split(", ");

    QStringListIterator it(items);

    while(it.hasNext()) out << it.next().trimmed() << endl;

    out << endl << endl << endl;

    out << endl << "QSET EXAMPLE" << endl;

    QSet<QString> cols1 = {"yellow", "red", "blue"};
    QSet<QString> cols2 = {"blue", "pink","orange" };

    out << "There are " << cols1.size() << " values int the set" << endl;

    cols1.insert("brown");

    out << "There are " << cols1.size() << " values int the set" << endl;

    cols1.unite(cols2);

    out << "There are " << cols1.size() << " values int the set" << endl;

    for (QString val : cols1) out << val << endl;

    QList<QString> lcols = cols1.values();
    std::sort(lcols.begin(),lcols.end());

    out << "***********" << endl;

    out << "Sorted : " << endl;

    for (QString val : lcols) out << val << endl;


    out << endl << endl << endl;

    out << endl << "QSTRING EXAMPLE" << endl;


    QString a = "long";

    a.append(" night");
    a.prepend("The ");

    out << a << endl;
    out << "The string has " << a.count()
        << "chars." << endl;
    out << a.toUpper() << endl;
    out << a.toLower() << endl;

    QString str1 = "The night Train";
    out << str1 << endl;

    QString str2("A yellow rose");
    out << str2 << endl;

    std::string s1 = "A blue sky";
    QString str3 = s1.c_str();
    out << str3 << endl;

    std::string s2 = "A thick Fog";
    QString str4 = QString::fromLatin1(s2.data(),s2.size());
    out << str4 << endl;

    char s3[] = "A Deep Forest";
    QString str5(s3);
    out << str5 << endl;

    out << endl << endl << endl;

    out << endl << "QTIME QDATE EXAMPLE" << endl;

    QDate cd = QDate::currentDate();
    QTime ct = QTime::currentTime();

    out << "Current date is: " << cd.toString() << endl;
    out << "Current time is: " << ct.toString() << endl;

    out << endl << "QMAP EXAMPLE" << endl;

    QMap<QString,int> items1 = { {"books" , 3} , {"coins", 5}};

   items1.insert("bottles", 7);

   QList<int> values1 = items1.values();

   out << "Values : " << endl;

   for (int val : values1) out << val << endl;

   QList<QString> keys = items1.keys();

   out << "Keys : " << endl;

   for (QString key : keys) out << key << endl;

   QMapIterator<QString, int> it1(items1);
   out << "Pairs : " << endl;

   while(it1.hasNext()) {
       it1.next();
       out << it1.key() << " : " << it1.value() << endl;
   }

   qsrand(QTime::currentTime().msec());
   qDebug() << rand() % 100;


    return app.exec();
}
