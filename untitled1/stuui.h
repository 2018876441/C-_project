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
    explicit StuUi(QWidget *parent = nullptr);
    ~StuUi();

    void showMessage();
    void setUser(QString user);
signals:
    void queryScoreSignal();
    void modifyInformationSignal();
private:
    Ui::StuUi *ui;
    QString user;
};

#endif // STUUI_H
