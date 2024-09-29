#include "databaseconnectionmanager.h"

DatabaseConnectionManager::DatabaseConnectionManager(const QString& databaseName, const QString& user, const QString& password, const QString& host, int port) :
    m_databaseName(databaseName), m_user(user), m_password(password), m_host(host), m_port(port)
{
    m_database = QSqlDatabase::addDatabase("QMYSQL");
    m_database.setDatabaseName(m_databaseName);
    m_database.setUserName(m_user);
    m_database.setPassword(m_password);
    m_database.setHostName(m_host);
    m_database.setPort(m_port);
    connect(&m_connectionCheckTimer, &QTimer::timeout, this, &DatabaseConnectionManager::checkConnection);
    m_connectionCheckTimer.start(10000);  // 每60秒检查一次连接状态
    connectToDatabase();
}
DatabaseConnectionManager::~DatabaseConnectionManager()
{
    if (m_database.isOpen()) {
        m_database.close();
    }
}

void DatabaseConnectionManager::connectToDatabase()
{
    if (!m_database.open()) {
        qDebug() << "数据库连接失败: " << m_database.lastError().text();
        emit connectionStatusChanged(false);
    } else {
        qDebug() << "数据库连接成功";
        emit connectionStatusChanged(true);
    }
}
void DatabaseConnectionManager::checkConnection()
{
    qDebug()<<"数据库状态:"<<isConnected();
    if (!m_database.isOpen()) {
        qDebug() << "检测到数据库连接断开，尝试重新连接...";
        connectToDatabase();
    }
}

bool DatabaseConnectionManager::isConnected() const
{
    return m_database.isOpen();
}
