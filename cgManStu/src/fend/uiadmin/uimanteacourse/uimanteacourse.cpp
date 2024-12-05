#include "uimanteacourse.h"
#include "ui_uimanteacourse.h"

UiManTeaCourse::UiManTeaCourse(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::UiManTeaCourse)
{
    ui->setupUi(this);
    tv0=new QTableView(this);
    tv1=new QTableView(this);

    tv0->setModel(MTC->model());
    tv1->setModel(MTC->model());
    tv0->horizontalHeader()->setStretchLastSection(true);
    tv1->horizontalHeader()->setStretchLastSection(true);
    ui->pushButton_2->setVisible(false);

    ui->sw->addWidget(tv0);
    ui->sw->addWidget(tv1);

    connect(tv0,&QTableView::doubleClicked,this,[this](const QModelIndex &index){
        QModelIndex idx=MTC->model()->index(index.row(),0);
        tv0->selectRow(index.row());

        QString str=idx.data().toString();
        MTC->selectTeaCourse(str);
        ui->sw->setCurrentIndex(1);
        ui->pushButton_2->setVisible(true);
    });

}

UiManTeaCourse::~UiManTeaCourse()
{
    delete ui;
    if(tv0){
        delete tv0;
        tv0=nullptr;
    }
    if(tv1){
        delete tv1;
        tv1=nullptr;
    }
}

void UiManTeaCourse::on_pushButton_clicked()
{
    emit toMainUi();

}


void UiManTeaCourse::on_pushButton_2_clicked()
{
    ui->sw->setCurrentIndex(0);
    MTC->selectTeaMessage();
    ui->pushButton_2->setVisible(false);
}

