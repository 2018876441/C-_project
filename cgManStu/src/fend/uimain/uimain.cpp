#include "uimain.h"
#include "ui_uimain.h"
#include "src/bend/man/mandb.h"

UiMain::UiMain(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::UiMain)
{
    ui->setupUi(this);
    m_UiSize=QSize(this->size().width(),this->size().height());

    UiStu* stu = qobject_cast<UiStu*>(ui->sw->widget(0));
    connect(stu,&UiStu::changSizeStuScoreUi,this,[this](){
        resize(600,400);
    });
    connect(stu,&UiStu::changSizebackMainUi,this,[this](){
        resize(m_UiSize);
    });
    connect(stu,&UiStu::toUiLogin,this,[this](){
        hide();
        showLoginUi();
    });

    UiTea* tea=qobject_cast<UiTea*>(ui->sw->widget(1));
    connect(tea,&UiTea::toLoginUi,this,[this](){
        hide();
        showLoginUi();
    });


}

UiMain::~UiMain()
{
    delete ui;
    if(m_loginUi){
        delete m_loginUi;
        m_loginUi=nullptr;
    }
}

void UiMain::showLoginUi()
{
    if(m_loginUi==nullptr){
        m_loginUi=new UiDialog();
        connect(m_loginUi,&UiDialog::accepted,this,[this](){
            if(MDB->identity()=="学生") ui->sw->setCurrentIndex(0);
            else if(MDB->identity()=="老师") ui->sw->setCurrentIndex(1);
            this->show();
        });
        connect(m_loginUi,&UiDialog::resizeTeaUi,this,[this](){
            resize(600,400);
            ui->tea->init();
        });
    }
    hide();
    m_loginUi->show();

}
