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

    m_adminui=new adminUi();
    ui->sw->addWidget(m_adminui);

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
        checkLogin();
    });


    //学生界面的切换
    //学生界面切换到查看成绩界面
    connect(m_stuui,&StuUi::queryScoreSignal,this,[this](){
        ui->sw->setCurrentWidget(m_stuSco);
        m_stuSco->setUser(this->user);
        m_stuSco->initTableWidgetData();
        resize(700,400);
    });
    //学生界面切换到修改信息界面
    connect(m_stuui,&StuUi::modifyInformationSignal,this,[this](){
        ui->sw->setCurrentWidget(m_stuModfiy);
        m_stuModfiy->setUser(this->user);
        resize(300,400);

    });
    //修改信息界面切换到学生界面
    connect(m_stuModfiy,&StuModfiy::returnSignal,this,[this](){
        ui->sw->setCurrentWidget(m_stuui);
        m_stuui->showMessage();
        resize(300,400);
    });

    //查看成绩界面切换到学生界面
    connect(m_stuSco,&StuScoreUi::returnToStuUiSiganls,this,[this](){
        ui->sw->setCurrentWidget(m_stuui);
        resize(300,400);
    });



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
    if(m_stuModfiy){
        delete m_stuModfiy;
        m_stuModfiy=nullptr;
    }
    if(dbManager){
        delete dbManager;
        dbManager=nullptr;
    }
    if(m_teaui){
        delete m_teaui;
        m_teaui=nullptr;
    }
    if(m_adminui){
        delete m_adminui;
        m_adminui=nullptr;
    }

}


void MainWindow::checkLogin()
{
    resize(1050,500);
    ui->sw->setCurrentWidget(m_adminui);
    return;

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
                resize(300,400);
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
        if(sql.next()){
            if(user==sql.value(0).toString() && pwd==sql.value(1).toString()){
                ui->sw->setCurrentWidget(m_teaui);
                resize(1050,500);
                m_teaui->setUser(this->user);
                m_teaui->showMessage();
            }
            else {
                QMessageBox::information(nullptr,"提示","用户名或密码错误");
                return;
            }
        }
    }
    if(identity=="负责人"){
        QSqlQuery sql;
        QString str = "select admin_id,admin_password from usertea where admin_id =?";
        sql.prepare(str);
        sql.addBindValue(user.toInt());
        if(!sql.exec()){
            QMessageBox::information(nullptr,"提示","该用户不存在");
            qDebug() << "Query execution failed:" << sql.lastError().text();
            return;
        }
        if(sql.next()){
            if(user==sql.value(0).toString() && pwd==sql.value(1).toString()){
                ui->sw->setCurrentWidget(m_adminui);
                m_adminui->setUser(this->user);
                resize(1050,500);
            }
            else {
                QMessageBox::information(nullptr,"提示","用户名或密码错误");
                return;
            }
        }
    }

}


























































