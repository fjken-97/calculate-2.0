#ifndef CHOOICE_H
#define CHOOICE_H
#include "ui_choo.h"
#include <QDialog>

namespace Ui {
class chooice;
}

class chooice : public QDialog
{
    Q_OBJECT

public:
    explicit chooice(QWidget *parent = 0);
    ~chooice();

private:
    Ui::chooice *ui;
};

#endif // CHOOICE_H
