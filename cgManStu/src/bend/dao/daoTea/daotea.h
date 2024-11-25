#ifndef DAOTEA_H
#define DAOTEA_H

#include "src/helper/dbmysql.h"
#include "src/bend/man/mandb.h"

class DaoTea
{
public:
    DaoTea();
    QSqlQuery exists(const QString& userId);
    QSqlQuery selectClass(const QString& userId);
    QSqlQuery selectNumber(const QString& userId,const QString& classId);
    QSqlQuery selectTeaMessage(const QString& userId);
    QSqlQuery selectClassStuMessage(const QString& userId,const QString& classId);

    //更新数据操作
    //更新前查询是否存在
    QSqlQuery selectExistsSco(const QStringList& strList);
    QSqlQuery updateScore(const QStringList& strList);
    QSqlQuery addScore(const QStringList& strList,const QString& fieldName);

private:
    Dbmysql m_db;
};

#endif // DAOTEA_H
