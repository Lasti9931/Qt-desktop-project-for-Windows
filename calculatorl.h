#ifndef CALCULATORL_H
#define CALCULATORL_H

#include <QDialog>

namespace Ui {
class Calculatorl;
}

class Calculatorl : public QDialog
{
    Q_OBJECT

public:
    explicit Calculatorl(QWidget *parent = nullptr);
    ~Calculatorl();

private:
    Ui::Calculatorl *ui;

private slots:
    void digits_numbers();
    void on_pushButton_dot_clicked();
    void operations();
    void on_pushButton_clear_clicked();
    void on_pushButton_equal_clicked();
    void math_operations();
};

#endif // CALCULATORL_H
