#include "testwidget.h"
#include "globalshortcut.h"
#include "ui_testwidget.h"

testwidget::testwidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::testwidget)
{
    ui->setupUi(this);

    GlobalShortCut *shortcut = new GlobalShortCut("Ctrl+Q",this);
    QObject::connect(shortcut,SIGNAL(activated()),this,SLOT(activated()));
}

testwidget::~testwidget()
{
    delete ui;
}


int global2=0;
void testwidget::activated()
{
    if(isVisible()&&global2==0)
    {
        showMinimized();
        global2++;
    }
    else if(global2==1&&isVisible())
    {
        showMaximized();
        global2=0;
    }
    else this->show();

}
