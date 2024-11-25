#include "uistu.h"
#include "ui_uistu.h"

UiStu::UiStu(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::UiStu)
{

    ui->setupUi(this);
    connect(ui->page,&UiStuMain::toUiStuMessage,this,[this](){
        ui->stackedWidget->setCurrentIndex(1);
        ui->page_3->showMessage();
    });
    connect(ui->page,&UiStuMain::toUiStuScore,this,[this](){
        ui->stackedWidget->setCurrentIndex(2);
        emit changSizeStuScoreUi();
        MS->selectScore();
    });

    connect(ui->page,&UiStuMain::toUiStuModfiy,this,[this](){
        ui->stackedWidget->setCurrentIndex(3);

    });


    //返回主界面
    connect(ui->page_3,&UiStuMessage::toUiStuMain,this,[this](){
        ui->stackedWidget->setCurrentIndex(0);

    });
    connect(ui->page_2,&UiStuScore::toUiStuMain,this,[this](){
        ui->stackedWidget->setCurrentIndex(0);
        emit changSizebackMainUi();
    });
    connect(ui->page_4,&UiStuModfiy::toUiStuMain,this,[this](){
        ui->stackedWidget->setCurrentIndex(0);

    });

    //退出登录
    connect(ui->page,&UiStuMain::toUilogin,this,[this](){
        emit toUiLogin();
    });
}

UiStu::~UiStu()
{
    delete ui;
}
