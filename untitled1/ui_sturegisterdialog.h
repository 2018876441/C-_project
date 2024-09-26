/********************************************************************************
** Form generated from reading UI file 'sturegisterdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUREGISTERDIALOG_H
#define UI_STUREGISTERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_StuRegisterDialog
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *userEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *nameEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *sexEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *collegeEdit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *majorEdit;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_6;
    QLineEdit *classEdit;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QLineEdit *pwdEdit;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *StuRegisterDialog)
    {
        if (StuRegisterDialog->objectName().isEmpty())
            StuRegisterDialog->setObjectName("StuRegisterDialog");
        StuRegisterDialog->resize(300, 500);
        StuRegisterDialog->setMinimumSize(QSize(300, 500));
        StuRegisterDialog->setMaximumSize(QSize(300, 500));
        verticalLayout = new QVBoxLayout(StuRegisterDialog);
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer = new QSpacerItem(20, 60, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_8 = new QLabel(StuRegisterDialog);
        label_8->setObjectName("label_8");

        horizontalLayout_8->addWidget(label_8);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(StuRegisterDialog);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        userEdit = new QLineEdit(StuRegisterDialog);
        userEdit->setObjectName("userEdit");

        horizontalLayout->addWidget(userEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(StuRegisterDialog);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        nameEdit = new QLineEdit(StuRegisterDialog);
        nameEdit->setObjectName("nameEdit");

        horizontalLayout_2->addWidget(nameEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(StuRegisterDialog);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        sexEdit = new QLineEdit(StuRegisterDialog);
        sexEdit->setObjectName("sexEdit");

        horizontalLayout_3->addWidget(sexEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_4 = new QLabel(StuRegisterDialog);
        label_4->setObjectName("label_4");

        horizontalLayout_4->addWidget(label_4);

        collegeEdit = new QLineEdit(StuRegisterDialog);
        collegeEdit->setObjectName("collegeEdit");

        horizontalLayout_4->addWidget(collegeEdit);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_5 = new QLabel(StuRegisterDialog);
        label_5->setObjectName("label_5");

        horizontalLayout_5->addWidget(label_5);

        majorEdit = new QLineEdit(StuRegisterDialog);
        majorEdit->setObjectName("majorEdit");

        horizontalLayout_5->addWidget(majorEdit);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_6 = new QLabel(StuRegisterDialog);
        label_6->setObjectName("label_6");

        horizontalLayout_7->addWidget(label_6);

        classEdit = new QLineEdit(StuRegisterDialog);
        classEdit->setObjectName("classEdit");

        horizontalLayout_7->addWidget(classEdit);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_7 = new QLabel(StuRegisterDialog);
        label_7->setObjectName("label_7");

        horizontalLayout_6->addWidget(label_7);

        pwdEdit = new QLineEdit(StuRegisterDialog);
        pwdEdit->setObjectName("pwdEdit");

        horizontalLayout_6->addWidget(pwdEdit);


        verticalLayout->addLayout(horizontalLayout_6);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        pushButton = new QPushButton(StuRegisterDialog);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(50, 50));

        verticalLayout_3->addWidget(pushButton);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        verticalLayout->addLayout(verticalLayout_3);


        retranslateUi(StuRegisterDialog);

        QMetaObject::connectSlotsByName(StuRegisterDialog);
    } // setupUi

    void retranslateUi(QDialog *StuRegisterDialog)
    {
        StuRegisterDialog->setWindowTitle(QCoreApplication::translate("StuRegisterDialog", "Dialog", nullptr));
        label_8->setText(QCoreApplication::translate("StuRegisterDialog", "\345\255\246\347\224\237\346\263\250\345\206\214\344\277\241\346\201\257\357\274\232", nullptr));
        label->setText(QCoreApplication::translate("StuRegisterDialog", "\345\255\246\345\217\267\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("StuRegisterDialog", "\345\247\223\345\220\215\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("StuRegisterDialog", "\346\200\247\345\210\253\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("StuRegisterDialog", "\345\255\246\351\231\242\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("StuRegisterDialog", "\344\270\223\344\270\232\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("StuRegisterDialog", "\347\217\255\347\272\247\357\274\232", nullptr));
        label_7->setText(QCoreApplication::translate("StuRegisterDialog", "\345\257\206\347\240\201\357\274\232", nullptr));
        pushButton->setText(QCoreApplication::translate("StuRegisterDialog", "\346\263\250\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StuRegisterDialog: public Ui_StuRegisterDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUREGISTERDIALOG_H
