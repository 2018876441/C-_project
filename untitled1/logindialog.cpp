#include "logindialog.h"
#include "ui_logindialog.h"

LoginDialog::LoginDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::LoginDialog)
{
    ui->setupUi(this);

    connect(ui->regBtn,&QPushButton::clicked,this,&LoginDialog::registerLoingSignal);
    connect(ui->loginBtn,&QPushButton::clicked,this,[this](){
        emit sendUserNameSignal();
        emit loginSignal();
    });

}

LoginDialog::~LoginDialog()
{
    delete ui;
}

QString LoginDialog::getUser()
{
    return ui->user_edit->text();
}

QString LoginDialog::getPwd()
{
    return ui->pwd_edit->text();
}

QString LoginDialog::getIdn()
{
    return ui->identityChose->currentText();
}


void LoginDialog::on_regBtn_2_released()
{
    QCoreApplication::quit();
}

