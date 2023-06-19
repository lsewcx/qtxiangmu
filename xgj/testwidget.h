#ifndef TESTWIDGET_H
#define TESTWIDGET_H

#include<QWidget>
#include<QKeySequenceEdit>

namespace Ui {
class testwidget;
}

class testwidget : public QWidget
{
    Q_OBJECT

public:
    explicit testwidget(QWidget *parent = nullptr);
    ~testwidget();
public slots:
    void activated();


private slots:
    /* 声明槽 */
    void KSEKeySequenceChanged(const QKeySequence &);


private:
    Ui::testwidget *ui;

    QKeySequenceEdit  *keySequenceEdit;
};

#endif // TESTWIDGET_H
