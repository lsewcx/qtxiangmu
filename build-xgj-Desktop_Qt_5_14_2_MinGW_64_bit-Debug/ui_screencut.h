/********************************************************************************
** Form generated from reading UI file 'screencut.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCREENCUT_H
#define UI_SCREENCUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_screencut
{
public:

    void setupUi(QWidget *screencut)
    {
        if (screencut->objectName().isEmpty())
            screencut->setObjectName(QString::fromUtf8("screencut"));
        screencut->resize(400, 300);

        retranslateUi(screencut);

        QMetaObject::connectSlotsByName(screencut);
    } // setupUi

    void retranslateUi(QWidget *screencut)
    {
        screencut->setWindowTitle(QCoreApplication::translate("screencut", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class screencut: public Ui_screencut {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCREENCUT_H
