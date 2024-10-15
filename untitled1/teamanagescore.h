#ifndef TEAMANAGESCORE_H
#define TEAMANAGESCORE_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QMessageBox>

namespace Ui {
class teaManageScore;
}

class teaManageScore : public QWidget
{
    Q_OBJECT

public:
    explicit teaManageScore(QWidget *parent = nullptr);
    ~teaManageScore();
    void setCourseName(QString name);
    void setTeaId(QString teaId);
    void showMessage();
    void initTableShow();
    void initTableDate();
    void setTableTitle();

private:
    Ui::teaManageScore *ui;
    QString courseName;
    QString teaId;
};

#endif // TEAMANAGESCORE_H
