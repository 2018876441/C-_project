#include "daoadmin.h"

daoadmin::daoadmin(QObject *parent)
    : QObject{parent}
{

}

QSqlQuery daoadmin::exists(const QString &userId)
{
    QString sql = QString(
                      "select admin_id,admin_password,admin_college from %1 where "
                      "admin_id = '%2';")
                      .arg("user_admin", userId);
    return m_db.exec(sql);
}

QSqlQuery daoadmin::selectAdminName(const QString &userId)
{
    QString sql=QString("select admin_name from user_admin where admin_id=%1").arg(userId);
    return m_db.exec(sql);
}

QSqlQuery daoadmin::selectClassCount(const QString &college)
{
    QString sql=QString("select classId,count(*) "
                        "from userstu "
                        "where college=? "
                        "group by classId");
    QVariantList var;
    var<<college;
    return m_db.exec(sql,var);
}

QSqlQuery daoadmin::selectShowStuMessage(const QString &college, const QString &classId)
{
    QString sql=QString("select StuId,name,sex,classId,major "
                        "from userstu "
                        "where college=? and classId=?");
    QVariantList var;
    var<<college<<classId;
    return m_db.exec(sql,var);
}

QSqlQuery daoadmin::selectShowTeaMessage(const QString &college)
{
    QString sql=QString("select TeaId,name,sex,state "
                        "from usertea "
                        "where college=?");
    QVariantList var;
    var<<college;

    return m_db.exec(sql,var);
}

QSqlQuery daoadmin::selectTeaMessage(const QString &college)
{
    QString sql=QString("select TeaId,name "
                          "from usertea "
                          "where college=?");
    QVariantList var;
    var<<college;

    return m_db.exec(sql,var);
}

QSqlQuery daoadmin::selectTeaCoure(const QString &userId, const QString &college)
{
    QString sql=QString("select ct.course_id,c.name,ct.ScoStatus "
                        "from course_teacher ct "
                        "left join course c "
                        "on ct.course_id=c.courseId "
                        "left join usertea u "
                        "on ct.teacher_id=u.TeaId "
                        "where ct.teacher_id=? and u.college=?");
    QVariantList var;
    var<<userId<<college;
    return m_db.exec(sql,var);
}
