#ifndef CALCULATE_H
#define CALCULATE_H

#include <QMainWindow>

namespace Ui {
class calculate;
}

class calculate : public QMainWindow
{
    Q_OBJECT

public:
    explicit calculate(QWidget *parent = 0);
    ~calculate();

private slots:
    void on_calButton_2_clicked();

private:
    Ui::calculate *ui;
};

#endif // CALCULATE_H
