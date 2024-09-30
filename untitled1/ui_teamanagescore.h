/********************************************************************************
** Form generated from reading UI file 'teamanagescore.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEAMANAGESCORE_H
#define UI_TEAMANAGESCORE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_teaManageScore
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget;

    void setupUi(QWidget *teaManageScore)
    {
        if (teaManageScore->objectName().isEmpty())
            teaManageScore->setObjectName("teaManageScore");
        teaManageScore->resize(450, 480);
        teaManageScore->setMinimumSize(QSize(450, 480));
        teaManageScore->setMaximumSize(QSize(450, 480));
        verticalLayout = new QVBoxLayout(teaManageScore);
        verticalLayout->setObjectName("verticalLayout");
        tableWidget = new QTableWidget(teaManageScore);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget->setObjectName("tableWidget");

        verticalLayout->addWidget(tableWidget);


        retranslateUi(teaManageScore);

        QMetaObject::connectSlotsByName(teaManageScore);
    } // setupUi

    void retranslateUi(QWidget *teaManageScore)
    {
        teaManageScore->setWindowTitle(QCoreApplication::translate("teaManageScore", "Form", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("teaManageScore", "\350\257\276\347\250\213\345\220\215\347\247\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("teaManageScore", "\345\255\246\347\224\237\345\255\246\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("teaManageScore", "\345\255\246\347\224\237\345\220\215\347\247\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("teaManageScore", "\345\255\246\347\224\237\345\210\206\346\225\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class teaManageScore: public Ui_teaManageScore {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEAMANAGESCORE_H
