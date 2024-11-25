#include "src/helper/filehelper.h"



FileHelper::FileHelper()
{

}

QString FileHelper::readAllTxt(const QString &filePath)
{
    QFile file(filePath);
    if (file.exists() && file.open(QIODevice::ReadOnly))
    {
        QByteArray data = file.readAll();
        file.close();
        return data;
    }
    throw "读取文件失败";
}

QVariant FileHelper::readAllJson(const QString &filepath)
{
    QFile file(filepath);
    if (file.exists() && file.open(QIODevice::ReadOnly))
    {
        QByteArray data = file.readAll();
        QJsonDocument doc=QJsonDocument::fromJson(data);
        file.close();
        return doc.toVariant();;
    }
    throw "读取文件失败";

}

