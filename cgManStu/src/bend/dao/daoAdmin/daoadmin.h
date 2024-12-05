#ifndef DAOADMIN_H
#define DAOADMIN_H

#include <QObject>
#include "src/helper/dbmysql.h"
#include "src/bend/man/mandb.h"

class daoadmin : public QObject
{
    Q_OBJECT
public:
    explicit daoadmin(QObject *parent = nullptr);
    QSqlQuery exists(const QString& userId);
    QSqlQuery selectAdminName(const QString& userId);
    //学生信息维护
    QSqlQuery selectClassCount(const QString &college);
    QSqlQuery selectShowStuMessage(const QString &college, const QString &classId);
    //老师信息维护
    QSqlQuery selectShowTeaMessage(const QString& college);

    //老师课程维护
    QSqlQuery selectTeaMessage(const QString& college);
    QSqlQuery selectTeaCoure(const QString& userId,const QString& college);

signals:

private:
    Dbmysql m_db;
};

#endif // DAOADMIN_H
