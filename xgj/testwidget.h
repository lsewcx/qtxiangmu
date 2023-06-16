#ifndef TESTWIDGET_H
#define TESTWIDGET_H

#include <QWidget>

namespace Ui {
class testwidget;
}

class testwidget : public QWidget
{
    Q_OBJECT

public:
    explicit testwidget(QWidget *parent = nullptr);
    ~testwidget();

private:
    Ui::testwidget *ui;
};

#endif // TESTWIDGET_H
