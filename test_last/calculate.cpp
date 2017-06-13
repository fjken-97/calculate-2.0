#include "calculate.h"
#include "ui_calculate.h"

calculate::calculate(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::calculate)
{
    ui->setupUi(this);
    QObject::connect(ui->calButton_2,SIGNAL(clicked()),this,SLOT(calSlot()));
    ui->groupBox->hide();
}

calculate::~calculate()
{
    delete ui;
}

void calculate::on_calButton_2_clicked()
{
    if(ui->groupBox->isVisible())
    {
        ui->groupBox->hide();
        ui->calButton_2->setText("确认<<");
    }
    else
    {
        ui->groupBox->show();
        ui->calButton_2->setText("确认>>");
    }
}
