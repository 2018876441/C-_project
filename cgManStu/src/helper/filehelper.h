#ifndef FILEHELPER_H
#define FILEHELPER_H

#include <QString>
#include <QByteArray>
#include <QFile>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonValue>
#include <QJsonObject>
class FileHelper
{
public:
    FileHelper();

    static QString readAllTxt(const QString& filePath);
    static QVariant readAllJson(const QString& filepath);
};

#endif // FILEHELPER_H
