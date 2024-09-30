#include "teamanagescore.h"
#include "ui_teamanagescore.h"

teaManageScore::teaManageScore(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::teaManageScore)
{
    ui->setupUi(this);
}

teaManageScore::~teaManageScore()
{
    delete ui;
}

void teaManageScore::setCourseName(QString name)
{
    this->courseName=name;
}

void teaManageScore::showMessage()
{
    QSqlQuery sql;
    //QString str="select * from course left join "
}
