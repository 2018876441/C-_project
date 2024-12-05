/********************************************************************************
** Form generated from reading UI file 'uistumodfiy.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UISTUMODFIY_H
#define UI_UISTUMODFIY_H

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

class Ui_UiStuModfiy
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QFormLayout *formLayout;
    QLabel *Label;
    QLineEdit *LineEdit;
    QLabel *Label_2;
    QLineEdit *LineEdit_2;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *UiStuModfiy)
    {
        if (UiStuModfiy->objectName().isEmpty())
            UiStuModfiy->setObjectName("UiStuModfiy");
        UiStuModfiy->resize(232, 327);
        verticalLayout = new QVBoxLayout(UiStuModfiy);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        label = new QLabel(UiStuModfiy);
        label->setObjectName("label");
        label->setMinimumSize(QSize(0, 25));

        horizontalLayout_2->addWidget(label);


        verticalLayout->addLayout(horizontalLayout_2);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        Label = new QLabel(UiStuModfiy);
        Label->setObjectName("Label");

        formLayout->setWidget(0, QFormLayout::LabelRole, Label);

        LineEdit = new QLineEdit(UiStuModfiy);
        LineEdit->setObjectName("LineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, LineEdit);

        Label_2 = new QLabel(UiStuModfiy);
        Label_2->setObjectName("Label_2");

        formLayout->setWidget(2, QFormLayout::LabelRole, Label_2);

        LineEdit_2 = new QLineEdit(UiStuModfiy);
        LineEdit_2->setObjectName("LineEdit_2");

        formLayout->setWidget(2, QFormLayout::FieldRole, LineEdit_2);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);

        formLayout->setItem(1, QFormLayout::FieldRole, verticalSpacer_3);


        verticalLayout->addLayout(formLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(-1, 0, -1, -1);
        pushButton = new QPushButton(UiStuModfiy);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(0, 25));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(UiStuModfiy);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setMinimumSize(QSize(0, 25));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(UiStuModfiy);

        QMetaObject::connectSlotsByName(UiStuModfiy);
    } // setupUi

    void retranslateUi(QWidget *UiStuModfiy)
    {
        UiStuModfiy->setWindowTitle(QCoreApplication::translate("UiStuModfiy", "Form", nullptr));
        label->setText(QCoreApplication::translate("UiStuModfiy", "\344\277\256\346\224\271\345\257\206\347\240\201\357\274\232", nullptr));
        Label->setText(QCoreApplication::translate("UiStuModfiy", "\346\227\247\345\257\206\347\240\201", nullptr));
        Label_2->setText(QCoreApplication::translate("UiStuModfiy", "\346\226\260\345\257\206\347\240\201", nullptr));
        pushButton->setText(QCoreApplication::translate("UiStuModfiy", "\347\241\256\350\256\244", nullptr));
        pushButton_2->setText(QCoreApplication::translate("UiStuModfiy", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UiStuModfiy: public Ui_UiStuModfiy {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UISTUMODFIY_H
