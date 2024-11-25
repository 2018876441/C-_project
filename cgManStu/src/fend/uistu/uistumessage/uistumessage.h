#ifndef UISTUMESSAGE_H
#define UISTUMESSAGE_H

#include <QWidget>
#include <src/bend/man/manstu.h>

namespace Ui {
class UiStuMessage;
}

class UiStuMessage : public QWidget
{
    Q_OBJECT

public:
    explicit UiStuMessage(QWidget *parent = nullptr);
    ~UiStuMessage();
    void showMessage();

private slots:
    void on_pushButton_clicked();

signals:
    void toUiStuMain();

private:
    Ui::UiStuMessage *ui;
};

#endif // UISTUMESSAGE_H
