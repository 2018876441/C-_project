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
    ~ManDB();
    static ManDB* instance();
    void init();


    QString user() const;
    void setUser(const QString &newUser);

    QString pwd() const;
    void setPwd(const QString &newPwd);

    QString identity() const;
    void setIdentity(const QString &newIdentity);

    QString college() const;
    void setCollege(const QString &newCollege);

public slots:
    void checkDBStatus();

signals:

private:
    void connectdb();
    Dbmysql m_db;
    QString m_user;
    QString m_pwd;
    QString m_identity;
    QString m_college;
    QTimer m_connectionCheckTimer;
    QMutex m_mutex;
};

#endif // MANDB_H
