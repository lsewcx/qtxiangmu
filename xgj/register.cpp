#include "register.h"
#include "ui_register.h"

Register::Register(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Register)
{
    ui->setupUi(this);
}

Register::~Register()
{
    delete ui;
}

void Register::on_pushButton_clicked()
{
    QString username=ui->lineEdit->text();
    qDebug()<<username;
    QString password=ui->lineEdit_3->text();
    qDebug()<<password;
    QString confirmedpassword=ui->lineEdit_4->text();
    qDebug()<<confirmedpassword;
}


