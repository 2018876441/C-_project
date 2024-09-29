#ifndef TEACOURSEMANAGEMENT_H
#define TEACOURSEMANAGEMENT_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QMessageBox>
#include <QStringList>

namespace Ui {
class TeaCourseManagement;
}

class TeaCourseManagement : public QWidget
{
    Q_OBJECT

public:
    explicit TeaCourseManagement(QWidget *parent = nullptr);
    ~TeaCourseManagement();
    void initTableshow();
    void initTableDate();
    void initTableTitle();
    void setUser(QString user);


private:
    Ui::TeaCourseManagement *ui;
    QString user;
};

#endif // TEACOURSEMANAGEMENT_H
