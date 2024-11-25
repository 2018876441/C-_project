#include "src/fend/uilogin/uidialog.h"
#include "ui_uidialog.h"
#include <QMessageBox>
#include "src/bend/man/manteasco.h"
UiDialog::UiDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::UiDialog)
{
    ui->setupUi(this);
    setWindowFlags(Qt::CustomizeWindowHint);

    ui->label->setProperty("style","h3");
    ui->Labeluser->setProperty("style","h5");
    ui->Label_2->setProperty("style","h5");
    ui->Label_3->setProperty("style","h5");
    ui->userEdit->setProperty("style","h5");
    ui->pwdEdit->setProperty("style","h5");
    ui->comBox->setProperty("style","h5");
    ui->pushButton->setProperty("style","h5");
    ui->pushButton_2->setProperty("style","h5");
}

UiDialog::~UiDialog()
{
    delete ui;
}

void UiDialog::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton){
        m_start=event->pos();
    }
    QDialog::mousePressEvent(event);
}

void UiDialog::mouseMoveEvent(QMouseEvent *event)
{
    if(event->buttons()==Qt::LeftButton){//这里是buttons
        QPoint targetPos=event->pos()-m_start+pos();
        this->move(targetPos);
    }
    QDialog::mouseMoveEvent(event);
}

void UiDialog::on_pushButton_2_clicked()
{
    reject();
}

//登录按钮,处理登录信息。
void UiDialog::on_pushButton_clicked()
{
    QString identity=ui->comBox->currentText();
    userid=ui->userEdit->text().trimmed();
    pwd=ui->pwdEdit->text().trimmed();

    MDB->setUser(userid);
    MDB->setPwd(pwd);
    MDB->setIdentity(identity);

    if(identity=="学生")
    {
        QSqlQuery sql= m_daostu.exists(userid);
        if(!sql.next())
        {
            QMessageBox::information(this,"提示","用户不存在");
            return;
        }
        if(sql.value(0).toString()==userid && sql.value(1).toString()==pwd)
        {
            accept();
        }
        else{
            QMessageBox::information(this,"提示","该用户名或密码错误");
            return;
        }
    }
    else if(identity=="老师"){
        QSqlQuery sql= m_daotea.exists(userid);
        if(!sql.next())
        {
            QMessageBox::information(this,"提示","用户不存在");
            return;
        }
        if(sql.value(0).toString()==userid && sql.value(1).toString()==pwd)
        {
            accept();
            emit resizeTeaUi();
            MT->selectClass();
            //MTS->selectClassStuMessage("1");
            UiTea tea;
            tea.init();

        }
        else{
            QMessageBox::information(this,"提示","该用户名或密码错误");
            return;
        }
    }

}

