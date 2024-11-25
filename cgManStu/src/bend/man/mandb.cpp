#include "src/bend/man/mandb.h"

Q_GLOBAL_STATIC(ManDB,ins)

ManDB::ManDB(QObject *parent)
    : QObject{parent}
{}

ManDB *ManDB::instance()
{
    return ins();
}

void ManDB::init()
{
    connect();
}

void ManDB::connect()
{
    m_db.connect(":/config/src/config/mysqlconfig.json");
}

QString ManDB::identity() const
{
    return m_identity;
}

void ManDB::setIdentity(const QString &newIdentity)
{
    m_identity = newIdentity;
}

QString ManDB::pwd() const
{
    return m_pwd;
}

void ManDB::setPwd(const QString &newPwd)
{
    m_pwd = newPwd;
}

QString ManDB::user() const
{
    return m_user;
}

void ManDB::setUser(const QString &newUser)
{
    m_user = newUser;
}
