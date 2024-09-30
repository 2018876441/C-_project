/********************************************************************************
** Form generated from reading UI file 'teaui.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEAUI_H
#define UI_TEAUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TeaUi
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_2;
    QLineEdit *nameEdit;
    QPushButton *manBtn;
    QPushButton *ManScoBtn;
    QLabel *label;
    QComboBox *chose;
    QPushButton *addBtn;
    QPushButton *modfiyBtn;
    QPushButton *deleteBtn;
    QSpacerItem *verticalSpacer;
    QStackedWidget *sw;

    void setupUi(QWidget *TeaUi)
    {
        if (TeaUi->objectName().isEmpty())
            TeaUi->setObjectName("TeaUi");
        TeaUi->resize(600, 500);
        TeaUi->setMinimumSize(QSize(600, 500));
        TeaUi->setMaximumSize(QSize(600, 500));
        horizontalLayout = new QHBoxLayout(TeaUi);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);

        verticalLayout->addItem(verticalSpacer_2);

        label_2 = new QLabel(TeaUi);
        label_2->setObjectName("label_2");
        label_2->setMaximumSize(QSize(40, 30));

        verticalLayout->addWidget(label_2);

        nameEdit = new QLineEdit(TeaUi);
        nameEdit->setObjectName("nameEdit");
        nameEdit->setMaximumSize(QSize(100, 16777215));
        nameEdit->setReadOnly(true);

        verticalLayout->addWidget(nameEdit);

        manBtn = new QPushButton(TeaUi);
        manBtn->setObjectName("manBtn");
        manBtn->setMinimumSize(QSize(0, 30));
        manBtn->setMaximumSize(QSize(100, 30));

        verticalLayout->addWidget(manBtn);

        ManScoBtn = new QPushButton(TeaUi);
        ManScoBtn->setObjectName("ManScoBtn");
        ManScoBtn->setMinimumSize(QSize(100, 30));
        ManScoBtn->setMaximumSize(QSize(100, 16777215));

        verticalLayout->addWidget(ManScoBtn);

        label = new QLabel(TeaUi);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        chose = new QComboBox(TeaUi);
        chose->addItem(QString());
        chose->setObjectName("chose");
        chose->setMinimumSize(QSize(100, 30));
        chose->setMaximumSize(QSize(100, 16777215));

        verticalLayout->addWidget(chose);

        addBtn = new QPushButton(TeaUi);
        addBtn->setObjectName("addBtn");
        addBtn->setMinimumSize(QSize(100, 30));
        addBtn->setMaximumSize(QSize(100, 30));

        verticalLayout->addWidget(addBtn);

        modfiyBtn = new QPushButton(TeaUi);
        modfiyBtn->setObjectName("modfiyBtn");
        modfiyBtn->setMinimumSize(QSize(0, 30));
        modfiyBtn->setMaximumSize(QSize(100, 16777215));

        verticalLayout->addWidget(modfiyBtn);

        deleteBtn = new QPushButton(TeaUi);
        deleteBtn->setObjectName("deleteBtn");
        deleteBtn->setMinimumSize(QSize(0, 30));
        deleteBtn->setMaximumSize(QSize(100, 16777215));

        verticalLayout->addWidget(deleteBtn);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);

        sw = new QStackedWidget(TeaUi);
        sw->setObjectName("sw");
        sw->setMinimumSize(QSize(450, 480));
        sw->setMaximumSize(QSize(16777215, 480));

        horizontalLayout->addWidget(sw);


        retranslateUi(TeaUi);

        QMetaObject::connectSlotsByName(TeaUi);
    } // setupUi

    void retranslateUi(QWidget *TeaUi)
    {
        TeaUi->setWindowTitle(QCoreApplication::translate("TeaUi", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("TeaUi", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        manBtn->setText(QCoreApplication::translate("TeaUi", "\346\237\245\347\234\213\346\216\210\350\257\276\350\257\276\347\250\213", nullptr));
        ManScoBtn->setText(QCoreApplication::translate("TeaUi", "\345\255\246\347\224\237\346\210\220\347\273\251\347\256\241\347\220\206", nullptr));
        label->setText(QCoreApplication::translate("TeaUi", "\351\200\211\346\213\251\346\210\220\347\273\251\347\256\241\347\220\206\347\247\221\347\233\256\357\274\232", nullptr));
        chose->setItemText(0, QCoreApplication::translate("TeaUi", "\346\234\252\351\200\211", nullptr));

        addBtn->setText(QCoreApplication::translate("TeaUi", "\346\226\260\345\242\236\345\255\246\347\224\237\346\210\220\347\273\251", nullptr));
        modfiyBtn->setText(QCoreApplication::translate("TeaUi", "\344\277\256\346\224\271\345\255\246\347\224\237\346\210\220\347\273\251", nullptr));
        deleteBtn->setText(QCoreApplication::translate("TeaUi", "\345\210\240\351\231\244\345\255\246\347\224\237\346\210\220\347\273\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TeaUi: public Ui_TeaUi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEAUI_H
