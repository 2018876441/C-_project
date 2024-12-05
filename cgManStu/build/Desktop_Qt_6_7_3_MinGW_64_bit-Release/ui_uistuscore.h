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
#include <QtWidgets/QComboBox>
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
    QComboBox *comboBox;
    QComboBox *comboBox_2;
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
        UiStuScore->resize(545, 366);
        verticalLayout = new QVBoxLayout(UiStuScore);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(-1, 0, -1, -1);
        comboBox = new QComboBox(UiStuScore);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setMinimumSize(QSize(70, 0));

        horizontalLayout->addWidget(comboBox);

        comboBox_2 = new QComboBox(UiStuScore);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName("comboBox_2");
        comboBox_2->setMinimumSize(QSize(90, 0));

        horizontalLayout->addWidget(comboBox_2);

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
        comboBox->setItemText(0, QCoreApplication::translate("UiStuScore", "\345\255\246\346\234\237", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("UiStuScore", "\345\244\247\344\270\200\344\270\212", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("UiStuScore", "\345\244\247\344\270\200\344\270\213", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("UiStuScore", "\345\244\247\344\272\214\344\270\212", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("UiStuScore", "\345\244\247\344\272\214\344\270\213", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("UiStuScore", "\345\244\247\344\270\211\344\270\212", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("UiStuScore", "\345\244\247\344\270\211\344\270\213", nullptr));
        comboBox->setItemText(7, QCoreApplication::translate("UiStuScore", "\345\244\247\345\233\233\344\270\212", nullptr));
        comboBox->setItemText(8, QCoreApplication::translate("UiStuScore", "\345\244\247\345\233\233\344\270\213", nullptr));

        comboBox_2->setItemText(0, QCoreApplication::translate("UiStuScore", "\345\255\246\345\271\264", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("UiStuScore", "\347\254\254\344\270\200\345\255\246\345\271\264", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("UiStuScore", "\347\254\254\344\272\214\345\255\246\345\271\264", nullptr));
        comboBox_2->setItemText(3, QCoreApplication::translate("UiStuScore", "\347\254\254\344\270\211\345\255\246\345\271\264", nullptr));
        comboBox_2->setItemText(4, QCoreApplication::translate("UiStuScore", "\347\254\254\345\233\233\345\255\246\345\271\264", nullptr));

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
