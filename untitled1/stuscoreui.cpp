#include "stuscoreui.h"
#include "ui_stuscoreui.h"

StuScoreUi::StuScoreUi(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::StuScoreUi)
{
    ui->setupUi(this);
}

StuScoreUi::~StuScoreUi()
{
    delete ui;
}
