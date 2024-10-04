/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_8;
    QLabel *user_label;
    QLineEdit *user_edit;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *regBtn;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_10;
    QLabel *label_3;
    QComboBox *identityChose;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label_2;
    QLineEdit *pwd_edit;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *regBtn_2;
    QSpacerItem *horizontalSpacer_12;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *loginBtn;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName("LoginDialog");
        LoginDialog->resize(300, 500);
        LoginDialog->setMinimumSize(QSize(300, 500));
        LoginDialog->setMaximumSize(QSize(300, 500));
        LoginDialog->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(LoginDialog);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label = new QLabel(LoginDialog);
        label->setObjectName("label");
        label->setMaximumSize(QSize(250, 50));
        QFont font;
        font.setFamilies({QString::fromUtf8("\346\226\271\346\255\243\345\260\217\347\257\206\344\275\223")});
        font.setPointSize(18);
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(false);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("font: 18pt \"\346\226\271\346\255\243\345\260\217\347\257\206\344\275\223\";"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_5->addWidget(label);


        gridLayout->addLayout(horizontalLayout_5, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 30, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);

        gridLayout->addItem(verticalSpacer, 4, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(5, 5, 5, 5);
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_8);

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


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        regBtn = new QPushButton(LoginDialog);
        regBtn->setObjectName("regBtn");
        regBtn->setMinimumSize(QSize(100, 50));
        regBtn->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.432, y1:0.0852273, x2:0.659727, y2:1, stop:0 rgba(147, 198, 190, 228), stop:1 rgba(227, 166, 191, 246));"));

        horizontalLayout_4->addWidget(regBtn);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        gridLayout->addLayout(horizontalLayout_4, 6, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalSpacer_10 = new QSpacerItem(25, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_10);

        label_3 = new QLabel(LoginDialog);
        label_3->setObjectName("label_3");

        horizontalLayout_6->addWidget(label_3);

        identityChose = new QComboBox(LoginDialog);
        identityChose->addItem(QString());
        identityChose->addItem(QString());
        identityChose->addItem(QString());
        identityChose->setObjectName("identityChose");
        identityChose->setMinimumSize(QSize(200, 25));
        identityChose->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 219, 254, 55);\n"
"font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"selection-background-color: rgba(253, 244, 255, 15);"));

        horizontalLayout_6->addWidget(identityChose);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);


        gridLayout->addLayout(horizontalLayout_6, 3, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_9);

        label_2 = new QLabel(LoginDialog);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(25, 0));

        horizontalLayout_2->addWidget(label_2);

        pwd_edit = new QLineEdit(LoginDialog);
        pwd_edit->setObjectName("pwd_edit");
        pwd_edit->setMinimumSize(QSize(200, 25));
        pwd_edit->setMaximumSize(QSize(200, 16777215));

        horizontalLayout_2->addWidget(pwd_edit);

        horizontalSpacer_6 = new QSpacerItem(50, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_11);

        regBtn_2 = new QPushButton(LoginDialog);
        regBtn_2->setObjectName("regBtn_2");
        regBtn_2->setMinimumSize(QSize(100, 50));
        regBtn_2->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.687045, y1:0.994455, x2:0.505636, y2:0.215818, stop:0 rgba(232, 7, 4, 195), stop:0.903409 rgba(213, 65, 81, 197));"));

        horizontalLayout_8->addWidget(regBtn_2);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_12);


        gridLayout->addLayout(horizontalLayout_8, 7, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        loginBtn = new QPushButton(LoginDialog);
        loginBtn->setObjectName("loginBtn");
        loginBtn->setMinimumSize(QSize(100, 50));
        loginBtn->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.636, y1:0.977136, x2:0.477727, y2:0.187591, stop:0.00568182 rgba(176, 143, 234, 237), stop:1 rgba(251, 188, 230, 216));"));

        horizontalLayout_3->addWidget(loginBtn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout_3, 5, 0, 1, 1);


        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QCoreApplication::translate("LoginDialog", "\347\231\273\345\275\225\347\225\214\351\235\242", nullptr));
        label->setText(QCoreApplication::translate("LoginDialog", "\350\261\252\346\235\260\350\265\265\344\273\244\345\255\246\347\224\237\347\256\241\347\220\206\347\263\273\347\273\237\347\231\273\345\275\225\347\225\214\351\235\242", nullptr));
        user_label->setText(QCoreApplication::translate("LoginDialog", "\347\224\250\346\210\267:", nullptr));
        regBtn->setText(QCoreApplication::translate("LoginDialog", "\346\263\250\345\206\214", nullptr));
        label_3->setText(QCoreApplication::translate("LoginDialog", "\350\272\253\344\273\275:", nullptr));
        identityChose->setItemText(0, QCoreApplication::translate("LoginDialog", "\345\255\246\347\224\237", nullptr));
        identityChose->setItemText(1, QCoreApplication::translate("LoginDialog", "\350\200\201\345\270\210", nullptr));
        identityChose->setItemText(2, QCoreApplication::translate("LoginDialog", "\350\264\237\350\264\243\344\272\272", nullptr));

        label_2->setText(QCoreApplication::translate("LoginDialog", "\345\257\206\347\240\201\357\274\232", nullptr));
        regBtn_2->setText(QCoreApplication::translate("LoginDialog", "\347\273\210\347\273\223", nullptr));
        loginBtn->setText(QCoreApplication::translate("LoginDialog", "\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
