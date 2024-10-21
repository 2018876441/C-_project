#include "adminui.h"
#include "ui_adminui.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QMessageBox>

adminUi::adminUi(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::adminUi)
{
    ui->setupUi(this);


    QSqlQuery sql;
    QString str="select admin_name,admin_college from user_admin where admin_id =1";
    sql.prepare(str);
    //sql.addBindValue(user.toInt());
    sql.exec();
    if(sql.next()){
        ui->showName->setText(sql.value(0).toString());
        ui->showcollege->setText(sql.value(1).toString());
    }
    else{
        qDebug()<<"负责人获取数据失败";
    }

    m_adminTeaMan=new adminTeaMan();
    ui->sw->addWidget(m_adminTeaMan);
    ui->sw->setCurrentWidget(m_adminTeaMan);
    m_adminTeaMan->initTableDate();

}

adminUi::~adminUi()
{
    delete ui;
    if(m_adminTeaMan){
        delete m_adminTeaMan;
        m_adminTeaMan=nullptr;
    }
}

void adminUi::setUser(QString user)
{
    this->user=user;
}
