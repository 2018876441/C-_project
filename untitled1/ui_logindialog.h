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
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_3;
    QComboBox *identityChose;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QLineEdit *pwd_edit;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *user_label;
    QLineEdit *user_edit;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *loginBtn;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *regBtn;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName("LoginDialog");
        LoginDialog->resize(332, 448);
        LoginDialog->setStyleSheet(QString::fromUtf8("QPushButton\n"
" {\n"
"	border-radius:9px;\n"
"}\n"
"\n"
"\n"
"\n"
"background-image: url(:/background/picture/background/picture.png);\n"
"\n"
"QDialog{\n"
"	\n"
"	border-image: url(:/img/bg-star.jpg);}\n"
"\n"
""));
        gridLayout = new QGridLayout(LoginDialog);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(4, 4, 15, -1);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);

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

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);


        gridLayout->addLayout(horizontalLayout_6, 3, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(4, 0, 15, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        label_2 = new QLabel(LoginDialog);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(25, 0));

        horizontalLayout_2->addWidget(label_2);

        pwd_edit = new QLineEdit(LoginDialog);
        pwd_edit->setObjectName("pwd_edit");
        pwd_edit->setMinimumSize(QSize(200, 25));
        pwd_edit->setMaximumSize(QSize(200, 16777215));
        pwd_edit->setStyleSheet(QString::fromUtf8("border-radius:6px;\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.222, x2:1, y2:0.784, stop:0 rgba(147, 198, 190, 128), stop:1 rgba(227, 166, 191, 147));"));

        horizontalLayout_2->addWidget(pwd_edit);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 30, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);

        gridLayout->addItem(verticalSpacer, 4, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(4, 0, 15, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        user_label = new QLabel(LoginDialog);
        user_label->setObjectName("user_label");
        user_label->setMinimumSize(QSize(25, 25));

        horizontalLayout->addWidget(user_label);

        user_edit = new QLineEdit(LoginDialog);
        user_edit->setObjectName("user_edit");
        user_edit->setMinimumSize(QSize(200, 25));
        user_edit->setMaximumSize(QSize(200, 16777215));
        user_edit->setStyleSheet(QString::fromUtf8("border-radius:6px;\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.222, x2:1, y2:0.784, stop:0 rgba(147, 198, 190, 128), stop:1 rgba(227, 166, 191, 147));"));

        horizontalLayout->addWidget(user_edit);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

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

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(22, -1, 22, -1);
        loginBtn = new QPushButton(LoginDialog);
        loginBtn->setObjectName("loginBtn");
        loginBtn->setMinimumSize(QSize(100, 50));
        loginBtn->setStyleSheet(QString::fromUtf8("QPushButton\n"
" {\n"
"	border:none;\n"
"	background-color: qlineargradient(spread:pad, x1:0.636, y1:0.977136, x2:0.477727, y2:0.187591, stop:0.00568182 rgba(176, 143, 234, 237), stop:1 rgba(251, 188, 230, 216));\n"
"}\n"
"\n"
"QPushButton:hover\n"
" {\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:0.25, y1:0.471, x2:0.0345452, y2:0.0512274, stop:0.00568182 rgba(159, 117, 234, 237), stop:1 rgba(251, 188, 230, 216));\n"
"}"));

        horizontalLayout_3->addWidget(loginBtn);


        gridLayout->addLayout(horizontalLayout_3, 5, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(22, -1, 22, -1);
        regBtn = new QPushButton(LoginDialog);
        regBtn->setObjectName("regBtn");
        regBtn->setMinimumSize(QSize(100, 50));
        regBtn->setStyleSheet(QString::fromUtf8("QPushButton\n"
" {\n"
"	border:none;\n"
"	background-color: qlineargradient(spread:pad, x1:0.432, y1:0.0852273, x2:0.659727, y2:1, stop:0 rgba(147, 198, 190, 228), stop:1 rgba(227, 166, 191, 246));\n"
"}\n"
"\n"
"QPushButton:hover\n"
" {\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:0.046, y1:0, x2:0.255864, y2:0.494682, stop:0 rgba(147, 198, 190, 228), stop:1 rgba(216, 146, 174, 246));\n"
"}\n"
""));

        horizontalLayout_4->addWidget(regBtn);


        gridLayout->addLayout(horizontalLayout_4, 6, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(verticalSpacer_2, 7, 0, 1, 1);

        QWidget::setTabOrder(user_edit, pwd_edit);
        QWidget::setTabOrder(pwd_edit, identityChose);
        QWidget::setTabOrder(identityChose, loginBtn);
        QWidget::setTabOrder(loginBtn, regBtn);

        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QCoreApplication::translate("LoginDialog", "\347\231\273\345\275\225\347\225\214\351\235\242", nullptr));
        label_3->setText(QCoreApplication::translate("LoginDialog", "\350\272\253\344\273\275:", nullptr));
        identityChose->setItemText(0, QCoreApplication::translate("LoginDialog", "\345\255\246\347\224\237", nullptr));
        identityChose->setItemText(1, QCoreApplication::translate("LoginDialog", "\350\200\201\345\270\210", nullptr));
        identityChose->setItemText(2, QCoreApplication::translate("LoginDialog", "\350\264\237\350\264\243\344\272\272", nullptr));

        label_2->setText(QCoreApplication::translate("LoginDialog", "\345\257\206\347\240\201\357\274\232", nullptr));
        user_label->setText(QCoreApplication::translate("LoginDialog", "\347\224\250\346\210\267\357\274\232", nullptr));
        label->setText(QCoreApplication::translate("LoginDialog", "\345\255\246\347\224\237\347\256\241\347\220\206\347\263\273\347\273\237\347\231\273\345\275\225\347\225\214\351\235\242", nullptr));
        loginBtn->setText(QCoreApplication::translate("LoginDialog", "\347\231\273\345\275\225", nullptr));
        regBtn->setText(QCoreApplication::translate("LoginDialog", "\346\263\250\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
