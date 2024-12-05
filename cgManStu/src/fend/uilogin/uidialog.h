#ifndef UIDIALOG_H
#define UIDIALOG_H

#include <QDialog>
#include <QMouseEvent>
#include <QDebug>
#include"src/bend/dao/daoStu/daostu.h"
#include "src/bend/man/mantea.h"
#include "src/bend/man/mandb.h"
#include "src/fend/uitea/uitea.h"
#include "src/bend/dao/daoAdmin/daoadmin.h"
#include "src/fend/uiadmin/uiadminmain/uiadminmain.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class UiDialog;
}
QT_END_NAMESPACE

class UiDialog : public QDialog
{
    Q_OBJECT

public:
    UiDialog(QWidget *parent = nullptr);
    ~UiDialog();

protected:
    void mousePressEvent(QMouseEvent* event);
    void mouseMoveEvent(QMouseEvent* event);

signals:
    void resizeTeaUi();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::UiDialog *ui;
    QPoint m_start;
    daoStu m_daostu;
    DaoTea m_daotea;
    daoadmin m_daoadmin;
    QString userid;
    QString pwd;
};
#endif // UIDIALOG_H
