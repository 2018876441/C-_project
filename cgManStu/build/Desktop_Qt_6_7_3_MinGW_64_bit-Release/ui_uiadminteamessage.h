/********************************************************************************
** Form generated from reading UI file 'uiadminteamessage.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UIADMINTEAMESSAGE_H
#define UI_UIADMINTEAMESSAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_uiAdminTeaMessage
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QStackedWidget *sw;

    void setupUi(QWidget *uiAdminTeaMessage)
    {
        if (uiAdminTeaMessage->objectName().isEmpty())
            uiAdminTeaMessage->setObjectName("uiAdminTeaMessage");
        uiAdminTeaMessage->resize(400, 300);
        verticalLayout = new QVBoxLayout(uiAdminTeaMessage);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(uiAdminTeaMessage);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(80, 0));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);

        sw = new QStackedWidget(uiAdminTeaMessage);
        sw->setObjectName("sw");

        verticalLayout->addWidget(sw);


        retranslateUi(uiAdminTeaMessage);

        QMetaObject::connectSlotsByName(uiAdminTeaMessage);
    } // setupUi

    void retranslateUi(QWidget *uiAdminTeaMessage)
    {
        uiAdminTeaMessage->setWindowTitle(QCoreApplication::translate("uiAdminTeaMessage", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("uiAdminTeaMessage", "\350\277\224\345\233\236\344\270\273\347\225\214\351\235\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class uiAdminTeaMessage: public Ui_uiAdminTeaMessage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UIADMINTEAMESSAGE_H
