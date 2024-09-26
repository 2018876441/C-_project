#include "registerdialog.h"
#include "ui_registerdialog.h"

RegisterDialog::RegisterDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::RegisterDialog)
{
    ui->setupUi(this);
    connect(ui->stuBtn,&QPushButton::clicked,this,&RegisterDialog::stuRegSignal);
    connect(ui->teaBtn,&QPushButton::clicked,this,&RegisterDialog::teaRegSignal);
    connect(ui->NanBtn,&QPushButton::clicked,this,&RegisterDialog::nanRegSignal);
    connect(ui->backBtn,&QPushButton::clicked,this,&RegisterDialog::backSignal);
}

RegisterDialog::~RegisterDialog()
{
    delete ui;
}

