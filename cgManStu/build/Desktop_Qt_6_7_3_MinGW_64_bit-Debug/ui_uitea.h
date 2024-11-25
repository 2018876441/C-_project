/********************************************************************************
** Form generated from reading UI file 'uitea.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UITEA_H
#define UI_UITEA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UiTea
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QStackedWidget *sw;

    void setupUi(QWidget *UiTea)
    {
        if (UiTea->objectName().isEmpty())
            UiTea->setObjectName("UiTea");
        UiTea->resize(497, 382);
        verticalLayout = new QVBoxLayout(UiTea);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 10);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(UiTea);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(UiTea);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setMaximumSize(QSize(100, 16777215));
        lineEdit->setReadOnly(true);

        horizontalLayout->addWidget(lineEdit);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(UiTea);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setMinimumSize(QSize(100, 25));

        horizontalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(UiTea);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(0, 25));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);

        sw = new QStackedWidget(UiTea);
        sw->setObjectName("sw");

        verticalLayout->addWidget(sw);


        retranslateUi(UiTea);

        sw->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(UiTea);
    } // setupUi

    void retranslateUi(QWidget *UiTea)
    {
        UiTea->setWindowTitle(QCoreApplication::translate("UiTea", "Form", nullptr));
        label->setText(QCoreApplication::translate("UiTea", "\347\224\250\346\210\267\357\274\232", nullptr));
        pushButton_2->setText(QCoreApplication::translate("UiTea", "\350\277\224\345\233\236\350\257\276\347\250\213\345\210\227\350\241\250", nullptr));
        pushButton->setText(QCoreApplication::translate("UiTea", "\351\200\200\345\207\272\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UiTea: public Ui_UiTea {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UITEA_H
