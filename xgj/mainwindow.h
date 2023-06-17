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


protected:
    void mousePressEvent(QMouseEvent *event);
    void keyPressEvent(QKeyEvent *event);


private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

