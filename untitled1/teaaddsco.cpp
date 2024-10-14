#include "teaaddsco.h"
#include "ui_teaaddsco.h"

teaAddSco::teaAddSco(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::teaAddSco)
{
    ui->setupUi(this);
    setWindowTitle("添加学生成绩");

    connect(ui->checkBtn,&QPushButton::clicked,this,[this](){
        QString classId=ui->classEdit->text();
        QString stuId=ui->stuIdEdit->text();
        QString stuSco=ui->ScoEdit->text();
        QString stuTerm=ui->termEdit->text();

        if(classId.isEmpty()){
            QMessageBox::information(nullptr,"提示","课程编号不能为空");
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

        QSqlQuery sql;
        QString str="insert into score (Stuid,_score,lessonId,term) values (?,?,?,?)";
        sql.prepare(str);
        sql.addBindValue(stuId.toInt());
        sql.addBindValue(stuSco.toInt());
        sql.addBindValue(classId.toInt());
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
