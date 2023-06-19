#include "testwidget.h"
#include "globalshortcut.h"
#include "ui_testwidget.h"

testwidget::testwidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::testwidget)
{
    ui->setupUi(this);

    this->setGeometry(0,0,300,240);
    keySequenceEdit=new QKeySequenceEdit(this);
    keySequenceEdit->setGeometry(350,200,150,30);

    connect(keySequenceEdit,
            SIGNAL(keySequenceChanged(const QKeySequence &)),
            this,
            SLOT(KSEKeySequenceChanged(const QKeySequence &)));



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

void testwidget::KSEKeySequenceChanged(const QKeySequence &keySequence)
{
    if(keySequence == QKeySequence(tr("Ctrl+Q"))) {
            /* 结束程序 */
            this->close();
        }else {
            /* 打印出按下的组合键 */
        return;
        }
}
