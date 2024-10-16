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
#include <QtWidgets/QComboBox>
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
    QLabel *Label_2;
    QLineEdit *stuIdEdit;
    QLabel *Label_4;
    QLineEdit *ScoEdit;
    QLabel *Label_3;
    QComboBox *termBox;
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
        Label_2 = new QLabel(teaAddSco);
        Label_2->setObjectName("Label_2");

        formLayout->setWidget(0, QFormLayout::LabelRole, Label_2);

        stuIdEdit = new QLineEdit(teaAddSco);
        stuIdEdit->setObjectName("stuIdEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, stuIdEdit);

        Label_4 = new QLabel(teaAddSco);
        Label_4->setObjectName("Label_4");

        formLayout->setWidget(1, QFormLayout::LabelRole, Label_4);

        ScoEdit = new QLineEdit(teaAddSco);
        ScoEdit->setObjectName("ScoEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, ScoEdit);

        Label_3 = new QLabel(teaAddSco);
        Label_3->setObjectName("Label_3");

        formLayout->setWidget(2, QFormLayout::LabelRole, Label_3);

        termBox = new QComboBox(teaAddSco);
        termBox->addItem(QString());
        termBox->addItem(QString());
        termBox->addItem(QString());
        termBox->addItem(QString());
        termBox->addItem(QString());
        termBox->addItem(QString());
        termBox->addItem(QString());
        termBox->addItem(QString());
        termBox->setObjectName("termBox");

        formLayout->setWidget(2, QFormLayout::FieldRole, termBox);


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

        QWidget::setTabOrder(stuIdEdit, ScoEdit);
        QWidget::setTabOrder(ScoEdit, checkBtn);
        QWidget::setTabOrder(checkBtn, exitBtn);

        retranslateUi(teaAddSco);

        QMetaObject::connectSlotsByName(teaAddSco);
    } // setupUi

    void retranslateUi(QDialog *teaAddSco)
    {
        teaAddSco->setWindowTitle(QCoreApplication::translate("teaAddSco", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("teaAddSco", "\346\267\273\345\212\240\345\255\246\347\224\237\346\210\220\347\273\251", nullptr));
        Label_2->setText(QCoreApplication::translate("teaAddSco", "\345\255\246\347\224\237\345\255\246\345\217\267", nullptr));
        Label_4->setText(QCoreApplication::translate("teaAddSco", "\345\255\246\347\224\237\345\210\206\346\225\260", nullptr));
        Label_3->setText(QCoreApplication::translate("teaAddSco", "\345\274\200\350\257\276\345\255\246\346\234\237", nullptr));
        termBox->setItemText(0, QCoreApplication::translate("teaAddSco", "\345\244\247\344\270\200\344\270\212", nullptr));
        termBox->setItemText(1, QCoreApplication::translate("teaAddSco", "\345\244\247\344\270\200\344\270\213", nullptr));
        termBox->setItemText(2, QCoreApplication::translate("teaAddSco", "\345\244\247\344\272\214\344\270\212", nullptr));
        termBox->setItemText(3, QCoreApplication::translate("teaAddSco", "\345\244\247\344\272\214\344\270\213", nullptr));
        termBox->setItemText(4, QCoreApplication::translate("teaAddSco", "\345\244\247\344\270\211\344\270\212", nullptr));
        termBox->setItemText(5, QCoreApplication::translate("teaAddSco", "\345\244\247\344\270\211\344\270\213", nullptr));
        termBox->setItemText(6, QCoreApplication::translate("teaAddSco", "\345\244\247\345\233\233\344\270\212", nullptr));
        termBox->setItemText(7, QCoreApplication::translate("teaAddSco", "\345\244\247\345\233\233\344\270\213", nullptr));

        checkBtn->setText(QCoreApplication::translate("teaAddSco", "\346\267\273\345\212\240", nullptr));
        exitBtn->setText(QCoreApplication::translate("teaAddSco", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class teaAddSco: public Ui_teaAddSco {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEAADDSCO_H
