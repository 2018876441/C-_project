/********************************************************************************
** Form generated from reading UI file 'uistuscore.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UISTUSCORE_H
#define UI_UISTUSCORE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UiStuScore
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QTableView *tableView;

    void setupUi(QWidget *UiStuScore)
    {
        if (UiStuScore->objectName().isEmpty())
            UiStuScore->setObjectName("UiStuScore");
        UiStuScore->resize(371, 400);
        verticalLayout = new QVBoxLayout(UiStuScore);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(-1, 0, -1, -1);
        label = new QLabel(UiStuScore);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(UiStuScore);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout->addWidget(lineEdit);

        pushButton_2 = new QPushButton(UiStuScore);
        pushButton_2->setObjectName("pushButton_2");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setMinimumSize(QSize(0, 25));

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(UiStuScore);
        pushButton_3->setObjectName("pushButton_3");
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setMinimumSize(QSize(0, 25));

        horizontalLayout->addWidget(pushButton_3);

        pushButton = new QPushButton(UiStuScore);
        pushButton->setObjectName("pushButton");
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(0, 25));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);

        tableView = new QTableView(UiStuScore);
        tableView->setObjectName("tableView");

        verticalLayout->addWidget(tableView);


        retranslateUi(UiStuScore);

        QMetaObject::connectSlotsByName(UiStuScore);
    } // setupUi

    void retranslateUi(QWidget *UiStuScore)
    {
        UiStuScore->setWindowTitle(QCoreApplication::translate("UiStuScore", "Form", nullptr));
        label->setText(QCoreApplication::translate("UiStuScore", "\346\237\245\346\211\276\347\247\221\347\233\256\357\274\232", nullptr));
        pushButton_2->setText(QCoreApplication::translate("UiStuScore", "\346\237\245\346\211\276", nullptr));
        pushButton_3->setText(QCoreApplication::translate("UiStuScore", "\346\201\242\345\244\215", nullptr));
        pushButton->setText(QCoreApplication::translate("UiStuScore", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UiStuScore: public Ui_UiStuScore {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UISTUSCORE_H
