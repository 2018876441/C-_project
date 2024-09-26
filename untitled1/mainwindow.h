#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
#include <QDebug>

#include "logindialog.h"
#include "registerdialog.h"
//关于学生的界面
#include "sturegisterdialog.h"
#include "stuui.h"
#include "stuscoreui.h"

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
    void registerDialog();//主界面切换注册界面
    void stuRegSlot();//注册界面切换学生注册界面
    //void teaRegSlot();//注册界面切换老师注册界面
    //void nanRegSlot();//注册界面切换负责人注册界面
    void backRegSlot();//注册界面切换到主界面

    void stuLoginSlot();//主界面切换到学生的界面
    void stuScoreSlot();//学生界面切换到查询成绩界面


private:
    Ui::MainWindow *ui;
    LoginDialog* m_login;
    RegisterDialog* m_reg;
    StuRegisterDialog* m_stuReg;
    StuUi* m_stuui;
    StuScoreUi* m_stuSco;

};
#endif // MAINWINDOW_H
