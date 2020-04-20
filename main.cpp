#include "parser.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Parser object;
    object.setData("test", 29);
    object.serialize(SaveFormat::Json);
    object.print();         // object "test", 29
    qDebug() << "Serialised";


    object.setData("fred", 20); // object "Fred", 20
    object.print();         // object "test", 29

    object.deserialize(SaveFormat::Json);

    qDebug() << "Deserialised again";
    object.print();         // object "test", 29



    return a.exec();
}
