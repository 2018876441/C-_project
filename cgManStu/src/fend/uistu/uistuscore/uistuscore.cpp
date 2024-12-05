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

    connect(ui->comboBox,&QComboBox::currentTextChanged,this,&UiStuScore::termSort);
    connect(ui->comboBox_2,&QComboBox::currentTextChanged,this,&UiStuScore::termYearSort);

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

void UiStuScore::termSort(const QString &name)
{
    if(name=="学期") return;
    MS->selectSortTerm(name);
}

void UiStuScore::termYearSort(const QString &name)
{
    if(name=="学年") return;
    else if(name=="第一学年")
    {
        MS->selectSortTermYear(QString("大一上"),QString("大一下"));
    }
    else if(name=="第二学年")
    {
        MS->selectSortTermYear(QString("大二上"),QString("大二下"));
    }
    else if(name=="第二学年")
    {
        MS->selectSortTermYear(QString("大三上"),QString("大三下"));
    }
    else if(name=="第二学年")
    {
        MS->selectSortTermYear(QString("大四上"),QString("大四下"));
    }

}

