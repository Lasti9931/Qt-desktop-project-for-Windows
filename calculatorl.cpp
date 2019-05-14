#include "calculatorl.h"
#include "ui_calculatorl.h"

double num_first;

Calculatorl::Calculatorl(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Calculatorl)
{
    ui->setupUi(this);

    connect(ui->pushButton_0,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_1,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_3,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_4,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_5,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_6,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_7,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_8,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_9,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_plusiliminus,SIGNAL(clicked()),this,SLOT(operations()));
    connect(ui->pushButton_percent,SIGNAL(clicked()),this,SLOT(operations()));
    connect(ui->pushButton_delenie,SIGNAL(clicked()),this,SLOT(math_operations()));
    connect(ui->pushButton_minus,SIGNAL(clicked()),this,SLOT(math_operations()));
    connect(ui->pushButton_plus,SIGNAL(clicked()),this,SLOT(math_operations()));
    connect(ui->pushButton_X,SIGNAL(clicked()),this,SLOT(math_operations()));

    ui->pushButton_delenie->setCheckable(true);
    ui->pushButton_plus->setCheckable(true);
    ui->pushButton_minus->setCheckable(true);
    ui->pushButton_X->setCheckable(true);

}
Calculatorl::~Calculatorl()
{
    delete ui;
}

void Calculatorl::digits_numbers()
{
   QPushButton *button = (QPushButton *) sender();

   double all_numbers;
   QString new_label;

   if(ui->result_show->text().contains(".") && button->text() == "0"){
       new_label = ui->result_show->text() + button->text();
   } else {


   all_numbers = (ui->result_show->text() + button->text()).toDouble();
   new_label = QString::number(all_numbers, 'g', 15);
}
   ui->result_show->setText(new_label);


}

void Calculatorl::on_pushButton_dot_clicked()
{
    if(!(ui->result_show->text().contains(".")))
   ui->result_show->setText(ui->result_show->text() + ".");
}


void Calculatorl::operations()
{
   QPushButton *button = (QPushButton *) sender();

   double all_numbers;
   QString new_label;

   if(button->text() == "+/-") {
   all_numbers = (ui->result_show->text()).toDouble();
   all_numbers = all_numbers * -1;
   new_label = QString::number(all_numbers, 'g', 15);

   ui->result_show->setText(new_label);
}else  if(button->text() == "%") {
       all_numbers = (ui->result_show->text()).toDouble();
       all_numbers = all_numbers * 0.01;
       new_label = QString::number(all_numbers, 'g', 15);

       ui->result_show->setText(new_label);
    }
}

void Calculatorl::math_operations()
{
   QPushButton *button = (QPushButton *) sender();

   num_first = ui->result_show->text().toDouble();
   ui->result_show->setText("");

   button->setChecked(true);
}

void Calculatorl::on_pushButton_clear_clicked()
{
  ui->pushButton_plus->setChecked(false);
  ui->pushButton_minus->setChecked(false);
  ui->pushButton_delenie->setChecked(false);
  ui->pushButton_X->setChecked(false);

  ui->result_show->setText("0");
}

void Calculatorl::on_pushButton_equal_clicked()
{
    double labelNumber, num_second;
    QString new_label;

    num_second = ui->result_show->text().toDouble();

    if(ui->pushButton_plus->isChecked()){
        labelNumber = num_first + num_second;
        new_label = QString::number(labelNumber, 'g', 15);

        ui->result_show->setText(new_label);
        ui->pushButton_plus->setChecked(false);

    } else if(ui->pushButton_minus->isChecked()) {
        labelNumber = num_first - num_second;
        new_label = QString::number(labelNumber, 'g', 15);

        ui->result_show->setText(new_label);
        ui->pushButton_minus->setChecked(false);

    }else if(ui->pushButton_delenie->isChecked()){
        if(num_second == 0){
         ui->result_show->setText("0");
        }else{
        labelNumber = num_first / num_second;
        new_label = QString::number(labelNumber, 'g', 15);

        ui->result_show->setText(new_label);}
        ui->pushButton_delenie->setChecked(false);

    }else if(ui->pushButton_X->isChecked()){
        labelNumber = num_first * num_second;
        new_label = QString::number(labelNumber, 'g', 15);

        ui->result_show->setText(new_label);
        ui->pushButton_X->setChecked(false);

    }
}
