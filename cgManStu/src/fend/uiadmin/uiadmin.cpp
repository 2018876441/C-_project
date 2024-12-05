#include "uiadmin.h"
#include "ui_uiadmin.h"

uiadmin::uiadmin(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::uiadmin)
{
    ui->setupUi(this);

    ui->stackedWidget->setCurrentIndex(0);
    connect(ui->main,&uiadminmain::toLoginUi,this,[this](){
        emit toLoginUi();
    });

    connect(ui->main,&uiadminmain::toStuMessageUi,this,[this](){
        ui->stackedWidget->setCurrentIndex(1);
        MSM->selectClassCount(MDB->college());
    });
    connect(ui->main,&uiadminmain::toTeaMessageUi,this,[this](){
        ui->stackedWidget->setCurrentIndex(2);
        MTM->selectTeaMessage(MDB->college());
    });
    connect(ui->main,&uiadminmain::toManTeaCourseUi,this,[this](){
        ui->stackedWidget->setCurrentIndex(3);
        MTC->selectTeaMessage();
    });


    //返回主界面
    connect(ui->stuMessage,&uiAdminStuMessage::toMainUi,this,[this](){
        ui->stackedWidget->setCurrentIndex(0);
    });
    connect(ui->teaMessage,&uiAdminTeaMessage::toMainUi,this,[this](){
        ui->stackedWidget->setCurrentIndex(0);
    });
    connect(ui->manTea,&UiManTeaCourse::toMainUi,this,[this](){
        ui->stackedWidget->setCurrentIndex(0);
    });


}

uiadmin::~uiadmin()
{
    delete ui;
}
