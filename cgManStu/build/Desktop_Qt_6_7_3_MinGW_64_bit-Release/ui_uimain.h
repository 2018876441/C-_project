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
#include "src/fend/uiadmin/uiadmin.h"
#include "src/fend/uistu/uistu.h"
#include "src/fend/uitea/uitea.h"

QT_BEGIN_NAMESPACE

class Ui_UiMain
{
public:
    QVBoxLayout *verticalLayout;
    QStackedWidget *sw;
    UiStu *stu;
    UiTea *tea;
    uiadmin *admin;

    void setupUi(QWidget *UiMain)
    {
        if (UiMain->objectName().isEmpty())
            UiMain->setObjectName("UiMain");
        UiMain->resize(259, 369);
        verticalLayout = new QVBoxLayout(UiMain);
        verticalLayout->setObjectName("verticalLayout");
        sw = new QStackedWidget(UiMain);
        sw->setObjectName("sw");
        stu = new UiStu();
        stu->setObjectName("stu");
        sw->addWidget(stu);
        tea = new UiTea();
        tea->setObjectName("tea");
        sw->addWidget(tea);
        admin = new uiadmin();
        admin->setObjectName("admin");
        sw->addWidget(admin);

        verticalLayout->addWidget(sw);


        retranslateUi(UiMain);

        sw->setCurrentIndex(2);


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
