#ifndef STUMODFIY_H
#define STUMODFIY_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QMessageBox>

namespace Ui {
class StuModfiy;
}

class StuModfiy : public QWidget
{
    Q_OBJECT

public:
    explicit StuModfiy(QWidget *parent = nullptr);
    ~StuModfiy();
    void setUser(QString user);

signals:
    void returnSignal();


private:
    Ui::StuModfiy *ui;
    QString user;
};

#endif // STUMODFIY_H
