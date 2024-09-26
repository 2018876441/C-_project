#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connectMysql();

    m_login=new LoginDialog();
    setCentralWidget(m_login);
    m_login->show();
    connect(m_login,&LoginDialog::registerLoingSignal,this,&MainWindow::registerDialog);
    connect(m_login,&LoginDialog::loginSignal,this,&MainWindow::stuLoginSlot);

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
    if(m_stuSco){
        delete m_stuSco;
        m_stuSco=nullptr;
    }
    if(m_stuui)
    {
        delete m_stuui;
        m_stuui=nullptr;
    }
}

void MainWindow::connectMysql()
{
    //cyh数据库
    QSqlDatabase db=QSqlDatabase::addDatabase("QODBC");
    db.setHostName("123.207.61.105");//控制面板odbc数据源配置IP保存一致
    db.setPort(3306); //此端口号为：MySQL数据库安装时设置端口编号
    db.setDatabaseName("stusyscyh"); //odbc数据源配置的名称
    db.setPassword("123456");//这个口令密码为：安装MySQL数据库时设置的密码

    bool bok=db.open();//打开数据库
    if(!bok) //加！，失败才会弹出
    {
        QMessageBox::information(nullptr,"提示","MySQL数据库连接失败！");
        return;
    }
}

void MainWindow::registerDialog()
{
    m_login->hide();
    m_reg=new RegisterDialog();
    connect(m_reg,&RegisterDialog::stuRegSignal,this,&MainWindow::stuRegSlot);
    connect(m_reg,&RegisterDialog::backSignal,this,&MainWindow::backRegSlot);


    setCentralWidget(m_reg);
    m_reg->show();
}

void MainWindow::stuRegSlot()
{
    m_stuReg=new StuRegisterDialog();
    setCentralWidget(m_stuReg);
    m_reg->hide();
    m_stuReg->show();
}

void MainWindow::backRegSlot()
{
    m_reg->hide();
    m_login=new LoginDialog;
    connect(m_login,&LoginDialog::registerLoingSignal,this,&MainWindow::registerDialog);
    connect(m_login,&LoginDialog::loginSignal,this,&MainWindow::stuLoginSlot);

    setCentralWidget(m_login);
    m_login->show();

}



void MainWindow::stuLoginSlot()
{
    /*QString user = m_login->getUser();
    QString pwd = m_login->getPwd();
    QString identity = m_login->getIdn();

    QSqlQuery sql;
    // 使用 参数绑定 来确保类型安全
    sql.prepare("SELECT stuId, password FROM userstu WHERE stuId = ?");
    sql.addBindValue(user.toInt()); // 将 user 转换为 int 类型
    if (sql.exec()) {
        if (sql.next()) {  // 确保查询返回了一行
            if (user.toInt() == sql.value(0).toInt() && pwd == sql.value(1).toString()) {
                m_stuui=new StuUi(user);
                connect(m_stuui,&StuUi::queryScoreSignal,this,&MainWindow::stuScoreSlot);
                setCentralWidget(m_stuui);
                m_login->hide();
                m_stuui->show();
            } else {
                QMessageBox::information(nullptr, "提示", "用户名或密码错误");
                return;
            }
        } else {
            QMessageBox::information(nullptr, "提示", "不存在该用户");
            return;
        }
    } else {
        QMessageBox::information(nullptr, "提示", "查询执行失败");
        return;
    }*/
    QString user="6220229";
    m_stuui=new StuUi(user);
    connect(m_stuui,&StuUi::queryScoreSignal,this,&MainWindow::stuScoreSlot);
    setCentralWidget(m_stuui);
    m_login->hide();
    m_stuui->show();
}

void MainWindow::stuScoreSlot()
{
    m_stuSco=new StuScoreUi();
    setMaximumSize(600,400);
    setMinimumSize(600,400);
    setCentralWidget(m_stuSco);
    m_stuui->hide();
    m_stuSco->show();
}



