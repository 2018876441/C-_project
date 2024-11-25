/********************************************************************************
** Form generated from reading UI file 'uistumessage.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UISTUMESSAGE_H
#define UI_UISTUMESSAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UiStuMessage
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *verticalSpacer_7;
    QFormLayout *formLayout;
    QLabel *Label;
    QLineEdit *LineEdit;
    QLabel *Label_2;
    QLineEdit *LineEdit_2;
    QLabel *Label_3;
    QLineEdit *LineEdit_3;
    QLabel *Label_4;
    QLineEdit *LineEdit_4;
    QLabel *Label_5;
    QLineEdit *LineEdit_5;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer_6;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *UiStuMessage)
    {
        if (UiStuMessage->objectName().isEmpty())
            UiStuMessage->setObjectName("UiStuMessage");
        UiStuMessage->resize(256, 403);
        verticalLayout = new QVBoxLayout(UiStuMessage);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(10, 10, 10, 10);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, -1, -1);
        label = new QLabel(UiStuMessage);
        label->setObjectName("label");
        label->setMinimumSize(QSize(0, 25));

        horizontalLayout->addWidget(label);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_7);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        formLayout->setHorizontalSpacing(10);
        Label = new QLabel(UiStuMessage);
        Label->setObjectName("Label");

        formLayout->setWidget(1, QFormLayout::LabelRole, Label);

        LineEdit = new QLineEdit(UiStuMessage);
        LineEdit->setObjectName("LineEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, LineEdit);

        Label_2 = new QLabel(UiStuMessage);
        Label_2->setObjectName("Label_2");

        formLayout->setWidget(3, QFormLayout::LabelRole, Label_2);

        LineEdit_2 = new QLineEdit(UiStuMessage);
        LineEdit_2->setObjectName("LineEdit_2");

        formLayout->setWidget(3, QFormLayout::FieldRole, LineEdit_2);

        Label_3 = new QLabel(UiStuMessage);
        Label_3->setObjectName("Label_3");

        formLayout->setWidget(5, QFormLayout::LabelRole, Label_3);

        LineEdit_3 = new QLineEdit(UiStuMessage);
        LineEdit_3->setObjectName("LineEdit_3");

        formLayout->setWidget(5, QFormLayout::FieldRole, LineEdit_3);

        Label_4 = new QLabel(UiStuMessage);
        Label_4->setObjectName("Label_4");

        formLayout->setWidget(7, QFormLayout::LabelRole, Label_4);

        LineEdit_4 = new QLineEdit(UiStuMessage);
        LineEdit_4->setObjectName("LineEdit_4");

        formLayout->setWidget(7, QFormLayout::FieldRole, LineEdit_4);

        Label_5 = new QLabel(UiStuMessage);
        Label_5->setObjectName("Label_5");

        formLayout->setWidget(9, QFormLayout::LabelRole, Label_5);

        LineEdit_5 = new QLineEdit(UiStuMessage);
        LineEdit_5->setObjectName("LineEdit_5");

        formLayout->setWidget(9, QFormLayout::FieldRole, LineEdit_5);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        formLayout->setItem(2, QFormLayout::FieldRole, verticalSpacer_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        formLayout->setItem(4, QFormLayout::FieldRole, verticalSpacer_3);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        formLayout->setItem(6, QFormLayout::FieldRole, verticalSpacer_4);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        formLayout->setItem(8, QFormLayout::FieldRole, verticalSpacer_5);


        verticalLayout->addLayout(formLayout);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_6);

        pushButton = new QPushButton(UiStuMessage);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(0, 25));

        verticalLayout->addWidget(pushButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        verticalLayout->setStretch(2, 1);

        retranslateUi(UiStuMessage);

        QMetaObject::connectSlotsByName(UiStuMessage);
    } // setupUi

    void retranslateUi(QWidget *UiStuMessage)
    {
        UiStuMessage->setWindowTitle(QCoreApplication::translate("UiStuMessage", "Form", nullptr));
        label->setText(QCoreApplication::translate("UiStuMessage", "\345\255\246\347\224\237\344\277\241\346\201\257", nullptr));
        Label->setText(QCoreApplication::translate("UiStuMessage", "\345\247\223\345\220\215", nullptr));
        Label_2->setText(QCoreApplication::translate("UiStuMessage", "\346\200\247\345\210\253", nullptr));
        Label_3->setText(QCoreApplication::translate("UiStuMessage", "\347\217\255\347\272\247", nullptr));
        Label_4->setText(QCoreApplication::translate("UiStuMessage", "\344\270\223\344\270\232", nullptr));
        Label_5->setText(QCoreApplication::translate("UiStuMessage", "\345\255\246\351\231\242", nullptr));
        pushButton->setText(QCoreApplication::translate("UiStuMessage", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UiStuMessage: public Ui_UiStuMessage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UISTUMESSAGE_H
