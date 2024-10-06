/********************************************************************************
** Form generated from reading UI file 'registerdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERDIALOG_H
#define UI_REGISTERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegisterDialog
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *stuBtn;
    QPushButton *backBtn;

    void setupUi(QDialog *RegisterDialog)
    {
        if (RegisterDialog->objectName().isEmpty())
            RegisterDialog->setObjectName("RegisterDialog");
        RegisterDialog->resize(300, 500);
        RegisterDialog->setMinimumSize(QSize(300, 500));
        RegisterDialog->setMaximumSize(QSize(720, 1024));
        RegisterDialog->setStyleSheet(QString::fromUtf8("QDialog{\n"
"border-image: url(:/img/bg1.jpg);}"));
        layoutWidget = new QWidget(RegisterDialog);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(70, 120, 161, 261));
        layoutWidget->setMinimumSize(QSize(100, 50));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        stuBtn = new QPushButton(layoutWidget);
        stuBtn->setObjectName("stuBtn");
        stuBtn->setMinimumSize(QSize(100, 50));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        stuBtn->setFont(font);
        stuBtn->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color: qlineargradient(spread:pad, x1:0.432, y1:0.0852273, x2:0.659727, y2:1, stop:0 rgba(147, 198, 190, 228), stop:1 rgba(227, 166, 191, 246));\n"
"background-color: qlineargradient(spread:pad, x1:0.046, y1:0, x2:0.255864, y2:0.494682, stop:0 rgba(147, 198, 190, 228), stop:1 rgba(216, 146, 174, 246));"));

        verticalLayout->addWidget(stuBtn);

        backBtn = new QPushButton(layoutWidget);
        backBtn->setObjectName("backBtn");
        backBtn->setMinimumSize(QSize(100, 50));
        backBtn->setFont(font);
        backBtn->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.154, y1:0.0734545, x2:0.687637, y2:0.755773, stop:0 rgba(255, 138, 97, 145), stop:1 rgba(234, 25, 25, 158));"));

        verticalLayout->addWidget(backBtn);


        retranslateUi(RegisterDialog);

        QMetaObject::connectSlotsByName(RegisterDialog);
    } // setupUi

    void retranslateUi(QDialog *RegisterDialog)
    {
        RegisterDialog->setWindowTitle(QCoreApplication::translate("RegisterDialog", "Dialog", nullptr));
        stuBtn->setText(QCoreApplication::translate("RegisterDialog", "\345\255\246\347\224\237\346\263\250\345\206\214", nullptr));
        backBtn->setText(QCoreApplication::translate("RegisterDialog", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterDialog: public Ui_RegisterDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERDIALOG_H
