#include "src/bend/man/mandb.h"

Q_GLOBAL_STATIC(ManDB,ins)

ManDB::ManDB(QObject *parent)
    : QObject{parent}
{
    // 连接定时器的超时信号到检查数据库状态的槽函数
    connect(&m_connectionCheckTimer, &QTimer::timeout, this, &ManDB::checkDBStatus);
    // 启动定时器，每10000毫秒（10秒）触发一次检查
    m_connectionCheckTimer.start(10000);
}

ManDB::~ManDB()
{
    // 如果定时器正在运行，停止它
    if (m_connectionCheckTimer.isActive()) {
        m_connectionCheckTimer.stop();
    }
}

ManDB *ManDB::instance()
{
    return ins();
}

void ManDB::init()
{
    connectdb();
}

void ManDB::connectdb()
{
    m_db.connectdb(":/config/static/config/mysqlconfig.json");
}

QString ManDB::college() const
{
    return m_college;
}

void ManDB::setCollege(const QString &newCollege)
{
    m_college = newCollege;
}

// 检查数据库状态的槽函数，若连接断开则尝试重连，并处理重连失败情况
void ManDB::checkDBStatus()
{
    QMutexLocker locker(&m_mutex);
    QSqlQuery sql;
    if(!sql.exec("select 1"))
    {
        qDebug()<<"重连数据库";
        connectdb();
    }
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

