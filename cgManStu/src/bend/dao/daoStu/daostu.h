#ifndef DAOSTU_H
#define DAOSTU_H

#include "src/helper/dbmysql.h"

class daoStu
{
public:
    daoStu();

    QSqlQuery exists(const QString& userId);
    QSqlQuery selectScore(const QString& userId);
    QSqlQuery selectStuMess(const QString& userId);
    bool updatePassWord(const QString& userId,const QString& pwd);
    QSqlQuery findLesson(const QString &userId,const QString& lessonName);

private:
    Dbmysql m_db;
};

#endif // DAOSTU_H
