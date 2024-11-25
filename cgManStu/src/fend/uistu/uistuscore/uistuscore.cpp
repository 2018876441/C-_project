#include "uistuscore.h"
#include "ui_uistuscore.h"
#include "src/bend/man/manstu.h"
#include <QMessageBox>
UiStuScore::UiStuScore(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::UiStuScore)
{
    ui->setupUi(this);
    ui->tableView->setModel(MS->model());
    //设置最后一列贴紧边界
    ui->tableView->horizontalHeader()->setStretchLastSection(true);

}

UiStuScore::~UiStuScore()
{
    delete ui;
}

void UiStuScore::on_pushButton_clicked()
{
    emit toUiStuMain();
}


void UiStuScore::on_pushButton_2_clicked()
{
    QString lessonName=ui->lineEdit->text().trimmed();
    if(!MS->findLesson(lessonName)){
        QMessageBox::information(this,"提示","没有该科目");
    }
}


void UiStuScore::on_pushButton_3_clicked()
{
    MS->selectScore();
}

