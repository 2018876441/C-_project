/********************************************************************************
** Form generated from reading UI file 'uidialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UIDIALOG_H
#define UI_UIDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_UiDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QPushButton *pushButton_2;
    QFormLayout *formLayout;
    QLabel *Label;
    QLineEdit *userEdit;
    QLabel *Label_2;
    QLineEdit *pwdEdit;
    QLabel *Label_3;
    QComboBox *comBox;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_4;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_5;

    void setupUi(QDialog *UiDialog)
    {
        if (UiDialog->objectName().isEmpty())
            UiDialog->setObjectName("UiDialog");
        UiDialog->resize(224, 306);
        verticalLayout = new QVBoxLayout(UiDialog);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(UiDialog);
        label->setObjectName("label");
        label->setMaximumSize(QSize(16777215, 30));

        horizontalLayout->addWidget(label);

        pushButton_2 = new QPushButton(UiDialog);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setMinimumSize(QSize(30, 30));
        pushButton_2->setMaximumSize(QSize(35, 35));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        Label = new QLabel(UiDialog);
        Label->setObjectName("Label");
        Label->setMinimumSize(QSize(0, 25));

        formLayout->setWidget(1, QFormLayout::LabelRole, Label);

        userEdit = new QLineEdit(UiDialog);
        userEdit->setObjectName("userEdit");
        userEdit->setMinimumSize(QSize(0, 25));

        formLayout->setWidget(1, QFormLayout::FieldRole, userEdit);

        Label_2 = new QLabel(UiDialog);
        Label_2->setObjectName("Label_2");
        Label_2->setMinimumSize(QSize(0, 25));

        formLayout->setWidget(3, QFormLayout::LabelRole, Label_2);

        pwdEdit = new QLineEdit(UiDialog);
        pwdEdit->setObjectName("pwdEdit");
        pwdEdit->setMinimumSize(QSize(0, 25));

        formLayout->setWidget(3, QFormLayout::FieldRole, pwdEdit);

        Label_3 = new QLabel(UiDialog);
        Label_3->setObjectName("Label_3");
        Label_3->setMinimumSize(QSize(0, 25));

        formLayout->setWidget(5, QFormLayout::LabelRole, Label_3);

        comBox = new QComboBox(UiDialog);
        comBox->addItem(QString());
        comBox->addItem(QString());
        comBox->addItem(QString());
        comBox->setObjectName("comBox");
        comBox->setMinimumSize(QSize(0, 25));
        comBox->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);"));

        formLayout->setWidget(5, QFormLayout::FieldRole, comBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        formLayout->setItem(0, QFormLayout::FieldRole, verticalSpacer);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        formLayout->setItem(6, QFormLayout::FieldRole, verticalSpacer_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        formLayout->setItem(4, QFormLayout::FieldRole, verticalSpacer_3);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        formLayout->setItem(2, QFormLayout::FieldRole, verticalSpacer_4);


        verticalLayout->addLayout(formLayout);

        pushButton = new QPushButton(UiDialog);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(0, 25));

        verticalLayout->addWidget(pushButton);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        verticalLayout->setStretch(1, 1);

        retranslateUi(UiDialog);

        QMetaObject::connectSlotsByName(UiDialog);
    } // setupUi

    void retranslateUi(QDialog *UiDialog)
    {
        UiDialog->setWindowTitle(QCoreApplication::translate("UiDialog", "UiDialog", nullptr));
        label->setText(QCoreApplication::translate("UiDialog", "\347\231\273\345\275\225", nullptr));
        pushButton_2->setText(QCoreApplication::translate("UiDialog", "X", nullptr));
        Label->setText(QCoreApplication::translate("UiDialog", "\347\224\250\346\210\267\345\220\215", nullptr));
        Label_2->setText(QCoreApplication::translate("UiDialog", "\345\257\206\347\240\201", nullptr));
        Label_3->setText(QCoreApplication::translate("UiDialog", "\350\272\253\344\273\275", nullptr));
        comBox->setItemText(0, QCoreApplication::translate("UiDialog", "\345\255\246\347\224\237", nullptr));
        comBox->setItemText(1, QCoreApplication::translate("UiDialog", "\350\200\201\345\270\210", nullptr));
        comBox->setItemText(2, QCoreApplication::translate("UiDialog", "\347\256\241\347\220\206\345\221\230", nullptr));

        pushButton->setText(QCoreApplication::translate("UiDialog", "\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UiDialog: public Ui_UiDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UIDIALOG_H
