#ifndef DATABASECONNECTIONMANAGER_H
#define DATABASECONNECTIONMANAGER_H

#include <QObject>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QTimer>
class DatabaseConnectionManager : public QObject
{
    Q_OBJECT
public:
    explicit DatabaseConnectionManager(const QString& databaseName, const QString& user, const QString& password, const QString& host, int port);
    ~DatabaseConnectionManager();
    bool isConnected() const;
signals:
    void connectionStatusChanged(bool connected);
private slots:
    void checkConnection();
private:
    void connectToDatabase();
    QSqlDatabase m_database;
    QString m_databaseName;
    QString m_user;
    QString m_password;
    QString m_host;
    int m_port;
    QTimer m_connectionCheckTimer;
};

#endif // DATABASECONNECTIONMANAGER_H
