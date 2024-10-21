#include "adminteaman.h"
#include "ui_adminteaman.h"

adminTeaMan::adminTeaMan(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::adminTeaMan)
{
    ui->setupUi(this);
    initTableShow();

}

adminTeaMan::~adminTeaMan()
{
    delete ui;
}

void adminTeaMan::initTableShow()
{
    ui->tableWidget->setColumnCount(4);
    ui->tableWidget->setRowCount(100);
}

void adminTeaMan::initTableDate()
{
    ui->tableWidget->clearContents();
    QSqlQuery sql;
    QString str="select TeaId,name,sex,state from usertea where college=?";
    sql.prepare(str);
    sql.addBindValue("计算机学院");
    if(sql.exec()){
        int i=0;
        while(sql.next())
        {
            QString strId=sql.value(0).toString();
            QString strName=sql.value(1).toString();
            QString strSex=sql.value(2).toString();
            QString strState=sql.value(3).toString();


            ui->tableWidget->setItem(i,0,new QTableWidgetItem(strId));
            ui->tableWidget->setItem(i,1,new QTableWidgetItem(strName));
            ui->tableWidget->setItem(i,2,new QTableWidgetItem(strSex));
            ui->tableWidget->setItem(i,3,new QTableWidgetItem(strState));
            i++;
        }
    }
    else{
        qDebug()<<"数据获取失败:"<<sql.lastError();
        return;
    }
}
