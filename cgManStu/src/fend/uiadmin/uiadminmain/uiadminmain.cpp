#include "uiadminmain.h"
#include "ui_uiadminmain.h"


uiadminmain::uiadminmain(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::uiadminmain)
{
    ui->setupUi(this);

}

uiadminmain::~uiadminmain()
{
    delete ui;
}

// void uiadminmain::setName(const QString &userId)
// {
//     /*QSqlQuery sql= m_dao.selectAdminName(userId);
//     sql.next();
//     QString name=sql.value(0).toString();
//     qDebug()<<name;
//     ui->lineEdit->setText(name);*/
//     //userId;
// }

void uiadminmain::on_pushButton_5_clicked()
{
    emit toLoginUi();
}


void uiadminmain::on_pushButton_clicked()
{
    emit toStuMessageUi();
}


void uiadminmain::on_pushButton_2_clicked()
{
    emit toTeaMessageUi();
}


void uiadminmain::on_pushButton_4_clicked()
{
    emit toManTeaCourseUi();
}



