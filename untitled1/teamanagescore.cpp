#include "teamanagescore.h"
#include "ui_teamanagescore.h"

teaManageScore::teaManageScore(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::teaManageScore)
{
    ui->setupUi(this);
    initTableShow();
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

}

void teaManageScore::initTableShow()
{
    //设置表格控件100行6列
    ui->tableWidget->setColumnCount(8);
    ui->tableWidget->setRowCount(200);
    //设置表格控件字体大小
    ui->tableWidget->setFont(QFont("宋体",13));


    ui->tableWidget->setColumnWidth(4,150);

}

void teaManageScore::initTableDate()
{
    qDebug()<<courseName;
    setTableTitle();
    QSqlQuery sql;
    QString str="select c.name,cs.stu_id,u.name,s._score,u.classId,u.college,u.major,s.term from course_stu as cs left join course as c on cs.course_id=c.courseId left join score as s on cs.course_id=s.lessonId left join userstu u on cs.stu_id=u.StuId where c.name=?";
    sql.prepare(str);
    sql.addBindValue(courseName);
    if(sql.exec()){
        int i=0;
        qDebug()<<sql.size();
        while(sql.next())
        {
            QString strName=sql.value(0).toString();
            QString strId=sql.value(1).toString();
            QString strStuName=sql.value(2).toString();
            QString strSco=sql.value(3).toString();
            QString strClassId=sql.value(4).toString();
            QString strCollege=sql.value(5).toString();
            QString strMajor=sql.value(6).toString();
            QString strTerm=sql.value(7).toString();

            ui->tableWidget->setItem(i,0,new QTableWidgetItem(strName));
            ui->tableWidget->setItem(i,1,new QTableWidgetItem(strId));
            ui->tableWidget->setItem(i,2,new QTableWidgetItem(strStuName));
            ui->tableWidget->setItem(i,3,new QTableWidgetItem(strSco));
            ui->tableWidget->setItem(i,4,new QTableWidgetItem(strClassId));
            ui->tableWidget->setItem(i,5,new QTableWidgetItem(strCollege));
            ui->tableWidget->setItem(i,6,new QTableWidgetItem(strMajor));
            ui->tableWidget->setItem(i,7,new QTableWidgetItem(strTerm));

            i++;
        }
    }
    else{
        qDebug()<<"数据获取失败:"<<sql.lastError();
        return;
    }
}

void teaManageScore::setTableTitle()
{
    ui->tableWidget->clear();
    ui->tableWidget->setHorizontalHeaderLabels(QStringList()<<"课程名称"<<"学生学号"<<"学生名称"<<"学生分数"<<"学生班级"<<"学生学院"<<"学生专业"<<"开课学期");

}
