#ifndef MYTIMER_H
#define MYTIMER_H

#include <QDialog>
#include <QTimer>

namespace Ui {
class myTimer;
}

class myTimer : public QDialog
{
    Q_OBJECT

public:
    explicit myTimer(QWidget *parent = nullptr);
    ~myTimer();

public slots:
    void myfunction();


private:
    Ui::myTimer *ui;
    QTimer *timer;
};

#endif // MYTIMER_H
