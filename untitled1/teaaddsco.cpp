#include "teaaddsco.h"
#include "ui_teaaddsco.h"
#include <QMessageBox>

teaAddSco::teaAddSco(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::teaAddSco)
{
    ui->setupUi(this);
    setWindowTitle("添加学生成绩");

    connect(ui->checkBtn,&QPushButton::clicked,this,[this](){

        QSqlQuery sql;
        QString str="select courseId from course where name=?";
        sql.prepare(str);
        sql.addBindValue(this->classId);
        sql.exec();
        int cId=0;
        while(sql.next()){
            cId=sql.value(0).toInt();
        }
        QString stuId=ui->stuIdEdit->text();
        QString stuSco=ui->ScoEdit->text();
        QString stuTerm=ui->termEdit->text();

        str="select * from score where Stuid=? and lessonId=?";
        sql.prepare(str);
        sql.addBindValue(stuId);
        sql.addBindValue(cId);
        sql.exec();
        qDebug()<<sql.size();
        if(!sql.size()==0){
            QMessageBox::information(nullptr,"提示","该学生的成绩已经添加");
            return;
        }

        if(stuId.isEmpty()){
            QMessageBox::information(nullptr,"提示","学生编号不能为空");
            return;
        }
        if(stuSco.isEmpty()){
            QMessageBox::information(nullptr,"提示","学生成绩不能为空");
            return;
        }
        if(stuTerm.isEmpty()){
            QMessageBox::information(nullptr,"提示","开课学期不能为空");
            return;
        }

        str="insert into score (Stuid,_score,lessonId,term) values (?,?,?,?)";
        sql.prepare(str);
        sql.addBindValue(stuId.toInt());
        sql.addBindValue(stuSco.toInt());
        sql.addBindValue(cId);
        sql.addBindValue(stuTerm);
        if(!sql.exec()){
            qDebug()<<"插入失败："<<sql.lastError();
        }

        this->accept();
    });
    connect(ui->exitBtn,&QPushButton::clicked,this,[this](){
        this->close();
    });
}

teaAddSco::~teaAddSco()
{
    delete ui;
}

void teaAddSco::setClassId(QString id)
{
    this->classId=id;
}
