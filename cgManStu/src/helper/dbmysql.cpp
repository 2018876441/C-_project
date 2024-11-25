#include "src/helper/dbmysql.h"
Dbmysql::Dbmysql() {

}

Dbmysql::~Dbmysql()
{
    if(m_db.isOpen()){
        m_db.close();
    }
}

void Dbmysql::connect(const QString &dbPath)
{
    QVariant var=FileHelper::readAllJson(dbPath);
    QJsonArray arr=var.toJsonArray();
    QJsonValue v=arr[0];
    m_db = QSqlDatabase::addDatabase("QMYSQL");
    m_db.setDatabaseName(v["m_databaseName"].toString());
    m_db.setUserName(v["m_user"].toString());
    m_db.setPassword(v["m_password"].toString());
    m_db.setHostName(v["m_host"].toString());
    m_db.setPort(v["m_port"].toInt());
    if(m_db.open()){
        qDebug()<<"数据库连接成功";
    }
}

//执行单条数据库语句，无任何绑定
QSqlQuery Dbmysql::exec(const QString &sql)
{
    QSqlQuery query;
    if(!query.exec(sql)){
        qDebug()<< QString("执行sql（单条）失败%1,%2").arg(sql,m_db.lastError().text());
    }
    return query;
}

//执行单条数据库语句，通过variantlist来批量绑定参数
QSqlQuery Dbmysql::exec(const QString &sql, const QVariantList &variantList)
{
    QSqlQuery query;
    if(!query.prepare(sql)){
        qDebug()<< QString("预编译sql失败%1 %2").arg(sql,m_db.lastError().text());
    }

    for(const auto& var:variantList){
        query.addBindValue(var);
    }

    if(!query.exec()){
        qDebug()<< QString("执行sql 失败%1 %2").arg(sql,m_db.lastError().text());
    }
    return query;
}

//查询完之后，判断是否存在查询出来的语句，但是只能配合无绑定参数的exec使用
bool Dbmysql::exists(const QString &sql)
{
    QSqlQuery query= exec(sql);
    return query.next();
}

bool Dbmysql::exists(const QString &sql, const QVariantList &variantList)
{
    QSqlQuery query= exec(sql,variantList);
    return query.next();
}
