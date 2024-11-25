#include "uistumessage.h"
#include "ui_uistumessage.h"

UiStuMessage::UiStuMessage(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::UiStuMessage)
{
    ui->setupUi(this);
}

UiStuMessage::~UiStuMessage()
{
    delete ui;
}

void UiStuMessage::showMessage()
{
    stuMessage stu=MS->selectStuMessage();
    ui->LineEdit->setText(stu.name);
    ui->LineEdit_2->setText(stu.sex);
    ui->LineEdit_3->setText(stu.classId);
    ui->LineEdit_4->setText(stu.major);
    ui->LineEdit_5->setText(stu.college);
}

void UiStuMessage::on_pushButton_clicked()
{
    emit toUiStuMain();
}

