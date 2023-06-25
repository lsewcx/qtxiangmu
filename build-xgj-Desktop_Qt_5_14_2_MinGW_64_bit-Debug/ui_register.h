/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Register
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName(QString::fromUtf8("Register"));
        Register->resize(400, 300);
        gridLayoutWidget = new QWidget(Register);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(130, 60, 111, 151));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(gridLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 0, 1, 1);

        lineEdit_3 = new QLineEdit(gridLayoutWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEdit_3, 1, 0, 1, 1);

        lineEdit_4 = new QLineEdit(gridLayoutWidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEdit_4, 2, 0, 1, 1);

        pushButton = new QPushButton(Register);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(150, 230, 75, 23));
        label = new QLabel(Register);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 80, 54, 12));
        label_2 = new QLabel(Register);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 120, 54, 20));
        label_3 = new QLabel(Register);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(70, 170, 54, 12));

        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QDialog *Register)
    {
        Register->setWindowTitle(QCoreApplication::translate("Register", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Register", "\346\263\250\345\206\214", nullptr));
        label->setText(QCoreApplication::translate("Register", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("Register", "\345\257\206\347\240\201\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("Register", "\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
