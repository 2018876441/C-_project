#ifndef TEAUI_H
#define TEAUI_H

#include <QWidget>
#include "teacoursemanagement.h"


namespace Ui {
class TeaUi;
}

class TeaUi : public QWidget
{
    Q_OBJECT

public:
    explicit TeaUi(QWidget *parent = nullptr);
    ~TeaUi();
    void setUser(QString user);
    void showMessage();

private:
    Ui::TeaUi *ui;
    TeaCourseManagement* m_teaCouMan;
    QString user;
};

#endif // TEAUI_H
