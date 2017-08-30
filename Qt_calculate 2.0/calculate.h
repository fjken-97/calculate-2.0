#ifndef CALCULATE_H
#define CALCULATE_H

#include "expression.h"
#include "getcalculate.h"
#include <QMainWindow>
#include <QDebug>
#include <QStack>

namespace Ui {
class calculate;
}

class calculate : public QMainWindow
{
    Q_OBJECT

public:
    explicit calculate(QWidget *parent = 0);
    int number_Text;
    ~calculate();
    Expression exp;

private slots:

    void on_calButton_clicked();
    void on_ClearButton_clicked();

    void on_pushButton_1_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_7_clicked();
    void on_pushButton_8_clicked();
    void on_pushButton_9_clicked();
    void on_pushButton_0_clicked();


    void on_pushButton_begin_clicked();

    void on_pushButton_NULL_clicked();

private:
    Ui::calculate *ui;
};

#endif // CALCULATE_H
