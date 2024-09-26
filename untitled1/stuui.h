#ifndef STUUI_H
#define STUUI_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
#include <QSqlError>
#include <QDebug>
namespace Ui {
class StuUi;
}

class StuUi : public QDialog
{
    Q_OBJECT

public:
    explicit StuUi(QString user,QWidget *parent = nullptr);
    ~StuUi();

    void showMessage();
signals:
    void queryScoreSignal();
private:
    Ui::StuUi *ui;
    QString user;
};

#endif // STUUI_H
