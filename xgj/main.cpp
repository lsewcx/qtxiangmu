#include "mainwindow.h"

#include <QApplication>


int main(int argc, char *argv[])
{
    //应用程序类
    QApplication a(argc, argv);
    //窗口对象
    MainWindow w;
    //显示窗口
    w.show();
    //阻塞函数，进入循环事件
    return a.exec();
}
