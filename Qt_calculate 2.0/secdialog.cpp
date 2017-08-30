#include "secdialog.h"
#include "ui_secdialog.h"
#include "calculate.h"

double textNum;

secDialog::secDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::secDialog)
{
    ui->setupUi(this);
}

secDialog::~secDialog()
{
    delete ui;
}

void secDialog::on_buttonBox_accepted()
{
    textNum = ui->lineEdit_num->text().toDouble();

}
