#include "register.h"
#include "ui_register.h"
#include "mainwindow.h"


Register::Register(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Register)
{
    ui->setupUi(this);

    //连接数据库全部的操作

//    qDebug()<<"available drivers:";
//       QStringList drivers = QSqlDatabase::drivers();
//       foreach(QString driver, drivers)
//           qDebug()<<driver;

    QStringList list=QSqlDatabase::drivers();
    qDebug()<<list;
    QSqlDatabase db;
    db=QSqlDatabase::addDatabase("QMYSQL");
//    if(db.isValid())
//    {
//        QMessageBox::information(this,"conn","ok");
//    }
//    else
//    {
//        QMessageBox::information(this,"conn","error");
//    }
    db.setHostName("127.0.0.1");
    db.setPort(3306);
    db.setUserName("root");
    db.setPassword("lc210085");
    db.setDatabaseName("qt");
    if(db.open())
    {
        QMessageBox::information(this,"成功","");
    }
    else
    {
        QString msg=db.lastError().text();
        QMessageBox::information(this,"失败","");
    }

}

Register::~Register()
{
    delete ui;
}

void Register::on_pushButton_clicked()
{
    QString username=ui->lineEdit->text();
    QString password=ui->lineEdit_3->text();
    QString confirmedpassword=ui->lineEdit_4->text();
    QByteArray ba = username.toUtf8();
    qDebug()<<username;
    QSqlQuery query;
    query.prepare("insert into qt(user_username,user_password) values(:name,:password);");
    query.bindValue(":name",username);
    query.bindValue(":password",password);
    query.exec();
}


