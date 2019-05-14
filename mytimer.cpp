#include "mytimer.h"
#include "ui_mytimer.h"
#include "QMessageBox"
#include <QDateTime>
#include <QLabel>




myTimer::myTimer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::myTimer)
{
    ui->setupUi(this);
   timer = new QTimer(this);
   connect(timer, SIGNAL(timeout()),this,SLOT(myfunction()));
   timer->start(100);
}

myTimer::~myTimer()
{
    delete ui;
}

void myTimer::myfunction()
{

QTime time = QTime::currentTime();
QString time_text = time.toString("hh : mm : ss");
ui->label_date_time->setText(time_text);

}

