#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "testwidget.h"
#include<QPushButton>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //设置窗口名称
    this->setWindowTitle("lse");


    //设置窗口最小尺寸
    this->setMinimumSize(600,480);



    //创建按钮
    QPushButton *btn=new QPushButton("wcx是猪",this);
    btn->show();

    QPushButton *btn123=new QPushButton("wcx是猪",this);
    btn123->move(100,0);


    //信号槽
    connect(btn,&QPushButton::clicked,btn123,&QPushButton::hide);

    //初始化操作（数据，窗口）
    //显示当前窗口，显示另外一个
    //创建窗口对象
    //没有指定父对象，是独立窗口必须要用show()方法
    //testwidget* w=new testwidget;
    //w->show();

    //如果指定父对象不是独立窗口
    //testwidget* w=new testwidget(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

