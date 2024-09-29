#include "stumodfiy.h"
#include "ui_stumodfiy.h"

StuModfiy::StuModfiy(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::StuModfiy)
{
    ui->setupUi(this);
    connect(ui->returnBtn,&QPushButton::clicked,this,&StuModfiy::returnSignal);

    connect(ui->confiirmBtn,&QPushButton::clicked,this,[this](){
        QString name=ui->nameEdit->text();
        QString sex=ui->sexEdit->text();
        QString college=ui->collegeEdit->text();
        QString major=ui->majorEdit->text();
        QString classId=ui->classEdit->text();
        qDebug()<<"sex:"<<sex;
        if(!name.isEmpty()) {
            QSqlQuery sql;
            QString str="update userstu set name=? where StuId =?";
            sql.prepare(str);
            sql.addBindValue(name);
            sql.addBindValue(user);
            if(!sql.exec()) qDebug()<<"name fails";
        }
        if(!sex.isEmpty()) {
            if (sex!="男" && sex!="女") {
                QMessageBox::critical(this, "提示", "性别只能是男或女");
                return;
            }
            QSqlQuery sql;
            QString str="update userstu set sex=? where StuId =?";
            sql.prepare(str);
            sql.addBindValue(sex);
            sql.addBindValue(user);
            if(!sql.exec()) qDebug()<<"sex fails";
        }
        if(!college.isEmpty()) {
            QSqlQuery sql;
            QString str="update userstu set college=? where StuId =?";
            sql.prepare(str);
            sql.addBindValue(college);
            sql.addBindValue(user);
            if(!sql.exec()) qDebug()<<"college fails";
        }
        if(!major.isEmpty()) {
            QSqlQuery sql;
            QString str="update userstu set major=? where StuId =?";
            sql.prepare(str);
            sql.addBindValue(major);
            sql.addBindValue(user);
            if(!sql.exec()) qDebug()<<"major fails";
        }
        if(!classId.isEmpty()) {
            // 检查班级是否为有效的整数
            bool conversionOk=false;
            int classId1 = classId.toInt(&conversionOk);
            if (!conversionOk) {
                QMessageBox::critical(this, "提示", "班级必须是整数。");
                return;
            }

            QSqlQuery sql;
            QString str="update userstu set classId=? where StuId =?";
            sql.prepare(str);
            sql.addBindValue(classId1);
            sql.addBindValue(user);
            if(!sql.exec()) qDebug()<<"classId fails";
        }
        QMessageBox::information(nullptr,"提示","修改成功");
    });
}

StuModfiy::~StuModfiy()
{
    delete ui;
}

void StuModfiy::setUser(QString user)
{
    this->user=user;
}
