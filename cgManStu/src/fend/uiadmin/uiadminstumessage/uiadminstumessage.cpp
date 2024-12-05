#include "uiadminstumessage.h"
#include "ui_uiadminstumessage.h"

uiAdminStuMessage::uiAdminStuMessage(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::uiAdminStuMessage)
{
    ui->setupUi(this);
    tv0=new QTableView(this);
    tv1=new QTableView(this);

    tv0->setModel(MSM->model());
    tv0->horizontalHeader()->setStretchLastSection(true);
    tv1->setModel(MSM->model());
    tv1->horizontalHeader()->setStretchLastSection(true);
    ui->pushButton_2->setVisible(false);

    ui->sw->addWidget(tv0);
    ui->sw->addWidget(tv1);




    connect(tv0,&QTableView::doubleClicked,this,[this](const QModelIndex &index){
        QModelIndex idx=MSM->model()->index(index.row(),0);
        tv0->selectRow(index.row());

        QString str=idx.data().toString();
        MSM->selectShowStuMessage(MDB->college(),str);
        ui->sw->setCurrentIndex(1);
        ui->pushButton_2->setVisible(true);
    });
}

uiAdminStuMessage::~uiAdminStuMessage()
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

void uiAdminStuMessage::on_pushButton_clicked()
{
    emit toMainUi();
}


void uiAdminStuMessage::on_pushButton_2_clicked()
{
    ui->sw->setCurrentIndex(0);
    MSM->selectClassCount(MDB->college());
    ui->pushButton_2->setVisible(false);
}

