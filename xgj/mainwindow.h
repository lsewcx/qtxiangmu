#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include<QMainWindow>
#include<QPushButton>
#include<QMouseEvent>
#include<QAction>
#include<QMessageBox>
#include<QKeyEvent>
#include<QDebug>
#include<QWidget>
#include<QObject>
#include<QEvent>
#include"windows.h"

QT_BEGIN_NAMESPACE
//ui文件中的类
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots: //调用方法把这两行加上其余查看testwidget中的内容
    void activated();



protected:
    void mousePressEvent(QMouseEvent *event);
    void keyPressEvent(QKeyEvent *event);


private slots:
    void on_actionshezhi_2_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

