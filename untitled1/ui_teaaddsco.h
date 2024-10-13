/********************************************************************************
** Form generated from reading UI file 'teaaddsco.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEAADDSCO_H
#define UI_TEAADDSCO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_teaAddSco
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QFormLayout *formLayout;
    QLabel *Label;
    QLineEdit *classEdit;
    QLabel *Label_2;
    QLineEdit *stuIdEdit;
    QLabel *Label_3;
    QLineEdit *stuNameEdit;
    QLabel *Label_4;
    QLineEdit *ScoEdit;
    QLabel *Label_5;
    QLineEdit *lessonEdit;
    QLabel *Label_6;
    QLineEdit *collegeEdit;
    QLabel *Label_7;
    QLineEdit *majorEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *checkBtn;
    QPushButton *exitBtn;

    void setupUi(QDialog *teaAddSco)
    {
        if (teaAddSco->objectName().isEmpty())
            teaAddSco->setObjectName("teaAddSco");
        teaAddSco->resize(178, 254);
        verticalLayout = new QVBoxLayout(teaAddSco);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(teaAddSco);
        label->setObjectName("label");
        label->setMaximumSize(QSize(16777215, 40));

        verticalLayout->addWidget(label);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        Label = new QLabel(teaAddSco);
        Label->setObjectName("Label");

        formLayout->setWidget(0, QFormLayout::LabelRole, Label);

        classEdit = new QLineEdit(teaAddSco);
        classEdit->setObjectName("classEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, classEdit);

        Label_2 = new QLabel(teaAddSco);
        Label_2->setObjectName("Label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, Label_2);

        stuIdEdit = new QLineEdit(teaAddSco);
        stuIdEdit->setObjectName("stuIdEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, stuIdEdit);

        Label_3 = new QLabel(teaAddSco);
        Label_3->setObjectName("Label_3");

        formLayout->setWidget(2, QFormLayout::LabelRole, Label_3);

        stuNameEdit = new QLineEdit(teaAddSco);
        stuNameEdit->setObjectName("stuNameEdit");

        formLayout->setWidget(2, QFormLayout::FieldRole, stuNameEdit);

        Label_4 = new QLabel(teaAddSco);
        Label_4->setObjectName("Label_4");

        formLayout->setWidget(3, QFormLayout::LabelRole, Label_4);

        ScoEdit = new QLineEdit(teaAddSco);
        ScoEdit->setObjectName("ScoEdit");

        formLayout->setWidget(3, QFormLayout::FieldRole, ScoEdit);

        Label_5 = new QLabel(teaAddSco);
        Label_5->setObjectName("Label_5");

        formLayout->setWidget(4, QFormLayout::LabelRole, Label_5);

        lessonEdit = new QLineEdit(teaAddSco);
        lessonEdit->setObjectName("lessonEdit");

        formLayout->setWidget(4, QFormLayout::FieldRole, lessonEdit);

        Label_6 = new QLabel(teaAddSco);
        Label_6->setObjectName("Label_6");

        formLayout->setWidget(5, QFormLayout::LabelRole, Label_6);

        collegeEdit = new QLineEdit(teaAddSco);
        collegeEdit->setObjectName("collegeEdit");

        formLayout->setWidget(5, QFormLayout::FieldRole, collegeEdit);

        Label_7 = new QLabel(teaAddSco);
        Label_7->setObjectName("Label_7");

        formLayout->setWidget(6, QFormLayout::LabelRole, Label_7);

        majorEdit = new QLineEdit(teaAddSco);
        majorEdit->setObjectName("majorEdit");

        formLayout->setWidget(6, QFormLayout::FieldRole, majorEdit);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        checkBtn = new QPushButton(teaAddSco);
        checkBtn->setObjectName("checkBtn");
        checkBtn->setMinimumSize(QSize(0, 40));

        horizontalLayout->addWidget(checkBtn);

        exitBtn = new QPushButton(teaAddSco);
        exitBtn->setObjectName("exitBtn");
        exitBtn->setMinimumSize(QSize(0, 40));

        horizontalLayout->addWidget(exitBtn);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(teaAddSco);

        QMetaObject::connectSlotsByName(teaAddSco);
    } // setupUi

    void retranslateUi(QDialog *teaAddSco)
    {
        teaAddSco->setWindowTitle(QCoreApplication::translate("teaAddSco", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("teaAddSco", "\346\267\273\345\212\240\345\255\246\347\224\237\346\210\220\347\273\251", nullptr));
        Label->setText(QCoreApplication::translate("teaAddSco", "\350\257\276\347\250\213\345\220\215\347\247\260", nullptr));
        Label_2->setText(QCoreApplication::translate("teaAddSco", "\345\255\246\347\224\237\345\255\246\345\217\267", nullptr));
        Label_3->setText(QCoreApplication::translate("teaAddSco", "\345\255\246\347\224\237\345\220\215\347\247\260", nullptr));
        Label_4->setText(QCoreApplication::translate("teaAddSco", "\345\255\246\347\224\237\345\210\206\346\225\260", nullptr));
        Label_5->setText(QCoreApplication::translate("teaAddSco", "\345\255\246\347\224\237\347\217\255\347\272\247", nullptr));
        Label_6->setText(QCoreApplication::translate("teaAddSco", "\345\255\246\347\224\237\345\255\246\351\231\242", nullptr));
        Label_7->setText(QCoreApplication::translate("teaAddSco", "\345\255\246\347\224\237\344\270\223\344\270\232", nullptr));
        checkBtn->setText(QCoreApplication::translate("teaAddSco", "\346\267\273\345\212\240", nullptr));
        exitBtn->setText(QCoreApplication::translate("teaAddSco", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class teaAddSco: public Ui_teaAddSco {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEAADDSCO_H
