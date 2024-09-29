/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *user_label;
    QLineEdit *user_edit;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *pwd_edit;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_3;
    QComboBox *identityChose;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *loginBtn;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *regBtn;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName("LoginDialog");
        LoginDialog->resize(300, 500);
        LoginDialog->setMinimumSize(QSize(300, 500));
        LoginDialog->setMaximumSize(QSize(300, 500));
        verticalLayout_2 = new QVBoxLayout(LoginDialog);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(7);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label = new QLabel(LoginDialog);
        label->setObjectName("label");
        label->setMaximumSize(QSize(50, 50));

        horizontalLayout_5->addWidget(label);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(5, 5, 5, 5);
        user_label = new QLabel(LoginDialog);
        user_label->setObjectName("user_label");
        user_label->setMinimumSize(QSize(25, 25));

        horizontalLayout->addWidget(user_label);

        user_edit = new QLineEdit(LoginDialog);
        user_edit->setObjectName("user_edit");
        user_edit->setMinimumSize(QSize(200, 25));
        user_edit->setMaximumSize(QSize(200, 16777215));

        horizontalLayout->addWidget(user_edit);

        horizontalSpacer_5 = new QSpacerItem(50, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(LoginDialog);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(25, 0));

        horizontalLayout_2->addWidget(label_2);

        pwd_edit = new QLineEdit(LoginDialog);
        pwd_edit->setObjectName("pwd_edit");
        pwd_edit->setMinimumSize(QSize(200, 25));
        pwd_edit->setMaximumSize(QSize(200, 16777215));

        horizontalLayout_2->addWidget(pwd_edit);

        horizontalSpacer_6 = new QSpacerItem(35, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_3 = new QLabel(LoginDialog);
        label_3->setObjectName("label_3");

        horizontalLayout_6->addWidget(label_3);

        identityChose = new QComboBox(LoginDialog);
        identityChose->addItem(QString());
        identityChose->addItem(QString());
        identityChose->addItem(QString());
        identityChose->setObjectName("identityChose");
        identityChose->setMinimumSize(QSize(200, 25));

        horizontalLayout_6->addWidget(identityChose);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);


        verticalLayout->addLayout(horizontalLayout_6);

        verticalSpacer = new QSpacerItem(20, 30, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        loginBtn = new QPushButton(LoginDialog);
        loginBtn->setObjectName("loginBtn");
        loginBtn->setMinimumSize(QSize(100, 50));

        horizontalLayout_3->addWidget(loginBtn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        regBtn = new QPushButton(LoginDialog);
        regBtn->setObjectName("regBtn");
        regBtn->setMinimumSize(QSize(100, 50));

        horizontalLayout_4->addWidget(regBtn);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QCoreApplication::translate("LoginDialog", "\347\231\273\345\275\225\347\225\214\351\235\242", nullptr));
        label->setText(QCoreApplication::translate("LoginDialog", "\347\231\273\345\275\225\347\225\214\351\235\242", nullptr));
        user_label->setText(QCoreApplication::translate("LoginDialog", "\347\224\250\346\210\267:", nullptr));
        label_2->setText(QCoreApplication::translate("LoginDialog", "\345\257\206\347\240\201:", nullptr));
        label_3->setText(QCoreApplication::translate("LoginDialog", "\350\272\253\344\273\275:", nullptr));
        identityChose->setItemText(0, QCoreApplication::translate("LoginDialog", "\345\255\246\347\224\237", nullptr));
        identityChose->setItemText(1, QCoreApplication::translate("LoginDialog", "\350\200\201\345\270\210", nullptr));
        identityChose->setItemText(2, QCoreApplication::translate("LoginDialog", "\350\264\237\350\264\243\344\272\272", nullptr));

        loginBtn->setText(QCoreApplication::translate("LoginDialog", "\347\231\273\345\275\225", nullptr));
        regBtn->setText(QCoreApplication::translate("LoginDialog", "\346\263\250\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
