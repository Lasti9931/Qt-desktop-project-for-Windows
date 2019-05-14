#ifndef CALCULATORKY_H
#define CALCULATORKY_H

#include <QMainWindow>

namespace Ui {
class CalculatorKy;
}

class CalculatorKy : public QMainWindow
{
    Q_OBJECT

public:
    explicit CalculatorKy(QWidget *parent = nullptr);
    ~CalculatorKy();

private:
    Ui::CalculatorKy *ui;
};

#endif // CALCULATORKY_H
