/********************************************************************************
** Form generated from reading UI file 'uistu.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UISTU_H
#define UI_UISTU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "src/fend/uistu/uistumain/uistumain.h"
#include "src/fend/uistu/uistumessage/uistumessage.h"
#include "src/fend/uistu/uistumodfiy/uistumodfiy.h"
#include "src/fend/uistu/uistuscore/uistuscore.h"

QT_BEGIN_NAMESPACE

class Ui_UiStu
{
public:
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    UiStuMain *page;
    UiStuMessage *page_3;
    UiStuScore *page_2;
    UiStuModfiy *page_4;

    void setupUi(QWidget *UiStu)
    {
        if (UiStu->objectName().isEmpty())
            UiStu->setObjectName("UiStu");
        UiStu->resize(505, 401);
        verticalLayout = new QVBoxLayout(UiStu);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(UiStu);
        stackedWidget->setObjectName("stackedWidget");
        page = new UiStuMain();
        page->setObjectName("page");
        stackedWidget->addWidget(page);
        page_3 = new UiStuMessage();
        page_3->setObjectName("page_3");
        stackedWidget->addWidget(page_3);
        page_2 = new UiStuScore();
        page_2->setObjectName("page_2");
        stackedWidget->addWidget(page_2);
        page_4 = new UiStuModfiy();
        page_4->setObjectName("page_4");
        stackedWidget->addWidget(page_4);

        verticalLayout->addWidget(stackedWidget);


        retranslateUi(UiStu);

        QMetaObject::connectSlotsByName(UiStu);
    } // setupUi

    void retranslateUi(QWidget *UiStu)
    {
        UiStu->setWindowTitle(QCoreApplication::translate("UiStu", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UiStu: public Ui_UiStu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UISTU_H
