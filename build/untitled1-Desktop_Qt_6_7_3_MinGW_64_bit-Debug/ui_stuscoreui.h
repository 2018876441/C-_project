/********************************************************************************
** Form generated from reading UI file 'stuscoreui.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUSCOREUI_H
#define UI_STUSCOREUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StuScoreUi
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *recover;
    QLabel *label_2;
    QLineEdit *checkEdit;
    QPushButton *checkBtn;
    QPushButton *returnBtn;
    QHBoxLayout *horizontalLayout_2;
    QTableWidget *table;

    void setupUi(QWidget *StuScoreUi)
    {
        if (StuScoreUi->objectName().isEmpty())
            StuScoreUi->setObjectName("StuScoreUi");
        StuScoreUi->resize(650, 400);
        StuScoreUi->setMinimumSize(QSize(650, 400));
        StuScoreUi->setMaximumSize(QSize(650, 400));
        verticalLayout = new QVBoxLayout(StuScoreUi);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        recover = new QPushButton(StuScoreUi);
        recover->setObjectName("recover");

        horizontalLayout_4->addWidget(recover);

        label_2 = new QLabel(StuScoreUi);
        label_2->setObjectName("label_2");

        horizontalLayout_4->addWidget(label_2);

        checkEdit = new QLineEdit(StuScoreUi);
        checkEdit->setObjectName("checkEdit");

        horizontalLayout_4->addWidget(checkEdit);

        checkBtn = new QPushButton(StuScoreUi);
        checkBtn->setObjectName("checkBtn");

        horizontalLayout_4->addWidget(checkBtn);

        returnBtn = new QPushButton(StuScoreUi);
        returnBtn->setObjectName("returnBtn");

        horizontalLayout_4->addWidget(returnBtn);


        horizontalLayout->addLayout(horizontalLayout_4);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        table = new QTableWidget(StuScoreUi);
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

        horizontalLayout_2->addWidget(table);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(StuScoreUi);

        QMetaObject::connectSlotsByName(StuScoreUi);
    } // setupUi

    void retranslateUi(QWidget *StuScoreUi)
    {
        StuScoreUi->setWindowTitle(QCoreApplication::translate("StuScoreUi", "Form", nullptr));
        recover->setText(QCoreApplication::translate("StuScoreUi", "\346\201\242\345\244\215", nullptr));
        label_2->setText(QCoreApplication::translate("StuScoreUi", "\346\220\234\347\264\242\347\247\221\347\233\256\357\274\232", nullptr));
        checkBtn->setText(QCoreApplication::translate("StuScoreUi", "\346\237\245\350\257\242", nullptr));
        returnBtn->setText(QCoreApplication::translate("StuScoreUi", "\350\277\224\345\233\236", nullptr));
        QTableWidgetItem *___qtablewidgetitem = table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("StuScoreUi", "\350\257\276\347\250\213\347\274\226\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("StuScoreUi", "\350\257\276\347\250\213\345\220\215\347\247\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("StuScoreUi", "\350\257\276\347\250\213\345\210\206\346\225\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = table->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("StuScoreUi", "\345\255\246\345\210\206", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = table->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("StuScoreUi", "\344\273\273\350\257\276\350\200\201\345\270\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StuScoreUi: public Ui_StuScoreUi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUSCOREUI_H
