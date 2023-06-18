#include "mainwindow.h"
#include "globalshortcut.h"
#include <QApplication>

int global1=0;
void MainWindow::activated()
{
    if(isVisible()&&global1==0)
    {
        showMaximized();
        global1++;
    }
    else if(global1==1&&isVisible())
    {
        showMinimized();
        global1=0;
    }
    else this->show();

}


int main(int argc, char *argv[])
{
    //应用程序类
    QApplication a(argc, argv);
    //窗口对象

    MainWindow w;
    //显示窗口
    w.show();

    GlobalShortCut *shortcut = new GlobalShortCut("Ctrl+W",&w);
    QObject::connect(shortcut,SIGNAL(activated()),&w,SLOT(activated()));
    //阻塞函数，进入循环事件
    return a.exec();
}
