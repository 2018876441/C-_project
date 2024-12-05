/********************************************************************************
** Form generated from reading UI file 'uiadminmain.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UIADMINMAIN_H
#define UI_UIADMINMAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_uiadminmain
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_3;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer_4;
    QPushButton *pushButton_4;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton_5;
    QSpacerItem *verticalSpacer_6;

    void setupUi(QWidget *uiadminmain)
    {
        if (uiadminmain->objectName().isEmpty())
            uiadminmain->setObjectName("uiadminmain");
        uiadminmain->resize(235, 284);
        verticalLayout = new QVBoxLayout(uiadminmain);
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        pushButton = new QPushButton(uiadminmain);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(0, 30));

        verticalLayout->addWidget(pushButton);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        pushButton_2 = new QPushButton(uiadminmain);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setMinimumSize(QSize(0, 30));

        verticalLayout->addWidget(pushButton_2);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        pushButton_4 = new QPushButton(uiadminmain);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setMinimumSize(QSize(0, 30));

        verticalLayout->addWidget(pushButton_4);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        pushButton_5 = new QPushButton(uiadminmain);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setMinimumSize(QSize(0, 22));

        verticalLayout->addWidget(pushButton_5);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_6);


        retranslateUi(uiadminmain);

        QMetaObject::connectSlotsByName(uiadminmain);
    } // setupUi

    void retranslateUi(QWidget *uiadminmain)
    {
        uiadminmain->setWindowTitle(QCoreApplication::translate("uiadminmain", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("uiadminmain", "\347\256\241\347\220\206\345\255\246\347\224\237\344\277\241\346\201\257", nullptr));
        pushButton_2->setText(QCoreApplication::translate("uiadminmain", "\347\256\241\347\220\206\350\200\201\345\270\210\344\277\241\346\201\257", nullptr));
        pushButton_4->setText(QCoreApplication::translate("uiadminmain", "\347\256\241\347\220\206\350\200\201\345\270\210\350\257\276\347\250\213\344\277\241\346\201\257", nullptr));
        pushButton_5->setText(QCoreApplication::translate("uiadminmain", "\351\200\200\345\207\272\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class uiadminmain: public Ui_uiadminmain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UIADMINMAIN_H
