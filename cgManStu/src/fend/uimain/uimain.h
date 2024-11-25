#ifndef UIMAIN_H
#define UIMAIN_H

#include <QWidget>
#include <QSize>
#include "src/fend/uilogin/uidialog.h"

namespace Ui {
class UiMain;
}

class UiMain : public QWidget
{
    Q_OBJECT

public:
    explicit UiMain(QWidget *parent = nullptr);
    ~UiMain();
    void showLoginUi();

private:
    Ui::UiMain *ui;
    QSize m_UiSize;
    UiDialog* m_loginUi=nullptr;
};

#endif // UIMAIN_H
