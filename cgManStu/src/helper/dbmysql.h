#ifndef DBMYSQL_H
#define DBMYSQL_H

#include <QObject>
#include <QString>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QSqlError>
#include <QMap>
#include <QList>
#include <QVariant>
#include "src/helper/filehelper.h"
#include <QTimer>
#include <QMutex>

class Dbmysql : public QObject
{
    Q_OBJECT
public:
    explicit Dbmysql(QObject *parent = nullptr);
    ~Dbmysql();

    void connectdb(const QString &dbPath);
    QSqlQuery exec(const QString &sql);
    QSqlQuery exec(const QString &sql, const QVariantList &variantList);
    bool exists(const QString &sql);
    bool exists(const QString &sql, const QVariantList &variantList);
    bool connectStatus();

private:
    QSqlDatabase m_db;
    QMutex m_mutex;
};

#endif // DBMYSQL_H

/*#ifndef DBMYSQL_H
#define DBMYSQL_H

#include <QObject>
#include <QString>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QSqlError>
#include <QMap>
#include <QList>
#include <QVariant>
#include "src/helper/filehelper.h"
#include <QTimer>

class Dbmysql:public QObject
{
    Q_OBJECT
public:
    explicit Dbmysql(QObject *parent=nullptr);
    ~Dbmysql();

    void connectdb(const QString& dbPath);
    QSqlQuery exec(const QString& sql);
    QSqlQuery exec(const QString& sql,const QVariantList& variantList);
    bool exists(const QString& sql);
    bool exists(const QString& sql,const QVariantList& variantList);

private slots:
    void checkDBStatus();

private:
    QSqlDatabase m_db;
    QTimer m_connectionCheckTimer;
};

#endif // DBMYSQL_H
*/
