#include "testwidget.h"
#include "ui_testwidget.h"

testwidget::testwidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::testwidget)
{
    ui->setupUi(this);
}

testwidget::~testwidget()
{
    delete ui;
}
