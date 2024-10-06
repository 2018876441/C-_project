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
        StuScoreUi->resize(700, 400);
        StuScoreUi->setMinimumSize(QSize(650, 400));
        StuScoreUi->setMaximumSize(QSize(720, 1024));
        verticalLayout = new QVBoxLayout(StuScoreUi);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        recover = new QPushButton(StuScoreUi);
        recover->setObjectName("recover");
        recover->setMinimumSize(QSize(60, 17));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setHintingPreference(QFont::PreferDefaultHinting);
        recover->setFont(font);
        recover->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.107955, y1:0.137, x2:0.773, y2:0.920364, stop:0 rgba(230, 195, 87, 182), stop:1 rgba(227, 149, 191, 197));\n"
"border-radius:6px;"));

        horizontalLayout_4->addWidget(recover);

        label_2 = new QLabel(StuScoreUi);
        label_2->setObjectName("label_2");

        horizontalLayout_4->addWidget(label_2);

        checkEdit = new QLineEdit(StuScoreUi);
        checkEdit->setObjectName("checkEdit");
        checkEdit->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.107955, y1:0.177, x2:0.87, y2:0.766955, stop:0.00568182 rgba(66, 66, 66, 52), stop:1 rgba(88, 88, 88, 99));\n"
"border-radius:6px;"));

        horizontalLayout_4->addWidget(checkEdit);

        checkBtn = new QPushButton(StuScoreUi);
        checkBtn->setObjectName("checkBtn");
        checkBtn->setMinimumSize(QSize(60, 17));
        checkBtn->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.574, y1:0.710864, x2:0.182, y2:0, stop:0 rgba(108, 209, 81, 170), stop:1 rgba(227, 149, 191, 197));\n"
"border-radius:6px;"));

        horizontalLayout_4->addWidget(checkBtn);

        returnBtn = new QPushButton(StuScoreUi);
        returnBtn->setObjectName("returnBtn");
        returnBtn->setMinimumSize(QSize(60, 17));
        returnBtn->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.154, y1:0.0734545, x2:0.687637, y2:0.755773, stop:0 rgba(255, 138, 97, 145), stop:1 rgba(234, 25, 25, 158));\n"
"border-radius:6px;"));

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
        table->setEnabled(true);
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        table->setFont(font1);
        table->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 31);"));

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
