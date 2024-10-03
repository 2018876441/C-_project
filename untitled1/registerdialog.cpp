#include "registerdialog.h"
#include "ui_registerdialog.h"

RegisterDialog::RegisterDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::RegisterDialog)
{
    ui->setupUi(this);
    connect(ui->stuBtn,&QPushButton::clicked,this,&RegisterDialog::stuRegSignal);
    connect(ui->backBtn,&QPushButton::clicked,this,&RegisterDialog::backSignal);
}

RegisterDialog::~RegisterDialog()
{
    delete ui;
}

