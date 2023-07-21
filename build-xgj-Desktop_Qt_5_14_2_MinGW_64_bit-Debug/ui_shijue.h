/********************************************************************************
** Form generated from reading UI file 'shijue.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHIJUE_H
#define UI_SHIJUE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_shijue
{
public:

    void setupUi(QDialog *shijue)
    {
        if (shijue->objectName().isEmpty())
            shijue->setObjectName(QString::fromUtf8("shijue"));
        shijue->resize(400, 300);

        retranslateUi(shijue);

        QMetaObject::connectSlotsByName(shijue);
    } // setupUi

    void retranslateUi(QDialog *shijue)
    {
        shijue->setWindowTitle(QCoreApplication::translate("shijue", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class shijue: public Ui_shijue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHIJUE_H
