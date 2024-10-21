/********************************************************************************
** Form generated from reading UI file 'adminui.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINUI_H
#define UI_ADMINUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminUi
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QLabel *label;
    QLineEdit *showName;
    QLabel *label_2;
    QLineEdit *showcollege;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QStackedWidget *sw;

    void setupUi(QWidget *adminUi)
    {
        if (adminUi->objectName().isEmpty())
            adminUi->setObjectName("adminUi");
        adminUi->resize(636, 456);
        horizontalLayout = new QHBoxLayout(adminUi);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(-1, -1, 5, -1);
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout->addItem(verticalSpacer_2);

        label = new QLabel(adminUi);
        label->setObjectName("label");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(label);

        showName = new QLineEdit(adminUi);
        showName->setObjectName("showName");
        showName->setReadOnly(true);

        verticalLayout->addWidget(showName);

        label_2 = new QLabel(adminUi);
        label_2->setObjectName("label_2");
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(label_2);

        showcollege = new QLineEdit(adminUi);
        showcollege->setObjectName("showcollege");
        showcollege->setReadOnly(true);

        verticalLayout->addWidget(showcollege);

        pushButton_2 = new QPushButton(adminUi);
        pushButton_2->setObjectName("pushButton_2");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);
        pushButton_2->setMinimumSize(QSize(0, 30));

        verticalLayout->addWidget(pushButton_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);

        frame = new QFrame(adminUi);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::Shape::WinPanel);
        frame->setFrameShadow(QFrame::Shadow::Sunken);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName("verticalLayout_2");
        sw = new QStackedWidget(frame);
        sw->setObjectName("sw");
        sw->setFrameShape(QFrame::Shape::Box);
        sw->setFrameShadow(QFrame::Shadow::Raised);

        verticalLayout_2->addWidget(sw);


        horizontalLayout->addWidget(frame);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 5);

        retranslateUi(adminUi);

        QMetaObject::connectSlotsByName(adminUi);
    } // setupUi

    void retranslateUi(QWidget *adminUi)
    {
        adminUi->setWindowTitle(QCoreApplication::translate("adminUi", "Form", nullptr));
        label->setText(QCoreApplication::translate("adminUi", "\347\224\250\346\210\267\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("adminUi", "\350\264\237\350\264\243\345\255\246\351\231\242", nullptr));
        pushButton_2->setText(QCoreApplication::translate("adminUi", "\347\256\241\347\220\206\350\200\201\345\270\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminUi: public Ui_adminUi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINUI_H
