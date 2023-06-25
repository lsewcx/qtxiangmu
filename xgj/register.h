#ifndef REGISTER_H
#define REGISTER_H

#include <QDialog>
#include <QDebug>
#include <QLineEdit>
#include <QSqlQuery>
#include <QtSql>
#include <qsqldatabase.h>
#include<QString>
#include<QSqlDatabase>
#include<QSqlError>
#include <QString>
#include <string.h>
#include<cstring>
#include<string>
#include<typeinfo>

namespace Ui {
class Register;
}

class Register : public QDialog
{
    Q_OBJECT

public:
    explicit Register(QWidget *parent = nullptr);
    ~Register();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Register *ui;
};

#endif // REGISTER_H
