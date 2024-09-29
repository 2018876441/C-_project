/********************************************************************************
** Form generated from reading UI file 'stuui.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUUI_H
#define UI_STUUI_H

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

class Ui_StuUi
{
public:
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *StuIdEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *nameEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *sexEdit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *collageEdit;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *majorEdit;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QLineEdit *classIdEdit;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *queryBtn;
    QPushButton *modfiyBtn;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *StuUi)
    {
        if (StuUi->objectName().isEmpty())
            StuUi->setObjectName("StuUi");
        StuUi->resize(300, 500);
        StuUi->setMinimumSize(QSize(300, 500));
        StuUi->setMaximumSize(QSize(300, 500));
        verticalLayout_2 = new QVBoxLayout(StuUi);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(StuUi);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(StuUi);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        StuIdEdit = new QLineEdit(StuUi);
        StuIdEdit->setObjectName("StuIdEdit");
        StuIdEdit->setReadOnly(true);

        horizontalLayout_2->addWidget(StuIdEdit);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(StuUi);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        nameEdit = new QLineEdit(StuUi);
        nameEdit->setObjectName("nameEdit");
        nameEdit->setReadOnly(true);

        horizontalLayout_3->addWidget(nameEdit);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_4 = new QLabel(StuUi);
        label_4->setObjectName("label_4");

        horizontalLayout_4->addWidget(label_4);

        sexEdit = new QLineEdit(StuUi);
        sexEdit->setObjectName("sexEdit");
        sexEdit->setReadOnly(true);

        horizontalLayout_4->addWidget(sexEdit);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_5 = new QLabel(StuUi);
        label_5->setObjectName("label_5");

        horizontalLayout_5->addWidget(label_5);

        collageEdit = new QLineEdit(StuUi);
        collageEdit->setObjectName("collageEdit");
        collageEdit->setReadOnly(true);

        horizontalLayout_5->addWidget(collageEdit);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_6 = new QLabel(StuUi);
        label_6->setObjectName("label_6");

        horizontalLayout_6->addWidget(label_6);

        majorEdit = new QLineEdit(StuUi);
        majorEdit->setObjectName("majorEdit");
        majorEdit->setReadOnly(true);

        horizontalLayout_6->addWidget(majorEdit);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_7 = new QLabel(StuUi);
        label_7->setObjectName("label_7");

        horizontalLayout_7->addWidget(label_7);

        classIdEdit = new QLineEdit(StuUi);
        classIdEdit->setObjectName("classIdEdit");
        classIdEdit->setReadOnly(true);

        horizontalLayout_7->addWidget(classIdEdit);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        queryBtn = new QPushButton(StuUi);
        queryBtn->setObjectName("queryBtn");
        queryBtn->setMinimumSize(QSize(25, 50));
        queryBtn->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_8->addWidget(queryBtn);

        modfiyBtn = new QPushButton(StuUi);
        modfiyBtn->setObjectName("modfiyBtn");
        modfiyBtn->setMinimumSize(QSize(100, 50));
        modfiyBtn->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_8->addWidget(modfiyBtn);


        verticalLayout_2->addLayout(horizontalLayout_8);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        retranslateUi(StuUi);

        QMetaObject::connectSlotsByName(StuUi);
    } // setupUi

    void retranslateUi(QDialog *StuUi)
    {
        StuUi->setWindowTitle(QCoreApplication::translate("StuUi", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("StuUi", "\345\255\246\347\224\237\344\277\241\346\201\257\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("StuUi", "\345\255\246\345\217\267\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("StuUi", "\345\247\223\345\220\215\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("StuUi", "\346\200\247\345\210\253\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("StuUi", "\345\255\246\351\231\242\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("StuUi", "\344\270\223\344\270\232\357\274\232", nullptr));
        label_7->setText(QCoreApplication::translate("StuUi", "\347\217\255\347\272\247\357\274\232", nullptr));
        queryBtn->setText(QCoreApplication::translate("StuUi", "\346\237\245\347\234\213\346\210\220\347\273\251", nullptr));
        modfiyBtn->setText(QCoreApplication::translate("StuUi", "\344\277\256\346\224\271\344\277\241\346\201\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StuUi: public Ui_StuUi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUUI_H
