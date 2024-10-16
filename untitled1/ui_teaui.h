/********************************************************************************
** Form generated from reading UI file 'teaui.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
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
    QLabel *label;
    QComboBox *chose;
    QPushButton *addBtn;
    QPushButton *modfiyBtn;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QStackedWidget *sw;

    void setupUi(QWidget *TeaUi)
    {
        if (TeaUi->objectName().isEmpty())
            TeaUi->setObjectName("TeaUi");
        TeaUi->resize(711, 533);
        TeaUi->setStyleSheet(QString::fromUtf8("QPushButton{background-color: qlineargradient(spread:pad, x1:0.107955, y1:0.137, x2:0.773, y2:0.920364, stop:0 rgba(215,177,225, 182), stop:1 rgba(244,198,232, 123));\n"
"border-radius:6px;}Q\n"
"border-image: url(:/img/jsyr.jpg);"));
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

        label = new QLabel(TeaUi);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        chose = new QComboBox(TeaUi);
        chose->addItem(QString());
        chose->setObjectName("chose");
        chose->setMinimumSize(QSize(100, 30));
        chose->setMaximumSize(QSize(100, 16777215));
        chose->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.107955, y1:0.137, x2:0.773, y2:0.920364, stop:0 rgba(215,177,225, 182), stop:1 rgba(244,198,232, 123));\n"
"border-radius:2px;"));

        verticalLayout->addWidget(chose);

        addBtn = new QPushButton(TeaUi);
        addBtn->setObjectName("addBtn");
        addBtn->setMinimumSize(QSize(0, 30));
        addBtn->setMaximumSize(QSize(100, 16777215));

        verticalLayout->addWidget(addBtn);

        modfiyBtn = new QPushButton(TeaUi);
        modfiyBtn->setObjectName("modfiyBtn");
        modfiyBtn->setMinimumSize(QSize(0, 30));
        modfiyBtn->setMaximumSize(QSize(100, 16777215));

        verticalLayout->addWidget(modfiyBtn);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        sw = new QStackedWidget(TeaUi);
        sw->setObjectName("sw");
        sw->setCursor(QCursor(Qt::CursorShape::ArrowCursor));

        horizontalLayout_2->addWidget(sw);


        horizontalLayout->addLayout(horizontalLayout_2);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 3);

        retranslateUi(TeaUi);

        QMetaObject::connectSlotsByName(TeaUi);
    } // setupUi

    void retranslateUi(QWidget *TeaUi)
    {
        TeaUi->setWindowTitle(QCoreApplication::translate("TeaUi", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("TeaUi", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        label->setText(QCoreApplication::translate("TeaUi", "\351\200\211\346\213\251\346\210\220\347\273\251\347\256\241\347\220\206\347\247\221\347\233\256\357\274\232", nullptr));
        chose->setItemText(0, QCoreApplication::translate("TeaUi", "\346\234\252\351\200\211", nullptr));

        addBtn->setText(QCoreApplication::translate("TeaUi", "\345\275\225\345\205\245\345\255\246\347\224\237\346\210\220\347\273\251", nullptr));
        modfiyBtn->setText(QCoreApplication::translate("TeaUi", "\344\277\256\346\224\271\345\255\246\347\224\237\346\210\220\347\273\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TeaUi: public Ui_TeaUi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEAUI_H
