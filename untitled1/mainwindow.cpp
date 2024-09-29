#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    dbManager=new DatabaseConnectionManager("stuscosys", "ZJH", "123456", "123.207.61.105", 3306);
    setCentralWidget(ui->sw);

    m_login=new LoginDialog();
    m_reg=new RegisterDialog();
    m_stuReg=new StuRegisterDialog();
    ui->sw->addWidget(m_login);
    ui->sw->addWidget(m_reg);
    ui->sw->addWidget(m_stuReg);

    m_stuui=new StuUi();
    ui->sw->addWidget(m_stuui);
    m_stuSco=new StuScoreUi();
    ui->sw->addWidget(m_stuSco);
    m_stuModfiy=new StuModfiy();
    ui->sw->addWidget(m_stuModfiy);

    m_teaui=new TeaUi();
    ui->sw->addWidget(m_teaui);

    ui->sw->setCurrentWidget(m_login);

    //主界面的跳转
    //主界面切换到注册界面
    connect(m_login,&LoginDialog::registerLoingSignal,this,[this](){
        ui->sw->setCurrentWidget(m_reg);
    });
    //主界面发送用户名
    connect(m_login,&LoginDialog::sendUserNameSignal,this,[this](){
        this->user=m_login->getUser();
        m_stuui->setUser(user);
    });
    //主界面切换到对应界面
    connect(m_login,&LoginDialog::loginSignal,this,[this](){
        //ui->sw->setCurrentWidget(m_stuui);
       // m_stuui->showMessage();
        checkLogin();
    });


    //学生界面的切换
    //学生界面切换到查看成绩界面
    connect(m_stuui,&StuUi::queryScoreSignal,this,[this](){
        ui->sw->setCurrentWidget(m_stuSco);
        m_stuSco->setUser(this->user);
        m_stuSco->initTableWidgetData();
        setMaximumSize(650,400);
        setMinimumSize(650,400);
    });
    //学生界面切换到修改信息界面
    connect(m_stuui,&StuUi::modifyInformationSignal,this,[this](){
        ui->sw->setCurrentWidget(m_stuModfiy);
        m_stuModfiy->setUser(this->user);

    });
    //修改信息界面切换到学生界面
    connect(m_stuModfiy,&StuModfiy::returnSignal,this,[this](){
        ui->sw->setCurrentWidget(m_stuui);
        m_stuui->showMessage();
    });

    //查看成绩界面切换到学生界面
    connect(m_stuSco,&StuScoreUi::returnToStuUiSiganls,this,[this](){
        ui->sw->setCurrentWidget(m_stuui);
        setMaximumSize(300,500);
        setMinimumSize(300,500);
    });

    //老师界面的切换



    //注册界面切换到学生注册界面
    connect(m_reg,&RegisterDialog::stuRegSignal,this,[this](){
        ui->sw->setCurrentWidget(m_stuReg);
    });
    //学生注册切换到主界面
    connect(m_stuReg,&StuRegisterDialog::returnToLoginSignal,this,[this](){
        ui->sw->setCurrentWidget(m_login);
    });
    //注册界面切换到主界面
    connect(m_reg,&RegisterDialog::backSignal,this,[this](){
        ui->sw->setCurrentWidget(m_login);
    });

}

MainWindow::~MainWindow()
{
    delete ui;
    if(m_login){
        delete m_login;
        m_login=nullptr;
    }
    if(m_reg){
        delete m_reg;
        m_reg=nullptr;
    }
    if(m_stuReg){
        delete m_stuReg;
        m_stuReg=nullptr;
    }
    if(m_stuui){
        delete m_stuui;
        m_stuui=nullptr;
    }
    if(m_stuSco){
        delete m_stuSco;
        m_stuSco=nullptr;
    }

}

void MainWindow::connectMysql()
{
    //cyh数据库QODBC
    /*QSqlDatabase db=QSqlDatabase::addDatabase("QODBC");
    db.setHostName("123.207.61.105");//控制面板odbc数据源配置IP保存一致
    db.setPort(3306); //此端口号为：MySQL数据库安装时设置端口编号
    db.setDatabaseName("stusyscyh"); //odbc数据源配置的名称
    db.setPassword("123456");//这个口令密码为：安装MySQL数据库时设置的密码

    bool bok=db.open();//打开数据库
    if(!bok) //加！，失败才会弹出
    {
        QMessageBox::information(nullptr,"提示","MySQL数据库连接失败！");
        return;
    }*/

    /*//QMYSQL
    QSqlDatabase db=QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("123.207.61.105");
    db.setPort(3306);
    db.setDatabaseName("stuscosys");
    db.setUserName("ZJH");
    db.setPassword("123456");
    bool bok=db.open();
    if(!bok) //加！，失败才会弹出
    {
        QMessageBox::information(nullptr,"提示","MySQL数据库连接失败！");
        return;
    }*/



}

void MainWindow::checkLogin()
{
    user=m_login->getUser();
    QString pwd=m_login->getPwd();
    QString identity=m_login->getIdn();

    if(user.isEmpty()) {
        QMessageBox::information(nullptr,"提示","用户名不能为空");
        return;
    }
    if(pwd.isEmpty()) {
        QMessageBox::information(nullptr,"提示","密码不能为空");
        return;
    }
    if(identity=="学生"){
        QSqlQuery sql;
        QString str = "select StuId,password from userstu where StuId =?";
        sql.prepare(str);
        sql.addBindValue(user.toInt());

        if(!sql.exec()){
            QMessageBox::information(nullptr,"提示","该用户不存在");
            qDebug() << "Query execution failed:" << sql.lastError().text();
            return;
        }
        if(sql.next()){
            if(user==sql.value(0).toString() && pwd==sql.value(1).toString()){
                ui->sw->setCurrentWidget(m_stuui);
                m_stuui->showMessage();
            }
            else {
                QMessageBox::information(nullptr,"提示","用户名或密码错误");
                return;
            }
        }
    }
    if(identity=="老师"){
        QSqlQuery sql;
        QString str = "select TeaId,password from usertea where TeaId =?";
        sql.prepare(str);
        sql.addBindValue(user.toInt());
        if(!sql.exec()){
            QMessageBox::information(nullptr,"提示","该用户不存在");
            qDebug() << "Query execution failed:" << sql.lastError().text();
            return;
        }
        qDebug()<<sql.size();
        if(sql.next()){
            if(user==sql.value(0).toString() && pwd==sql.value(1).toString()){
                ui->sw->setCurrentWidget(m_teaui);
                m_teaui->setUser(this->user);
                m_teaui->showMessage();
                setMaximumSize(600,500);
                setMinimumSize(600,500);
            }
            else {
                QMessageBox::information(nullptr,"提示","用户名或密码错误");
                return;
            }
        }
    }
    if(identity=="负责人"){

    }

}


























































