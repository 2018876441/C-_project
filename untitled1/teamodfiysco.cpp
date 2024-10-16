#include "teamodfiysco.h"
#include "ui_teamodfiysco.h"

teaModfiySco::teaModfiySco(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::teaModfiySco)
{
    ui->setupUi(this);
    setWindowTitle("修改学生成绩");
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
        QString stuId=ui->idEdit->text();
        QString stuSco=ui->scoEdit->text();
        QString stuTerm=ui->termBox->currentText();

        str="select * from score where Stuid=? and lessonId=?";
        sql.prepare(str);
        sql.addBindValue(stuId);
        sql.addBindValue(cId);
        sql.exec();
        if(sql.size()==0){
            QMessageBox::information(nullptr,"提示","该学生的成绩未录入成功");
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

        str="update score set _score=?,term=? where Stuid=? and lessonId=?";
        sql.prepare(str);
        sql.addBindValue(stuSco.toInt());
        sql.addBindValue(stuTerm);
        sql.addBindValue(stuId.toInt());
        sql.addBindValue(cId);

        if(!sql.exec()){
            qDebug()<<"修改失败："<<sql.lastError();
        }

        this->accept();
    });
    connect(ui->exitBtn,&QPushButton::clicked,this,[this](){
        this->close();
    });
}

teaModfiySco::~teaModfiySco()
{
    delete ui;
}

void teaModfiySco::setClassId(QString id)
{
    this->classId=id;
}
