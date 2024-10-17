/********************************************************************************
** Form generated from reading UI file 'sturegisterdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
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
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QLineEdit *userEdit;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_2;
    QLineEdit *nameEdit;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_3;
    QLineEdit *sexEdit;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_4;
    QLineEdit *collegeEdit;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label_5;
    QLineEdit *majorEdit;
    QSpacerItem *horizontalSpacer_10;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_11;
    QLabel *label_6;
    QLineEdit *classEdit;
    QSpacerItem *horizontalSpacer_12;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_13;
    QLabel *label_7;
    QLineEdit *pwdEdit;
    QSpacerItem *horizontalSpacer_14;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_15;
    QPushButton *regBtn;
    QSpacerItem *horizontalSpacer_16;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_18;
    QPushButton *returnBtn;
    QSpacerItem *horizontalSpacer_17;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *StuRegisterDialog)
    {
        if (StuRegisterDialog->objectName().isEmpty())
            StuRegisterDialog->setObjectName("StuRegisterDialog");
        StuRegisterDialog->resize(279, 467);
        StuRegisterDialog->setStyleSheet(QString::fromUtf8("QDialog{border-image: url(:/img/cnh.jpg);}\n"
"QLineEdit{border-radius:6px;background-color: qlineargradient(spread:pad, x1:0.107955, y1:0.137, x2:0.773, y2:0.920364, stop:0 rgba(255, 255, 255, 66), stop:1 rgba(235, 236, 236, 51));}"));
        verticalLayout = new QVBoxLayout(StuRegisterDialog);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(21, -1, 21, -1);
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
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(StuRegisterDialog);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        userEdit = new QLineEdit(StuRegisterDialog);
        userEdit->setObjectName("userEdit");
        userEdit->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.107955, y1:0.137, x2:0.773, y2:0.920364, stop:0 rgba(255, 255, 255, 66), stop:1 rgba(235, 236, 236, 51));\n"
"border-radius:6px;"));

        horizontalLayout->addWidget(userEdit);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        label_2 = new QLabel(StuRegisterDialog);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        nameEdit = new QLineEdit(StuRegisterDialog);
        nameEdit->setObjectName("nameEdit");
        nameEdit->setStyleSheet(QString::fromUtf8("border-radius:6px;"));

        horizontalLayout_2->addWidget(nameEdit);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        label_3 = new QLabel(StuRegisterDialog);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        sexEdit = new QLineEdit(StuRegisterDialog);
        sexEdit->setObjectName("sexEdit");

        horizontalLayout_3->addWidget(sexEdit);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        label_4 = new QLabel(StuRegisterDialog);
        label_4->setObjectName("label_4");

        horizontalLayout_4->addWidget(label_4);

        collegeEdit = new QLineEdit(StuRegisterDialog);
        collegeEdit->setObjectName("collegeEdit");

        horizontalLayout_4->addWidget(collegeEdit);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_9);

        label_5 = new QLabel(StuRegisterDialog);
        label_5->setObjectName("label_5");

        horizontalLayout_5->addWidget(label_5);

        majorEdit = new QLineEdit(StuRegisterDialog);
        majorEdit->setObjectName("majorEdit");

        horizontalLayout_5->addWidget(majorEdit);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_10);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_11);

        label_6 = new QLabel(StuRegisterDialog);
        label_6->setObjectName("label_6");

        horizontalLayout_7->addWidget(label_6);

        classEdit = new QLineEdit(StuRegisterDialog);
        classEdit->setObjectName("classEdit");

        horizontalLayout_7->addWidget(classEdit);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_12);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_13);

        label_7 = new QLabel(StuRegisterDialog);
        label_7->setObjectName("label_7");

        horizontalLayout_6->addWidget(label_7);

        pwdEdit = new QLineEdit(StuRegisterDialog);
        pwdEdit->setObjectName("pwdEdit");

        horizontalLayout_6->addWidget(pwdEdit);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_14);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_15);

        regBtn = new QPushButton(StuRegisterDialog);
        regBtn->setObjectName("regBtn");
        regBtn->setMinimumSize(QSize(150, 50));
        regBtn->setStyleSheet(QString::fromUtf8("border-radius:8px;\n"
"background-color: qlineargradient(spread:pad, x1:0.432, y1:0.0852273, x2:0.659727, y2:1, stop:0 rgba(147, 198, 190, 228), stop:1 rgba(227, 166, 191, 246));"));

        horizontalLayout_9->addWidget(regBtn);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_16);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalLayout_10->setContentsMargins(-1, 5, -1, -1);
        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_18);

        returnBtn = new QPushButton(StuRegisterDialog);
        returnBtn->setObjectName("returnBtn");
        returnBtn->setMinimumSize(QSize(150, 50));
        returnBtn->setStyleSheet(QString::fromUtf8("border-radius:8px;\n"
"background-color: qlineargradient(spread:pad, x1:0.107955, y1:0.137, x2:0.773, y2:0.920364, stop:0 rgba(230, 195, 87, 182), stop:1 rgba(227, 149, 191, 197));"));

        horizontalLayout_10->addWidget(returnBtn);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_17);


        verticalLayout->addLayout(horizontalLayout_10);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


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
        regBtn->setText(QCoreApplication::translate("StuRegisterDialog", "\346\263\250\345\206\214", nullptr));
        returnBtn->setText(QCoreApplication::translate("StuRegisterDialog", "\350\277\224\345\233\236\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StuRegisterDialog: public Ui_StuRegisterDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUREGISTERDIALOG_H
