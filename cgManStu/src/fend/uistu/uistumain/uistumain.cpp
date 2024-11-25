#include "uistumain.h"
#include "ui_uistumain.h"

UiStuMain::UiStuMain(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::UiStuMain)
{
    ui->setupUi(this);
}

UiStuMain::~UiStuMain()
{
    delete ui;
}

void UiStuMain::on_pushButton_clicked()
{
    emit toUiStuMessage();
}


void UiStuMain::on_pushButton_3_clicked()
{
    emit toUiStuScore();
}


void UiStuMain::on_pushButton_2_clicked()
{
    emit toUiStuModfiy();
}


void UiStuMain::on_pushButton_4_clicked()
{
    emit toUilogin();
}

