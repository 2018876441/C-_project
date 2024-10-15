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
    ui->table->setColumnCount(5);
    ui->table->setRowCount(30);
    //设置表格控件字体大小
    ui->table->setFont(QFont("宋体",13));


    //设置表格列宽度
    ui->table->setColumnWidth(0,60);
    ui->table->setColumnWidth(1,150);
    ui->table->setColumnWidth(6,150);

}

void TeaCourseManagement::initTableDate()
{
    initTableTitle();
    QSqlQuery sql;
    QString str=R"(select c.courseId,c.name,c.credit,u.name
                    from course_stu as cs
                        left join course as c on cs.course_id=c.courseId
                        left join usertea as u on cs.tea_id=u.TeaId
                    where cs.tea_id=? group by c.courseId)";
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
    ui->table->setHorizontalHeaderLabels(QStringList()<<"课程编号"<<"课程名称"<<"学分"<<"课程老师"<<"开课学院");
}

void TeaCourseManagement::setUser(QString user)
{
    this->user=user;
}

QStringList TeaCourseManagement::getCourseName()
{
    QSqlQuery sql;
    QString str="select c.name from course_teacher as ct left join course as c on ct.course_id=c.courseId where ct.teacher_id=?";
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


