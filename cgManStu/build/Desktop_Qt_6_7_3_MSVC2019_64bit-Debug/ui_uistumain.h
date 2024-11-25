/********************************************************************************
** Form generated from reading UI file 'uistumain.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UISTUMAIN_H
#define UI_UISTUMAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UiStuMain
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_4;
    QPushButton *pushButton_3;
    QSpacerItem *verticalSpacer_3;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *UiStuMain)
    {
        if (UiStuMain->objectName().isEmpty())
            UiStuMain->setObjectName("UiStuMain");
        UiStuMain->resize(184, 313);
        verticalLayout = new QVBoxLayout(UiStuMain);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(UiStuMain);
        label->setObjectName("label");
        label->setMaximumSize(QSize(16777215, 25));

        horizontalLayout->addWidget(label);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        pushButton = new QPushButton(UiStuMain);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(0, 25));

        verticalLayout_2->addWidget(pushButton);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);

        pushButton_3 = new QPushButton(UiStuMain);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setMinimumSize(QSize(0, 25));

        verticalLayout_2->addWidget(pushButton_3);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        pushButton_2 = new QPushButton(UiStuMain);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setMinimumSize(QSize(0, 25));

        verticalLayout_2->addWidget(pushButton_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        verticalLayout->addLayout(verticalLayout_2);

        verticalLayout->setStretch(2, 1);

        retranslateUi(UiStuMain);

        QMetaObject::connectSlotsByName(UiStuMain);
    } // setupUi

    void retranslateUi(QWidget *UiStuMain)
    {
        UiStuMain->setWindowTitle(QCoreApplication::translate("UiStuMain", "Form", nullptr));
        label->setText(QCoreApplication::translate("UiStuMain", "\345\255\246\347\224\237\347\224\250\346\210\267", nullptr));
        pushButton->setText(QCoreApplication::translate("UiStuMain", "\346\237\245\347\234\213\345\255\246\347\224\237\344\277\241\346\201\257", nullptr));
        pushButton_3->setText(QCoreApplication::translate("UiStuMain", "\346\237\245\347\234\213\345\255\246\347\224\237\346\210\220\347\273\251", nullptr));
        pushButton_2->setText(QCoreApplication::translate("UiStuMain", "\344\277\256\346\224\271\345\255\246\347\224\237\344\277\241\346\201\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UiStuMain: public Ui_UiStuMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UISTUMAIN_H
