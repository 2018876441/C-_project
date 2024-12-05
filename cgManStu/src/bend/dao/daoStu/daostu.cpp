#include "daostu.h"

daoStu::daoStu() {


}

//查询学生账号
QSqlQuery daoStu::exists(const QString &userId)
{
    QString sql = QString(
                      "select StuId,password from %1 where "
                      "StuId = '%2';")
                      .arg("userstu", userId);
    return m_db.exec(sql);
}

QSqlQuery daoStu::selectScore(const QString &userId)
{
    QString sql=QString ("select s.lessonId,c.name,s._score,u.name,s.term from score as s "
                        "left join course as c on s.lessonId=c.courseId "
                        "left join usertea as u on s.tea_id=u.TeaId "
                        "where s.Stuid='%1';")
                      .arg(userId);

    return m_db.exec(sql);
}

QSqlQuery daoStu::selectStuMess(const QString &userId)
{
    QString sql = QString(
                      "select * from %1 where "
                      "StuId = '%2';")
                      .arg("userstu", userId);
    return m_db.exec(sql);
}

bool daoStu::updatePassWord(const QString &userId, const QString &pwd)
{

    QString sql = QString("update %1 set password =? where StuId =?;").arg("userstu");
    QVariantList varlist;
    varlist << pwd << userId;
    QSqlQuery s = m_db.exec(sql, varlist);
    //QSqlQuery s=m_db.exec(sql);


    if (s.lastError().type() == QSqlError::NoError) {
        return true;
    } else {
        qDebug() << "更新密码失败：" << s.lastError().text();
        return false;
    }
}

QSqlQuery daoStu::findLesson(const QString &userId,const QString &lessonName)
{
    QString sql=QString ("select s.lessonId,c.name,s._score,u.name,s.term from score as s "
                          "left join course as c on s.lessonId=c.courseId "
                          "left join usertea as u on s.tea_id=u.TeaId "
                          "where s.Stuid=? and c.name=?");
    QVariantList var;
    var<<userId<<lessonName;


    return m_db.exec(sql,var);
}

QSqlQuery daoStu::selectSortTerm(const QString &userId, const QString &termName)
{
    QString sql=QString ("select s.lessonId,c.name,s._score,u.name,s.term from score as s "
                          "left join course as c on s.lessonId=c.courseId "
                          "left join usertea as u on s.tea_id=u.TeaId "
                          "where s.Stuid=? and term=?;");
    QVariantList var;
    var<<userId<<termName;

    return m_db.exec(sql,var);


}



