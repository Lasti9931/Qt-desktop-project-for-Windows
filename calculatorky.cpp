#include "calculatorky.h"
#include "ui_calculatorky.h"
#include <iostream>

CalculatorKy::CalculatorKy(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CalculatorKy)
{
    ui->setupUi(this);
}

CalculatorKy::~CalculatorKy()
{
    delete ui;
}
