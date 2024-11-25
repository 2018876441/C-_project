#ifndef UISTU_H
#define UISTU_H

#include <QWidget>
#include <QSize>
#include "src/bend/man/manstu.h"

namespace Ui {
class UiStu;
}

class UiStu : public QWidget
{
    Q_OBJECT

public:
    explicit UiStu(QWidget *parent = nullptr);
    ~UiStu();

signals:
    void changSizeStuScoreUi();
    void changSizebackMainUi();
    void toUiLogin();

private:
    Ui::UiStu *ui;

};

#endif // UISTU_H
