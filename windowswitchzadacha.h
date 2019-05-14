#ifndef WINDOWSWITCHZADACHA_H
#define WINDOWSWITCHZADACHA_H

#include <QDialog>

namespace Ui {
class WindowSwitchZadacha;
}

class WindowSwitchZadacha : public QDialog
{
    Q_OBJECT

public:
    explicit WindowSwitchZadacha(QWidget *parent = nullptr);
    ~WindowSwitchZadacha();

private slots:


    void on_pushButton_clicked();

private:
    Ui::WindowSwitchZadacha *ui;
};

#endif // WINDOWSWITCHZADACHA_H
