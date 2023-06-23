#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "testwidget.h"
#include "screencut.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //设置窗口名称
    this->setWindowTitle("lse");


    //设置窗口最小尺寸
    this->setMinimumSize(600,480);



//    //创建按钮
//    QPushButton *btn=new QPushButton("wcx是猪",this);
//    btn->show();

//    QPushButton *btn123=new QPushButton("wcx是猪",this);
//    btn123->move(100,0);


//    //信号槽当btn被按下btn123就会被隐藏
//    connect(btn,&QPushButton::clicked,btn123,&QPushButton::hide);


    //初始化操作（数据，窗口）
    //显示当前窗口，显示另外一个
    //创建窗口对象
    //没有指定父对象，是独立窗口必须要用show()方法
//    testwidget* w=new testwidget;
//    w->show();

    //如果指定父对象不是独立窗口
    //testwidget* w=new testwidget(this);


    //连接数据库

    qDebug()<<"available drivers:";
       QStringList drivers = QSqlDatabase::drivers();
       foreach(QString driver, drivers)
           qDebug()<<driver;



    QStringList list=QSqlDatabase::drivers();
    qDebug()<<list;
    QSqlDatabase db=QSqlDatabase::addDatabase("QMYSQL");
    if(db.isValid())
    {
        QMessageBox::information(this,"conn","ok");
    }
    else
    {
        QMessageBox::information(this,"conn","error");
    }
    db.setHostName("127.0.0.1");
    db.setPort(3306);
    db.setUserName("root");
    db.setPassword("lc210085");
    db.setDatabaseName("lse1");
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

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::mousePressEvent(QMouseEvent *event)//鼠标右键
{
    if(event->button()==Qt::RightButton)
    {
        QMenu menu;
        QAction* act=menu.addAction("c++");
        connect(act,&QAction::triggered,this,[=]()
        {
            QMessageBox::information(this,"c++","你选择的是c++");
        });
        QAction* act1=menu.addAction("设置");
        connect(act1,&QAction::triggered,this,[=]()
        {
            testwidget* w=new testwidget;
            w->show();
        });
        QAction* act2=menu.addAction("截图");
        connect(act2,&QAction::triggered,this,[=]()
        {
            ScreenWidget::Instance()->showFullScreen();
        });
        menu.exec(QCursor::pos());
    }
}

int a=0;//计数器
// 键盘按下事件
void MainWindow::keyPressEvent(QKeyEvent *event)//注意keyPressEventk不要大写
{
    // 是否按下Ctrl键
    if(a==0&&event->modifiers() == Qt::ControlModifier)
    {
        // 是否按下M键
        if(a==0&&event->key() == Qt::Key_M)
        {
            // 窗口最大化
            showMaximized();
            a++;
        }
    }
    else if(a==1&&event->modifiers() == Qt::ControlModifier&&event->key() == Qt::Key_M)
    {
        //窗口最小化
        showMinimized();
        a=0;
    }
    else QWidget::keyPressEvent(event);
}


void MainWindow::on_actionshezhi_2_triggered()
{
    testwidget* w=new testwidget;
    w->show();
}




