#include "calculate.h"
#include "choo.h"
#include "ui_choo.h"

chooice::chooice(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::choo)
{
    ui->setupUi(this);
}

chooice::~choo()
{
    delete ui;
}
