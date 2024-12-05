#ifndef UIADMINTEAMESSAGE_H
#define UIADMINTEAMESSAGE_H

#include <QWidget>
#include <QTableView>
#include <QHeaderView>
#include "src/bend/man/manadmin/manTeaMessage/manteamessage.h"

namespace Ui {
class uiAdminTeaMessage;
}

class uiAdminTeaMessage : public QWidget
{
    Q_OBJECT

public:
    explicit uiAdminTeaMessage(QWidget *parent = nullptr);
    ~uiAdminTeaMessage();

private slots:
    void on_pushButton_clicked();

signals:
    void toMainUi();
private:
    Ui::uiAdminTeaMessage *ui;
    QTableView* tv0=nullptr;
};

#endif // UIADMINTEAMESSAGE_H
