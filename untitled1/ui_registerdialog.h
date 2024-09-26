/********************************************************************************
** Form generated from reading UI file 'registerdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
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
    QPushButton *teaBtn;
    QPushButton *NanBtn;
    QPushButton *backBtn;

    void setupUi(QDialog *RegisterDialog)
    {
        if (RegisterDialog->objectName().isEmpty())
            RegisterDialog->setObjectName("RegisterDialog");
        RegisterDialog->resize(300, 500);
        RegisterDialog->setMinimumSize(QSize(300, 500));
        RegisterDialog->setMaximumSize(QSize(300, 500));
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

        verticalLayout->addWidget(stuBtn);

        teaBtn = new QPushButton(layoutWidget);
        teaBtn->setObjectName("teaBtn");
        teaBtn->setMinimumSize(QSize(100, 50));

        verticalLayout->addWidget(teaBtn);

        NanBtn = new QPushButton(layoutWidget);
        NanBtn->setObjectName("NanBtn");
        NanBtn->setMinimumSize(QSize(100, 50));

        verticalLayout->addWidget(NanBtn);

        backBtn = new QPushButton(layoutWidget);
        backBtn->setObjectName("backBtn");
        backBtn->setMinimumSize(QSize(100, 50));

        verticalLayout->addWidget(backBtn);


        retranslateUi(RegisterDialog);

        QMetaObject::connectSlotsByName(RegisterDialog);
    } // setupUi

    void retranslateUi(QDialog *RegisterDialog)
    {
        RegisterDialog->setWindowTitle(QCoreApplication::translate("RegisterDialog", "Dialog", nullptr));
        stuBtn->setText(QCoreApplication::translate("RegisterDialog", "\345\255\246\347\224\237\346\263\250\345\206\214", nullptr));
        teaBtn->setText(QCoreApplication::translate("RegisterDialog", "\350\200\201\345\270\210\346\263\250\345\206\214", nullptr));
        NanBtn->setText(QCoreApplication::translate("RegisterDialog", "\350\264\237\350\264\243\344\272\272\346\263\250\345\206\214", nullptr));
        backBtn->setText(QCoreApplication::translate("RegisterDialog", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterDialog: public Ui_RegisterDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERDIALOG_H
