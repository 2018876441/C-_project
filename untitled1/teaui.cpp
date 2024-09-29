#include "teaui.h"
#include "ui_teaui.h"

TeaUi::TeaUi(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TeaUi)
{
    ui->setupUi(this);
}

TeaUi::~TeaUi()
{
    delete ui;
    if(m_teaCouMan){
        delete m_teaCouMan;
        m_teaCouMan=nullptr;
    }
}

void TeaUi::setUser(QString user)
{
    this->user=user;
}

void TeaUi::showMessage()
{
    QSqlQuery sql;
    QString str="select name from usertea where teaId =?";
    sql.prepare(str);
    sql.addBindValue(user.toInt());
    sql.exec();
    if(sql.next()){
        ui->nameEdit->setText(sql.value(0).toString());
    }
    else{
        qDebug()<<"获取数据失败";
    }

    m_teaCouMan =new TeaCourseManagement();
    m_teaCouMan->setUser(this->user);
    ui->sw->addWidget(m_teaCouMan);
    ui->sw->setCurrentWidget(m_teaCouMan);
    m_teaCouMan->initTableDate();
}
