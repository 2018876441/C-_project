#ifndef MANDB_H
#define MANDB_H

#include <QObject>
#include "src/helper/dbmysql.h"

#define MDB ManDB::instance()

class ManDB : public QObject
{
    Q_OBJECT
public:
    explicit ManDB(QObject *parent = nullptr);

    static ManDB* instance();
    void init();


    QString user() const;
    void setUser(const QString &newUser);

    QString pwd() const;
    void setPwd(const QString &newPwd);

    QString identity() const;
    void setIdentity(const QString &newIdentity);

signals:

private:
    void connect();
    Dbmysql m_db;
    QString m_user;
    QString m_pwd;
    QString m_identity;
};

#endif // MANDB_H
