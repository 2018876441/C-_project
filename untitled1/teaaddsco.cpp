#include "teaaddsco.h"
#include "ui_teaaddsco.h"

teaAddSco::teaAddSco(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::teaAddSco)
{
    ui->setupUi(this);
    setWindowTitle("添加学生成绩");

    connect(ui->checkBtn,&QPushButton::clicked,this,[this](){
        QString className=ui->classEdit->text();
        QString stuId=ui->stuIdEdit->text();
        QString stuName=ui->stuNameEdit->text();
        QString stuSco=ui->ScoEdit->text();
        QString calssId=ui->lessonEdit->text();
        QString college=ui->collegeEdit->text();
        QString major=ui->majorEdit->text();

        if(!className.isEmpty()){

        }
        this->accept();
    });
}

teaAddSco::~teaAddSco()
{
    delete ui;
}
