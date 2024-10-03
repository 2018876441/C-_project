/********************************************************************************
** Form generated from reading UI file 'teacoursemanagement.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACOURSEMANAGEMENT_H
#define UI_TEACOURSEMANAGEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TeaCourseManagement
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *table;

    void setupUi(QWidget *TeaCourseManagement)
    {
        if (TeaCourseManagement->objectName().isEmpty())
            TeaCourseManagement->setObjectName("TeaCourseManagement");
        TeaCourseManagement->resize(600, 480);
        TeaCourseManagement->setMinimumSize(QSize(600, 480));
        TeaCourseManagement->setMaximumSize(QSize(600, 480));
        verticalLayout = new QVBoxLayout(TeaCourseManagement);
        verticalLayout->setObjectName("verticalLayout");
        table = new QTableWidget(TeaCourseManagement);
        if (table->columnCount() < 5)
            table->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        table->setObjectName("table");

        verticalLayout->addWidget(table);


        retranslateUi(TeaCourseManagement);

        QMetaObject::connectSlotsByName(TeaCourseManagement);
    } // setupUi

    void retranslateUi(QWidget *TeaCourseManagement)
    {
        TeaCourseManagement->setWindowTitle(QCoreApplication::translate("TeaCourseManagement", "Form", nullptr));
        QTableWidgetItem *___qtablewidgetitem = table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("TeaCourseManagement", "\350\257\276\347\250\213\347\274\226\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("TeaCourseManagement", "\350\257\276\347\250\213\345\220\215\347\247\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("TeaCourseManagement", "\345\255\246\345\210\206", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = table->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("TeaCourseManagement", "\345\274\200\350\257\276\345\255\246\351\231\242", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = table->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("TeaCourseManagement", "\346\216\210\350\257\276\350\200\201\345\270\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TeaCourseManagement: public Ui_TeaCourseManagement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACOURSEMANAGEMENT_H
