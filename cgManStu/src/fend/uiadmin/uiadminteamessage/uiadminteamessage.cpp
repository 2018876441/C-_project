#include "uiadminteamessage.h"
#include "ui_uiadminteamessage.h"

uiAdminTeaMessage::uiAdminTeaMessage(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::uiAdminTeaMessage)
{
    ui->setupUi(this);

    tv0=new QTableView(this);
    tv0->setModel(MTM->model());
    tv0->horizontalHeader()->setStretchLastSection(true);
    ui->sw->addWidget(tv0);
}

uiAdminTeaMessage::~uiAdminTeaMessage()
{
    delete ui;
    if(tv0){
        delete tv0;
        tv0=nullptr;
    }
}

void uiAdminTeaMessage::on_pushButton_clicked()
{
    emit toMainUi();
}

