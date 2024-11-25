#include "uitea.h"
#include "ui_uitea.h"
#include "src/bend/man/mantea.h"
#include "src/bend/man/manteasco.h"
#include <QMessageBox>
#include <QHeaderView>

UiTea::UiTea(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::UiTea)
{
    ui->setupUi(this);
    //设置列宽度
    //ui->tableView->setColumnWidth(0,100);
    //ui->tableView->setColumnWidth(1,200);
    m_tableView0=new QTableView();
    m_tableView1=new QTableView();

    ui->sw->addWidget(m_tableView0);
    ui->sw->addWidget(m_tableView1);
    ui->sw->setCurrentIndex(0);

    m_tableView0->setModel(MT->teaModel());
    m_tableView1->setModel(MTS->teaModel());
    m_tableView0->horizontalHeader()->setStretchLastSection(true);
    m_tableView1->horizontalHeader()->setStretchLastSection(true);
    ui->pushButton_2->setVisible(false);


    connect(m_tableView0,&QTableView::doubleClicked,this,[this](const QModelIndex &index){
        QModelIndex idx=MT->teaModel()->index(index.row(),0);
        m_tableView0->selectRow(index.row());

        QString str=idx.data().toString();
        MTS->selectClassStuMessage(str);
        ui->pushButton_2->setVisible(true);
        ui->sw->setCurrentIndex(1);
    });
}

UiTea::~UiTea()
{
    delete ui;
    if(m_tableView0){
        delete m_tableView0;
        m_tableView0=nullptr;
    }
    if(m_tableView1){
        delete m_tableView1;
        m_tableView1=nullptr;
    }
}

void UiTea::init()
{
    ui->lineEdit->setText(MT->selectTeaName());
}

void UiTea::on_pushButton_clicked()
{
    emit toLoginUi();
}


void UiTea::on_pushButton_2_clicked()
{
    ui->sw->setCurrentIndex(0);
    ui->pushButton_2->setVisible(false);
}

