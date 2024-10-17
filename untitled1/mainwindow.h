#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
#include <QDebug>
#include <memory>
#include <QSettings>

#include "logindialog.h"
#include "registerdialog.h"
#include "databaseconnectionmanager.h"
//关于学生的界面
#include "sturegisterdialog.h"
#include "stuui.h"
#include "stuscoreui.h"
#include "stumodfiy.h"

//关于老师的界面
#include "teaui.h"

#include "adminui.h"
using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void connectMysql();

public slots:
    void checkLogin();


private:
    Ui::MainWindow *ui;
    DatabaseConnectionManager* dbManager;
    QString user;
    LoginDialog* m_login;
    RegisterDialog* m_reg;
    StuRegisterDialog* m_stuReg;
    StuUi* m_stuui;
    StuScoreUi* m_stuSco;
    StuModfiy* m_stuModfiy;
    TeaUi* m_teaui;
    adminUi* m_adminui;

};
#endif // MAINWINDOW_H
