#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "testwidget.h"


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
        QAction* act1=menu.addAction(("java"));
        connect(act1,&QAction::triggered,this,[=]()
        {
            QMessageBox::information(this,"java","你选择的是java");
        });
        QAction* act2=menu.addAction("python");
        connect(act2,&QAction::triggered,this,[=]()
        {
            QMessageBox::information(this,"python","你选择的是python");
        });
        QAction* act3=menu.addAction("设置");
        connect(act3,&QAction::triggered,this,[=]()
        {
            testwidget* w=new testwidget;
            w->show();
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


