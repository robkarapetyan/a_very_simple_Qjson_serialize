#ifndef PARSER_H
#define PARSER_H

#include <QDebug>

#include <QString>
#include <QJsonObject>
#include <QFile>
#include <QJsonArray>
#include <QJsonDocument>



enum class SaveFormat {
    Json, Binary
};

class Parser
{
public:
    Parser();
    bool deserialize(SaveFormat saveFormat);
    bool serialize(SaveFormat saveFormat) const;

    void setData(const QString& name, int age );
//    void write(const QJsonObject& a) const;
//    void read(const QJsonObject& a);
    void print();

private:
    SaveFormat _format = SaveFormat::Json;
    QString _name = {};
    int _age = 0;
};


#endif // PARSER_H
