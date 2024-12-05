#include "daotea.h"

DaoTea::DaoTea() {}

QSqlQuery DaoTea::exists(const QString &userId)
{
    QString sql = QString(
                      "select TeaId,password from %1 where "
                      "TeaId = '%2';")
                      .arg("usertea", userId);
    return m_db.exec(sql);
}

QSqlQuery DaoTea::selectClass(const QString &userId)
{
    QString sql = QString("select ct.course_id,c.name "
                            "from course_teacher as ct "
                            "left join course as c "
                            "on ct.course_id=c.courseId "
                            "where ct.teacher_id=%1")
                      .arg(userId);
    return m_db.exec(sql);
}

QSqlQuery DaoTea::selectNumber(const QString &userId,const QString& classId)
{
    QString sql =QString("select count(*) as number "
                        "from  course_stu as cs "
                        "left join course_teacher as ct "
                        "on cs.course_id=ct.course_id and cs.tea_id=ct.teacher_id "
                        "where cs.tea_id=? and cs.course_id=?;");
    QVariantList var;
    var<<userId<<classId;

    return m_db.exec(sql,var);
}

QSqlQuery DaoTea::selectTeaMessage(const QString &userId)
{
    QString sql=QString("select name from usertea where TeaId=%1").arg(userId);
    return m_db.exec(sql);
}

QSqlQuery DaoTea::selectClassStuMessage(const QString &userId, const QString &classId)
{
    QString sql=QString("select cs.stu_id,stu.name,s._score,stu.classId,stu.college,stu.major,s.term,cs.course_id "
        "from course_stu as cs "
        "join course as c "
        "on cs.course_id=c.courseId "
        "join userstu as stu "
        "on cs.stu_id=stu.StuId "
        "left join score as s "
        "on (cs.stu_id=s.Stuid and cs.tea_id=s.tea_id and cs.course_id=s.lessonId) "
        "where cs.tea_id=? and cs.course_id=? "
        "order by stu.college,stu.classId ,stu.major");
    QVariantList var;
    var<<userId<<classId;
    return m_db.exec(sql,var);

}

QSqlQuery DaoTea::selectExistsSco(const QStringList& strList)
{
    QString sql=QString("select Stuid,lessonId "
                          "from score "
                          "where Stuid=? and lessonId=?;");
    QString userId=strList.at(2);
    QString classId=strList.at(3);
    QString fieldName=strList.at(0);
    QVariantList var;
    var<<userId<<classId;
    bool isExist= m_db.exists(sql,var);
    if(isExist)
    {
        return updateScore(strList);
    }
    return addScore(strList,fieldName);
}

QSqlQuery DaoTea::updateScore(const QStringList& strList)
{
    QString sql=QString("update score set %1=? where Stuid=? and lessonId=?;").arg(strList.at(0));
    QVariantList var;
    for(int i=1;i<strList.size();i++)
    {
        var<<strList.at(i);
    }
    return m_db.exec(sql,var);
}

QSqlQuery DaoTea::addScore(const QStringList &strList,const QString& fieldName)
{
    QString sql=QString("INSERT INTO score (Stuid, %1, lessonId,tea_id) VALUES (?,?,?,?);").arg(fieldName);
    QVariantList var;
    var<<strList.at(2)<<strList.at(1)<<strList.at(3)<<MDB->user();
    return m_db.exec(sql,var);
}




