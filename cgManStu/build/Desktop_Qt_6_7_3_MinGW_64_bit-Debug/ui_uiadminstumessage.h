/********************************************************************************
** Form generated from reading UI file 'uiadminstumessage.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UIADMINSTUMESSAGE_H
#define UI_UIADMINSTUMESSAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_uiAdminStuMessage
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QStackedWidget *sw;

    void setupUi(QWidget *uiAdminStuMessage)
    {
        if (uiAdminStuMessage->objectName().isEmpty())
            uiAdminStuMessage->setObjectName("uiAdminStuMessage");
        uiAdminStuMessage->resize(400, 300);
        verticalLayout = new QVBoxLayout(uiAdminStuMessage);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(uiAdminStuMessage);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setMinimumSize(QSize(100, 0));

        horizontalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(uiAdminStuMessage);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(100, 0));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);

        sw = new QStackedWidget(uiAdminStuMessage);
        sw->setObjectName("sw");

        verticalLayout->addWidget(sw);


        retranslateUi(uiAdminStuMessage);

        sw->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(uiAdminStuMessage);
    } // setupUi

    void retranslateUi(QWidget *uiAdminStuMessage)
    {
        uiAdminStuMessage->setWindowTitle(QCoreApplication::translate("uiAdminStuMessage", "Form", nullptr));
        pushButton_2->setText(QCoreApplication::translate("uiAdminStuMessage", "\350\277\224\345\233\236\345\210\227\350\241\250", nullptr));
        pushButton->setText(QCoreApplication::translate("uiAdminStuMessage", "\350\277\224\345\233\236\344\270\273\350\217\234\345\215\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class uiAdminStuMessage: public Ui_uiAdminStuMessage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UIADMINSTUMESSAGE_H
