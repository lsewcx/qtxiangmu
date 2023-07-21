#include "register.h"
#include "ui_register.h"
#include "mainwindow.h"


Register::Register(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Register)
{
    ui->setupUi(this);

    ui->lineEdit->setPlaceholderText("请输入用户名");
    ui->lineEdit_3->setPlaceholderText("请输入密码");
    ui->lineEdit_4->setPlaceholderText("重复输入密码");

    //连接数据库全部的操作

//    qDebug()<<"available drivers:";
//       QStringList drivers = QSqlDatabase::drivers();
//       foreach(QString driver, drivers)
//           qDebug()<<driver;

//    QStringList list=QSqlDatabase::drivers();
//    qDebug()<<list;
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
    db.open();
//    if(db.open())
//    {
//        QMessageBox::information(this,"成功","");
//    }
//    else
//    {
//        QString msg=db.lastError().text();
//        QMessageBox::information(this,"失败","");
//    }

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
    if(password!=confirmedpassword)
        QMessageBox::information(this,"错误","两次密码不一致");
    else if(username.length()<=6)
        QMessageBox::information(this,"错误","用户名太短");
    else if(username.length()>=40)
        QMessageBox::information(this,"错误","用户名太长");
    else if(password.length()<6)
        QMessageBox::information(this,"错误","密码太短");
    else if(password.length()>=30)
        QMessageBox::information(this,"错误","密码太长");
    else
    {
        QSqlQuery query;

        query.prepare("insert into qt(user_username,user_password) values(:name,:password);");
        query.bindValue(":name",username);
        query.bindValue(":password",password);
        query.exec();
    }
}


