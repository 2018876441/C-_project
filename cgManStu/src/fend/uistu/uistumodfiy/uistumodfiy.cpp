#include "uistumodfiy.h"
#include "ui_uistumodfiy.h"
#include <QMessageBox>

UiStuModfiy::UiStuModfiy(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::UiStuModfiy)
{
    ui->setupUi(this);
    connect(ui->LineEdit,&QLineEdit::textChanged,this,[this](){
        oldPwd=ui->LineEdit->text();
    });
    connect(ui->LineEdit_2,&QLineEdit::textChanged,this,[this](){
        newPwd=ui->LineEdit_2->text();
    });
}

UiStuModfiy::~UiStuModfiy()
{
    delete ui;
}

void UiStuModfiy::on_pushButton_2_clicked()
{
    emit toUiStuMain();
}

QString UiStuModfiy::getNewPwd() const
{
    return newPwd;
}

QString UiStuModfiy::getOldPwd() const
{
    return oldPwd;
}


void UiStuModfiy::on_pushButton_clicked()
{
    if(oldPwd!=MDB->pwd()){
        QMessageBox::warning(this,"提示","旧密码错误，请重新输入");
        return;
    }
    MDB->setPwd(newPwd);
    MS->updatePwd();
    QMessageBox::information(this,"提示","密码修改成功");
}

