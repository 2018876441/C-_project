#ifndef ADMINUI_H
#define ADMINUI_H

#include <QWidget>
#include "adminteaman.h"
namespace Ui {
class adminUi;
}

class adminUi : public QWidget
{
    Q_OBJECT

public:
    explicit adminUi(QWidget *parent = nullptr);
    ~adminUi();
    void setUser(QString user);


private:
    Ui::adminUi *ui;
    QString user;
    adminTeaMan* m_adminTeaMan;
};

#endif // ADMINUI_H
