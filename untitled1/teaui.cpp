#include "teaui.h"
#include "ui_teaui.h"

TeaUi::TeaUi(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TeaUi)
{
    ui->setupUi(this);
}

TeaUi::~TeaUi()
{
    delete ui;
    if(m_teaCouMan){
        delete m_teaCouMan;
        m_teaCouMan=nullptr;
    }
    if(m_teaManSco){
        delete m_teaManSco;
        m_teaManSco=nullptr;
    }
}

void TeaUi::setUser(QString user)
{
    this->user=user;
}

void TeaUi::showMessage()
{
    QSqlQuery sql;
    QString str="select name from usertea where teaId =?";
    sql.prepare(str);
    sql.addBindValue(user.toInt());
    sql.exec();
    if(sql.next()){
        ui->nameEdit->setText(sql.value(0).toString());
    }
    else{
        qDebug()<<"获取数据失败";
    }

    m_teaCouMan =new TeaCourseManagement();
    m_teaCouMan->setUser(this->user);
    ui->sw->addWidget(m_teaCouMan);
    ui->sw->setCurrentWidget(m_teaCouMan);
    m_teaCouMan->initTableDate();

    courseNameList=m_teaCouMan->getCourseName();
    for(int i=0;i<courseNameList.size();i++){
        ui->chose->addItem(courseNameList.at(i));
    }


    m_teaManSco=new teaManageScore();
    ui->sw->addWidget(m_teaManSco);

    connect(ui->manBtn,&QPushButton::clicked,this,[this](){
        m_teaCouMan->setUser(this->user);
        ui->sw->setCurrentWidget(m_teaCouMan);
        m_teaCouMan->initTableDate();
    });


    connect(ui->ManScoBtn,&QPushButton::clicked,this,[this](){
        if(ui->chose->currentText()=="未选"){
            QMessageBox::information(nullptr,"提示","请选择一门科目，进行成绩管理");
            return;
        }
        m_teaManSco->setCourseName(ui->chose->currentText());
        this->classId=ui->chose->currentText();
        m_teaManSco->setTeaId(this->user);
        ui->sw->setCurrentWidget(m_teaManSco);
        m_teaManSco->initTableDate();
    });

    connect(ui->addBtn,&QPushButton::clicked,this,[this](){
        if(ui->sw->currentWidget()!=m_teaManSco){
            QMessageBox::information(nullptr,"提示","请进入成绩管理界面");
            return;
        }
        teaAddSco addSco;
        addSco.setClassId(this->classId);
        addSco.exec();
    });

}
