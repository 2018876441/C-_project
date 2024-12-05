/********************************************************************************
** Form generated from reading UI file 'uiadmin.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UIADMIN_H
#define UI_UIADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "src/fend/uiadmin/uiadminmain/uiadminmain.h"
#include "src/fend/uiadmin/uiadminstumessage/uiadminstumessage.h"
#include "src/fend/uiadmin/uiadminteamessage/uiadminteamessage.h"
#include "src/fend/uiadmin/uimanteacourse/uimanteacourse.h"

QT_BEGIN_NAMESPACE

class Ui_uiadmin
{
public:
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    uiadminmain *main;
    uiAdminStuMessage *stuMessage;
    uiAdminTeaMessage *teaMessage;
    UiManTeaCourse *manTea;

    void setupUi(QWidget *uiadmin)
    {
        if (uiadmin->objectName().isEmpty())
            uiadmin->setObjectName("uiadmin");
        uiadmin->resize(292, 340);
        verticalLayout = new QVBoxLayout(uiadmin);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(uiadmin);
        stackedWidget->setObjectName("stackedWidget");
        main = new uiadminmain();
        main->setObjectName("main");
        stackedWidget->addWidget(main);
        stuMessage = new uiAdminStuMessage();
        stuMessage->setObjectName("stuMessage");
        stackedWidget->addWidget(stuMessage);
        teaMessage = new uiAdminTeaMessage();
        teaMessage->setObjectName("teaMessage");
        stackedWidget->addWidget(teaMessage);
        manTea = new UiManTeaCourse();
        manTea->setObjectName("manTea");
        stackedWidget->addWidget(manTea);

        verticalLayout->addWidget(stackedWidget);


        retranslateUi(uiadmin);

        stackedWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(uiadmin);
    } // setupUi

    void retranslateUi(QWidget *uiadmin)
    {
        uiadmin->setWindowTitle(QCoreApplication::translate("uiadmin", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class uiadmin: public Ui_uiadmin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UIADMIN_H
