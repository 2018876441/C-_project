#include "teacoursemanagement.h"
#include "ui_teacoursemanagement.h"

TeaCourseManagement::TeaCourseManagement(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TeaCourseManagement)
{
    ui->setupUi(this);
    initTableshow();
    initTableDate();

}

TeaCourseManagement::~TeaCourseManagement()
{
    delete ui;
}

void TeaCourseManagement::initTableshow()
{
    //设置表格控件100行6列
    ui->table->setColumnCount(4);
    ui->table->setRowCount(30);
    //设置表格控件字体大小
    ui->table->setFont(QFont("宋体",13));


    //设置表格列宽度
    ui->table->setColumnWidth(0,80);

}

void TeaCourseManagement::initTableDate()
{
    initTableTitle();
    QSqlQuery sql;
    QString str="select courseId,course.name,credit,usertea.name from course left join usertea on course.teaId= usertea.TeaId where course.teaId=?";
    sql.prepare(str);
    sql.addBindValue(user.toInt());
    if(sql.exec()){
        int i=0;
        while(sql.next())
        {
            QString strId=sql.value(0).toString();
            QString strName=sql.value(1).toString();
            QString strCredit=sql.value(2).toString();
            QString strTea=sql.value(3).toString();

            ui->table->setItem(i,0,new QTableWidgetItem(strId));
            ui->table->setItem(i,1,new QTableWidgetItem(strName));
            ui->table->setItem(i,2,new QTableWidgetItem(strCredit));
            ui->table->setItem(i,3,new QTableWidgetItem(strTea));
            i++;
        }
    }
    else{
        qDebug()<<"数据获取失败:"<<sql.lastError();
        return;
    }
}

void TeaCourseManagement::initTableTitle()
{
    ui->table->clear();
    //设置表格控件标题
    ui->table->setHorizontalHeaderLabels(QStringList()<<"课程编号"<<"课程名称"<<"学分"<<"课程老师");
}

void TeaCourseManagement::setUser(QString user)
{
    this->user=user;
}

QStringList TeaCourseManagement::getCourseName()
{
    QSqlQuery sql;
    QString str="select distinct name from course where teaId=?";
    sql.prepare(str);
    sql.addBindValue(user.toInt());
    if(!sql.exec()){
        qDebug()<<"fails:"<<sql.lastError();
        return courseNameList;
    }
    int i=0;
    while(sql.next())
    {
        courseNameList<<sql.value(0).toString();
        i++;
    }
    return courseNameList;
}


