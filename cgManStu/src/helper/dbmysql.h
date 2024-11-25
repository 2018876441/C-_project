#ifndef DBMYSQL_H
#define DBMYSQL_H

#include <QString>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QSqlError>
#include <QMap>
#include <QList>
#include <QVariant>
#include "src/helper/filehelper.h"

class Dbmysql
{
public:
    Dbmysql();
    ~Dbmysql();

    void connect(const QString& dbPath);
    QSqlQuery exec(const QString& sql);
    QSqlQuery exec(const QString& sql,const QVariantList& variantList);
    bool exists(const QString& sql);
    bool exists(const QString& sql,const QVariantList& variantList);


private:
    QSqlDatabase m_db;
};

#endif // DBMYSQL_H
