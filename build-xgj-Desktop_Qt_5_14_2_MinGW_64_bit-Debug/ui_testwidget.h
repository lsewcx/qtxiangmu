/********************************************************************************
** Form generated from reading UI file 'testwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTWIDGET_H
#define UI_TESTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_testwidget
{
public:
    QPushButton *pushButton;

    void setupUi(QWidget *testwidget)
    {
        if (testwidget->objectName().isEmpty())
            testwidget->setObjectName(QString::fromUtf8("testwidget"));
        testwidget->resize(400, 300);
        pushButton = new QPushButton(testwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(140, 200, 75, 23));

        retranslateUi(testwidget);

        QMetaObject::connectSlotsByName(testwidget);
    } // setupUi

    void retranslateUi(QWidget *testwidget)
    {
        testwidget->setWindowTitle(QCoreApplication::translate("testwidget", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("testwidget", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class testwidget: public Ui_testwidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTWIDGET_H
