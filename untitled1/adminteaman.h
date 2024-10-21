#ifndef ADMINTEAMAN_H
#define ADMINTEAMAN_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QMessageBox>

namespace Ui {
class adminTeaMan;
}

class adminTeaMan : public QWidget
{
    Q_OBJECT

public:
    explicit adminTeaMan(QWidget *parent = nullptr);
    ~adminTeaMan();
    void initTableShow();
    void initTableDate();

private:
    Ui::adminTeaMan *ui;
};

#endif // ADMINTEAMAN_H
