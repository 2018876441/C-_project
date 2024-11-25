/********************************************************************************
** Form generated from reading UI file 'uimain.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UIMAIN_H
#define UI_UIMAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "src/fend/uistu/uistu.h"

QT_BEGIN_NAMESPACE

class Ui_UiMain
{
public:
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    UiStu *page;
    QWidget *page_2;

    void setupUi(QWidget *UiMain)
    {
        if (UiMain->objectName().isEmpty())
            UiMain->setObjectName("UiMain");
        UiMain->resize(259, 369);
        verticalLayout = new QVBoxLayout(UiMain);
        verticalLayout->setObjectName("verticalLayout");
        stackedWidget = new QStackedWidget(UiMain);
        stackedWidget->setObjectName("stackedWidget");
        page = new UiStu();
        page->setObjectName("page");
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        stackedWidget->addWidget(page_2);

        verticalLayout->addWidget(stackedWidget);


        retranslateUi(UiMain);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(UiMain);
    } // setupUi

    void retranslateUi(QWidget *UiMain)
    {
        UiMain->setWindowTitle(QCoreApplication::translate("UiMain", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UiMain: public Ui_UiMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UIMAIN_H
