/********************************************************************************
** Form generated from reading UI file 'stumodfiy.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUMODFIY_H
#define UI_STUMODFIY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StuModfiy
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *nameEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *sexEdit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QLineEdit *collegeEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLineEdit *majorEdit;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *classEdit;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *confiirmBtn;
    QPushButton *returnBtn;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_7;
    QLineEdit *lineEdit_6;
    QPushButton *confirmPwdBtn;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *StuModfiy)
    {
        if (StuModfiy->objectName().isEmpty())
            StuModfiy->setObjectName("StuModfiy");
        StuModfiy->resize(300, 500);
        StuModfiy->setMinimumSize(QSize(300, 500));
        StuModfiy->setMaximumSize(QSize(300, 500));
        verticalLayout = new QVBoxLayout(StuModfiy);
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer_2 = new QSpacerItem(20, 55, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(StuModfiy);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(StuModfiy);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        nameEdit = new QLineEdit(StuModfiy);
        nameEdit->setObjectName("nameEdit");

        horizontalLayout_2->addWidget(nameEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(StuModfiy);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        sexEdit = new QLineEdit(StuModfiy);
        sexEdit->setObjectName("sexEdit");

        horizontalLayout_3->addWidget(sexEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_4 = new QLabel(StuModfiy);
        label_4->setObjectName("label_4");

        horizontalLayout_5->addWidget(label_4);

        collegeEdit = new QLineEdit(StuModfiy);
        collegeEdit->setObjectName("collegeEdit");

        horizontalLayout_5->addWidget(collegeEdit);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_5 = new QLabel(StuModfiy);
        label_5->setObjectName("label_5");

        horizontalLayout_4->addWidget(label_5);

        majorEdit = new QLineEdit(StuModfiy);
        majorEdit->setObjectName("majorEdit");

        horizontalLayout_4->addWidget(majorEdit);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_6 = new QLabel(StuModfiy);
        label_6->setObjectName("label_6");

        horizontalLayout_6->addWidget(label_6);

        classEdit = new QLineEdit(StuModfiy);
        classEdit->setObjectName("classEdit");

        horizontalLayout_6->addWidget(classEdit);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        confiirmBtn = new QPushButton(StuModfiy);
        confiirmBtn->setObjectName("confiirmBtn");
        confiirmBtn->setMinimumSize(QSize(0, 30));

        horizontalLayout_7->addWidget(confiirmBtn);

        returnBtn = new QPushButton(StuModfiy);
        returnBtn->setObjectName("returnBtn");
        returnBtn->setMinimumSize(QSize(0, 30));

        horizontalLayout_7->addWidget(returnBtn);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_7 = new QLabel(StuModfiy);
        label_7->setObjectName("label_7");

        horizontalLayout_8->addWidget(label_7);

        lineEdit_6 = new QLineEdit(StuModfiy);
        lineEdit_6->setObjectName("lineEdit_6");

        horizontalLayout_8->addWidget(lineEdit_6);

        confirmPwdBtn = new QPushButton(StuModfiy);
        confirmPwdBtn->setObjectName("confirmPwdBtn");

        horizontalLayout_8->addWidget(confirmPwdBtn);


        verticalLayout->addLayout(horizontalLayout_8);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(StuModfiy);

        QMetaObject::connectSlotsByName(StuModfiy);
    } // setupUi

    void retranslateUi(QWidget *StuModfiy)
    {
        StuModfiy->setWindowTitle(QCoreApplication::translate("StuModfiy", "Form", nullptr));
        label->setText(QCoreApplication::translate("StuModfiy", "\344\277\256\346\224\271\344\277\241\346\201\257\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("StuModfiy", "\345\247\223\345\220\215\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("StuModfiy", "\346\200\247\345\210\253\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("StuModfiy", "\345\255\246\351\231\242\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("StuModfiy", "\344\270\223\344\270\232\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("StuModfiy", "\347\217\255\347\272\247\357\274\232", nullptr));
        confiirmBtn->setText(QCoreApplication::translate("StuModfiy", "\347\241\256\350\256\244\344\277\256\346\224\271\344\277\241\346\201\257", nullptr));
        returnBtn->setText(QCoreApplication::translate("StuModfiy", "\350\277\224\345\233\236", nullptr));
        label_7->setText(QCoreApplication::translate("StuModfiy", "\344\277\256\346\224\271\345\257\206\347\240\201\357\274\232", nullptr));
        confirmPwdBtn->setText(QCoreApplication::translate("StuModfiy", "\347\241\256\350\256\244\344\277\256\346\224\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StuModfiy: public Ui_StuModfiy {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUMODFIY_H
