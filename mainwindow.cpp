#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <windowswitchzadacha.h>
#include <mytimer.h>
#include <calculatorl.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    timer = new QTimer(this);

}

MainWindow::~MainWindow()
{
    delete ui;

}



void MainWindow::on_action_triggered()
{
    QMessageBox::about(this, "Про програму", "Програма створена Лавриненко Сергієм");
}

void MainWindow::on_action_2_triggered()
{
 QMessageBox::StandardButton reply = QMessageBox::question(this, "Вийти", "Ви точно бажаєте вийти?", QMessageBox::Yes | QMessageBox::No);

 if (reply == QMessageBox::Yes) {
 QApplication::quit();



 }


}




void MainWindow::on_pushButton_3_clicked()
{
    WindowSwitchZadacha window;
    window.setModal(true);
    window.exec();
}


void MainWindow::on_pushButton_2_clicked()
{
    myTimer window;
    window.setModal(true);
    window.exec();
}






void MainWindow::on_pushButton_5_clicked()
{
 Calculatorl window;
 window.setModal(true);
 window.exec();
}
