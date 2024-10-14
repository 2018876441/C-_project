/********************************************************************************
** Form generated from reading UI file 'stumodfiy.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUMODFIY_H
#define UI_STUMODFIY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StuModfiy
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *sexEdit;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *confiirmBtn;
    QPushButton *returnBtn;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLineEdit *majorEdit;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QLineEdit *collegeEdit;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *classEdit;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_7;
    QLineEdit *pwdEdit;
    QPushButton *confirmPwdBtn;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *nameEdit;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *StuModfiy)
    {
        if (StuModfiy->objectName().isEmpty())
            StuModfiy->setObjectName("StuModfiy");
        StuModfiy->resize(300, 500);
        StuModfiy->setMinimumSize(QSize(300, 500));
        StuModfiy->setMaximumSize(QSize(720, 1024));
        StuModfiy->setStyleSheet(QString::fromUtf8("#frame {\n"
"border-image: url(:/img/cnb.jpg);}\n"
"\n"
"QLineEdit{border-radius:6px;background-color: qlineargradient(spread:pad, x1:0.107955, y1:0.137, x2:0.773, y2:0.920364, stop:0 rgba(255, 255, 255, 66), stop:1 rgba(235, 236, 236, 51));}"));
        gridLayout = new QGridLayout(StuModfiy);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(11, -1, 11, -1);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(StuModfiy);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        sexEdit = new QLineEdit(StuModfiy);
        sexEdit->setObjectName("sexEdit");

        horizontalLayout_3->addWidget(sexEdit);


        gridLayout->addLayout(horizontalLayout_3, 3, 0, 1, 1);

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


        gridLayout->addLayout(horizontalLayout_7, 7, 0, 1, 2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_5 = new QLabel(StuModfiy);
        label_5->setObjectName("label_5");

        horizontalLayout_4->addWidget(label_5);

        majorEdit = new QLineEdit(StuModfiy);
        majorEdit->setObjectName("majorEdit");

        horizontalLayout_4->addWidget(majorEdit);


        gridLayout->addLayout(horizontalLayout_4, 5, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 70, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(verticalSpacer, 9, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_4 = new QLabel(StuModfiy);
        label_4->setObjectName("label_4");

        horizontalLayout_5->addWidget(label_4);

        collegeEdit = new QLineEdit(StuModfiy);
        collegeEdit->setObjectName("collegeEdit");

        horizontalLayout_5->addWidget(collegeEdit);


        gridLayout->addLayout(horizontalLayout_5, 4, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_6 = new QLabel(StuModfiy);
        label_6->setObjectName("label_6");

        horizontalLayout_6->addWidget(label_6);

        classEdit = new QLineEdit(StuModfiy);
        classEdit->setObjectName("classEdit");

        horizontalLayout_6->addWidget(classEdit);


        gridLayout->addLayout(horizontalLayout_6, 6, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_7 = new QLabel(StuModfiy);
        label_7->setObjectName("label_7");

        horizontalLayout_8->addWidget(label_7);

        pwdEdit = new QLineEdit(StuModfiy);
        pwdEdit->setObjectName("pwdEdit");

        horizontalLayout_8->addWidget(pwdEdit);

        confirmPwdBtn = new QPushButton(StuModfiy);
        confirmPwdBtn->setObjectName("confirmPwdBtn");

        horizontalLayout_8->addWidget(confirmPwdBtn);


        gridLayout->addLayout(horizontalLayout_8, 8, 0, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(StuModfiy);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        nameEdit = new QLineEdit(StuModfiy);
        nameEdit->setObjectName("nameEdit");
        nameEdit->setStyleSheet(QString::fromUtf8("border-radius:6px;"));

        horizontalLayout_2->addWidget(nameEdit);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(StuModfiy);
        label->setObjectName("label");
        label->setMaximumSize(QSize(16777215, 20));
        QFont font;
        font.setFamilies({QString::fromUtf8("\351\234\236\351\271\234\346\226\207\346\245\267 GB \345\261\217\345\271\225\351\230\205\350\257\273\347\211\210 R")});
        font.setPointSize(14);
        font.setBold(false);
        label->setFont(font);

        horizontalLayout->addWidget(label);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(verticalSpacer_2, 0, 0, 1, 1);


        retranslateUi(StuModfiy);

        QMetaObject::connectSlotsByName(StuModfiy);
    } // setupUi

    void retranslateUi(QWidget *StuModfiy)
    {
        StuModfiy->setWindowTitle(QCoreApplication::translate("StuModfiy", "Form", nullptr));
        label_3->setText(QCoreApplication::translate("StuModfiy", "\346\200\247\345\210\253\357\274\232", nullptr));
        confiirmBtn->setText(QCoreApplication::translate("StuModfiy", "\347\241\256\350\256\244\344\277\256\346\224\271\344\277\241\346\201\257", nullptr));
        returnBtn->setText(QCoreApplication::translate("StuModfiy", "\350\277\224\345\233\236", nullptr));
        label_5->setText(QCoreApplication::translate("StuModfiy", "\344\270\223\344\270\232\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("StuModfiy", "\345\255\246\351\231\242\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("StuModfiy", "\347\217\255\347\272\247\357\274\232", nullptr));
        label_7->setText(QCoreApplication::translate("StuModfiy", "\344\277\256\346\224\271\345\257\206\347\240\201\357\274\232", nullptr));
        confirmPwdBtn->setText(QCoreApplication::translate("StuModfiy", "\347\241\256\350\256\244\344\277\256\346\224\271", nullptr));
        label_2->setText(QCoreApplication::translate("StuModfiy", "\345\247\223\345\220\215\357\274\232", nullptr));
        label->setText(QCoreApplication::translate("StuModfiy", "<html><head/><body><p><span style=\" font-size:10pt;\">\344\277\256\346\224\271\344\277\241\346\201\257\357\274\232</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StuModfiy: public Ui_StuModfiy {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUMODFIY_H
