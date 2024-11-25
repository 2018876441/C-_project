#ifndef UISTUMODFIY_H
#define UISTUMODFIY_H

#include <QWidget>
#include <src/bend/man/mandb.h>
#include <src/bend/man/manstu.h>

namespace Ui {
class UiStuModfiy;
}

class UiStuModfiy : public QWidget
{
    Q_OBJECT

public:
    explicit UiStuModfiy(QWidget *parent = nullptr);
    ~UiStuModfiy();

    QString getOldPwd() const;

    QString getNewPwd() const;

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

signals:
    void toUiStuMain();

private:
    Ui::UiStuModfiy *ui;
    QString oldPwd;
    QString newPwd;

};

#endif // UISTUMODFIY_H
