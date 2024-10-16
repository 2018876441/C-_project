#ifndef TEAUI_H
#define TEAUI_H

#include <QWidget>
#include "teacoursemanagement.h"
#include "teamanagescore.h"
#include "teaaddsco.h"
#include "teamodfiysco.h"

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
    QSize returnSize();

private:
    Ui::TeaUi *ui;
    TeaCourseManagement* m_teaCouMan;
    QString user;
    QString classId;
    teaManageScore* m_teaManSco;
    QStringList courseNameList;
};

#endif // TEAUI_H
