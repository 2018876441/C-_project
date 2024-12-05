/********************************************************************************
** Form generated from reading UI file 'uimanteacourse.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UIMANTEACOURSE_H
#define UI_UIMANTEACOURSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UiManTeaCourse
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QStackedWidget *sw;

    void setupUi(QWidget *UiManTeaCourse)
    {
        if (UiManTeaCourse->objectName().isEmpty())
            UiManTeaCourse->setObjectName("UiManTeaCourse");
        UiManTeaCourse->resize(400, 300);
        verticalLayout = new QVBoxLayout(UiManTeaCourse);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(UiManTeaCourse);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(UiManTeaCourse);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(100, 0));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);

        sw = new QStackedWidget(UiManTeaCourse);
        sw->setObjectName("sw");

        verticalLayout->addWidget(sw);


        retranslateUi(UiManTeaCourse);

        QMetaObject::connectSlotsByName(UiManTeaCourse);
    } // setupUi

    void retranslateUi(QWidget *UiManTeaCourse)
    {
        UiManTeaCourse->setWindowTitle(QCoreApplication::translate("UiManTeaCourse", "Form", nullptr));
        pushButton_2->setText(QCoreApplication::translate("UiManTeaCourse", "\350\277\224\345\233\236", nullptr));
        pushButton->setText(QCoreApplication::translate("UiManTeaCourse", "\350\277\224\345\233\236\344\270\273\347\225\214\351\235\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UiManTeaCourse: public Ui_UiManTeaCourse {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UIMANTEACOURSE_H
