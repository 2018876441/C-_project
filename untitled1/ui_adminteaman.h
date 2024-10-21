/********************************************************************************
** Form generated from reading UI file 'adminteaman.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINTEAMAN_H
#define UI_ADMINTEAMAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminTeaMan
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget;

    void setupUi(QWidget *adminTeaMan)
    {
        if (adminTeaMan->objectName().isEmpty())
            adminTeaMan->setObjectName("adminTeaMan");
        adminTeaMan->resize(409, 323);
        verticalLayout = new QVBoxLayout(adminTeaMan);
        verticalLayout->setObjectName("verticalLayout");
        tableWidget = new QTableWidget(adminTeaMan);
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


        retranslateUi(adminTeaMan);

        QMetaObject::connectSlotsByName(adminTeaMan);
    } // setupUi

    void retranslateUi(QWidget *adminTeaMan)
    {
        adminTeaMan->setWindowTitle(QCoreApplication::translate("adminTeaMan", "Form", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("adminTeaMan", "\347\274\226\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("adminTeaMan", "\345\247\223\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("adminTeaMan", "\346\200\247\345\210\253", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("adminTeaMan", "\345\205\245\350\201\214\347\212\266\346\200\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminTeaMan: public Ui_adminTeaMan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINTEAMAN_H
