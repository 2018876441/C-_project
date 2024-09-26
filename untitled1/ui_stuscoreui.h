/********************************************************************************
** Form generated from reading UI file 'stuscoreui.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUSCOREUI_H
#define UI_STUSCOREUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
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
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QHBoxLayout *horizontalLayout_2;
    QTableWidget *tableWidget;

    void setupUi(QWidget *StuScoreUi)
    {
        if (StuScoreUi->objectName().isEmpty())
            StuScoreUi->setObjectName("StuScoreUi");
        StuScoreUi->resize(600, 400);
        StuScoreUi->setMinimumSize(QSize(600, 400));
        StuScoreUi->setMaximumSize(QSize(600, 400));
        verticalLayout = new QVBoxLayout(StuScoreUi);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label = new QLabel(StuScoreUi);
        label->setObjectName("label");

        horizontalLayout_3->addWidget(label);

        comboBox = new QComboBox(StuScoreUi);
        comboBox->setObjectName("comboBox");

        horizontalLayout_3->addWidget(comboBox);


        horizontalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_2 = new QLabel(StuScoreUi);
        label_2->setObjectName("label_2");

        horizontalLayout_4->addWidget(label_2);

        lineEdit = new QLineEdit(StuScoreUi);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout_4->addWidget(lineEdit);

        pushButton = new QPushButton(StuScoreUi);
        pushButton->setObjectName("pushButton");

        horizontalLayout_4->addWidget(pushButton);

        pushButton_2 = new QPushButton(StuScoreUi);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout_4->addWidget(pushButton_2);


        horizontalLayout->addLayout(horizontalLayout_4);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        tableWidget = new QTableWidget(StuScoreUi);
        if (tableWidget->columnCount() < 6)
            tableWidget->setColumnCount(6);
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
        tableWidget->setObjectName("tableWidget");

        horizontalLayout_2->addWidget(tableWidget);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(StuScoreUi);

        QMetaObject::connectSlotsByName(StuScoreUi);
    } // setupUi

    void retranslateUi(QWidget *StuScoreUi)
    {
        StuScoreUi->setWindowTitle(QCoreApplication::translate("StuScoreUi", "Form", nullptr));
        label->setText(QCoreApplication::translate("StuScoreUi", "\345\255\246\346\234\237\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("StuScoreUi", "\346\220\234\347\264\242\347\247\221\347\233\256\357\274\232", nullptr));
        pushButton->setText(QCoreApplication::translate("StuScoreUi", "\346\237\245\350\257\242", nullptr));
        pushButton_2->setText(QCoreApplication::translate("StuScoreUi", "\350\277\224\345\233\236", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("StuScoreUi", "\350\257\276\347\250\213\347\274\226\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("StuScoreUi", "\350\257\276\347\250\213\345\220\215\347\247\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("StuScoreUi", "\350\257\276\347\250\213\345\210\206\346\225\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("StuScoreUi", "\345\255\246\345\210\206", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("StuScoreUi", "\345\255\246\346\234\237", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("StuScoreUi", "\344\273\273\350\257\276\350\200\201\345\270\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StuScoreUi: public Ui_StuScoreUi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUSCOREUI_H
