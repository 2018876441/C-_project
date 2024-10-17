/********************************************************************************
** Form generated from reading UI file 'teamanagescore.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEAMANAGESCORE_H
#define UI_TEAMANAGESCORE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_teaManageScore
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QTableWidget *tableWidget;

    void setupUi(QWidget *teaManageScore)
    {
        if (teaManageScore->objectName().isEmpty())
            teaManageScore->setObjectName("teaManageScore");
        teaManageScore->resize(615, 377);
        teaManageScore->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(teaManageScore);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(5, 5, 5, 5);
        comboBox = new QComboBox(teaManageScore);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setMinimumSize(QSize(100, 0));
        comboBox->setMaximumSize(QSize(150, 16777215));

        horizontalLayout->addWidget(comboBox);

        pushButton = new QPushButton(teaManageScore);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(100, 22));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        tableWidget = new QTableWidget(teaManageScore);
        if (tableWidget->columnCount() < 8)
            tableWidget->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setMinimumSize(QSize(150, 0));

        verticalLayout->addWidget(tableWidget);


        retranslateUi(teaManageScore);

        QMetaObject::connectSlotsByName(teaManageScore);
    } // setupUi

    void retranslateUi(QWidget *teaManageScore)
    {
        teaManageScore->setWindowTitle(QCoreApplication::translate("teaManageScore", "Form", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("teaManageScore", "\346\216\222\345\272\217", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("teaManageScore", "\345\255\246\351\231\242", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("teaManageScore", "\344\270\223\344\270\232", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("teaManageScore", "\345\255\246\347\224\237\347\217\255\347\272\247", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("teaManageScore", "\345\255\246\345\217\267", nullptr));

        pushButton->setText(QCoreApplication::translate("teaManageScore", "\345\210\267\346\226\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("teaManageScore", "\350\257\276\347\250\213\345\220\215\347\247\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("teaManageScore", "\345\255\246\347\224\237\345\255\246\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("teaManageScore", "\345\255\246\347\224\237\345\220\215\347\247\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("teaManageScore", "\345\255\246\347\224\237\345\210\206\346\225\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("teaManageScore", "\345\255\246\347\224\237\347\217\255\347\272\247", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("teaManageScore", "\345\255\246\347\224\237\345\255\246\351\231\242", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("teaManageScore", "\345\255\246\347\224\237\344\270\223\344\270\232", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("teaManageScore", "\346\216\210\350\257\276\345\255\246\346\234\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class teaManageScore: public Ui_teaManageScore {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEAMANAGESCORE_H
