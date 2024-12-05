#ifndef UIADMINSTUMESSAGE_H
#define UIADMINSTUMESSAGE_H

#include <QWidget>
#include "src/bend/man/manadmin/manStuMessage/manstumessage.h"
#include<QTableView>
#include <QHeaderView>

namespace Ui {
class uiAdminStuMessage;
}

class uiAdminStuMessage : public QWidget
{
    Q_OBJECT

public:
    explicit uiAdminStuMessage(QWidget *parent = nullptr);
    ~uiAdminStuMessage();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

signals:
    void toMainUi();

private:
    Ui::uiAdminStuMessage *ui;
    QTableView* tv0=nullptr;
    QTableView* tv1=nullptr;
};

#endif // UIADMINSTUMESSAGE_H
