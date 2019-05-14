#include "windowswitchzadacha.h"
#include "ui_windowswitchzadacha.h"
#include <iostream>
#include <QMessageBox>
using namespace std;

WindowSwitchZadacha::WindowSwitchZadacha(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WindowSwitchZadacha)
{
    ui->setupUi(this);
}

WindowSwitchZadacha::~WindowSwitchZadacha()
{
    delete ui;
}





void WindowSwitchZadacha::on_pushButton_clicked()
{
    if (ui->radioButton->isChecked()){
        QMessageBox::information(this, "Станцiя метро", "Станцiя метро Trinitat Nova: Час в дорозi - 15 хв.");
    };
    if (ui->radioButton_2->isChecked()){
        QMessageBox::information(this, "Станцiя метро", "Станцiя метро Casa de l’Aigua: Час в дорозi - 19 хв.");
    };
    if (ui->radioButton_3->isChecked()){
        QMessageBox::information(this, "Станцiя метро", "Станцiя метро Torre Baro Vallbona: Час в дорозi - 25 хв.");
    };
    if (ui->radioButton_4->isChecked()){
        QMessageBox::information(this, "Станцiя метро", "Станцiя метро Ciutat Meridiana: Час в дорозi - 30 хв.");
    };
    if (ui->radioButton_5->isChecked()){
        QMessageBox::information(this, "Станцiя метро", "Станцiя метро Can Cuias: Час в дорозi - 38 хв.");
    };

}
