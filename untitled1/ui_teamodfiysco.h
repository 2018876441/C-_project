/********************************************************************************
** Form generated from reading UI file 'teamodfiysco.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEAMODFIYSCO_H
#define UI_TEAMODFIYSCO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_teaModfiySco
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QFormLayout *formLayout;
    QLabel *Label;
    QLineEdit *idEdit;
    QLabel *Label_2;
    QLineEdit *scoEdit;
    QLabel *Label_3;
    QComboBox *termBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *checkBtn;
    QPushButton *exitBtn;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *teaModfiySco)
    {
        if (teaModfiySco->objectName().isEmpty())
            teaModfiySco->setObjectName("teaModfiySco");
        teaModfiySco->resize(204, 321);
        verticalLayout = new QVBoxLayout(teaModfiySco);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(teaModfiySco);
        label->setObjectName("label");
        label->setMaximumSize(QSize(16777215, 50));

        verticalLayout->addWidget(label);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        Label = new QLabel(teaModfiySco);
        Label->setObjectName("Label");

        formLayout->setWidget(0, QFormLayout::LabelRole, Label);

        idEdit = new QLineEdit(teaModfiySco);
        idEdit->setObjectName("idEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, idEdit);

        Label_2 = new QLabel(teaModfiySco);
        Label_2->setObjectName("Label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, Label_2);

        scoEdit = new QLineEdit(teaModfiySco);
        scoEdit->setObjectName("scoEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, scoEdit);

        Label_3 = new QLabel(teaModfiySco);
        Label_3->setObjectName("Label_3");

        formLayout->setWidget(2, QFormLayout::LabelRole, Label_3);

        termBox = new QComboBox(teaModfiySco);
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
        checkBtn = new QPushButton(teaModfiySco);
        checkBtn->setObjectName("checkBtn");
        checkBtn->setMinimumSize(QSize(0, 35));

        horizontalLayout->addWidget(checkBtn);

        exitBtn = new QPushButton(teaModfiySco);
        exitBtn->setObjectName("exitBtn");
        exitBtn->setMinimumSize(QSize(0, 35));

        horizontalLayout->addWidget(exitBtn);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 100, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(teaModfiySco);

        QMetaObject::connectSlotsByName(teaModfiySco);
    } // setupUi

    void retranslateUi(QDialog *teaModfiySco)
    {
        teaModfiySco->setWindowTitle(QCoreApplication::translate("teaModfiySco", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("teaModfiySco", "\344\277\256\346\224\271\345\255\246\347\224\237\346\210\220\347\273\251", nullptr));
        Label->setText(QCoreApplication::translate("teaModfiySco", "\345\255\246\345\217\267\357\274\232", nullptr));
        Label_2->setText(QCoreApplication::translate("teaModfiySco", "\346\210\220\347\273\251\357\274\232", nullptr));
        Label_3->setText(QCoreApplication::translate("teaModfiySco", "\345\274\200\350\257\276\345\255\246\346\234\237\357\274\232", nullptr));
        termBox->setItemText(0, QCoreApplication::translate("teaModfiySco", "\345\244\247\344\270\200\344\270\212", nullptr));
        termBox->setItemText(1, QCoreApplication::translate("teaModfiySco", "\345\244\247\344\270\200\344\270\213", nullptr));
        termBox->setItemText(2, QCoreApplication::translate("teaModfiySco", "\345\244\247\344\272\214\344\270\212", nullptr));
        termBox->setItemText(3, QCoreApplication::translate("teaModfiySco", "\345\244\247\344\272\214\344\270\213", nullptr));
        termBox->setItemText(4, QCoreApplication::translate("teaModfiySco", "\345\244\247\344\270\211\344\270\212", nullptr));
        termBox->setItemText(5, QCoreApplication::translate("teaModfiySco", "\345\244\247\344\270\211\344\270\213", nullptr));
        termBox->setItemText(6, QCoreApplication::translate("teaModfiySco", "\345\244\247\345\233\233\344\270\212", nullptr));
        termBox->setItemText(7, QCoreApplication::translate("teaModfiySco", "\345\244\247\345\233\233\344\270\213", nullptr));

        checkBtn->setText(QCoreApplication::translate("teaModfiySco", "\344\277\256\346\224\271", nullptr));
        exitBtn->setText(QCoreApplication::translate("teaModfiySco", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class teaModfiySco: public Ui_teaModfiySco {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEAMODFIYSCO_H
