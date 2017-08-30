#include "calculate.h"
#include "ui_calculate.h"
#include"getcalculate.h"
#include"expression.h"
#include"secdialog.h"
#include "choo.h"
#include <QMessageBox>
#include <iostream>
#include <sstream>
#include <fstream>
#include <time.h>
#include <string>

#include <QTextStream>
#include <stdio.h>

using namespace std;

QApplication *main;
extern double textNum;
QString enter="";
int c = 0;  //用于统计回答正确的题目数
int h = 0;  //用于记录已显示的题目数

calculate::calculate(QWidget *parent) : QMainWindow(parent), ui(new Ui::calculate)
{
    ui->setupUi(this);

    /*所有按键，信号连接*/
    QObject::connect(ui->calButton,SIGNAL(clicked()),this,SLOT(calSlot()));
    QObject::connect(ui->ClearButton,SIGNAL(clicked),this,SLOT(on_ClearButton_clicked()));

    QObject::connect(ui->pushButton_0,SIGNAL(clicked),this,SLOT(on_pushButton_0_clicked()));
    QObject::connect(ui->pushButton_1,SIGNAL(clicked),this,SLOT(on_pushButton_1_clicked()));
    QObject::connect(ui->pushButton_2,SIGNAL(clicked),this,SLOT(on_pushButton_2_clicked()));
    QObject::connect(ui->pushButton_3,SIGNAL(clicked),this,SLOT(on_pushButton_3_clicked()));
    QObject::connect(ui->pushButton_4,SIGNAL(clicked),this,SLOT(on_pushButton_4_clicked()));
    QObject::connect(ui->pushButton_5,SIGNAL(clicked),this,SLOT(on_pushButton_5_clicked()));
    QObject::connect(ui->pushButton_6,SIGNAL(clicked),this,SLOT(on_pushButton_6_clicked()));
    QObject::connect(ui->pushButton_7,SIGNAL(clicked),this,SLOT(on_pushButton_7_clicked()));
    QObject::connect(ui->pushButton_8,SIGNAL(clicked),this,SLOT(on_pushButton_8_clicked()));
    QObject::connect(ui->pushButton_9,SIGNAL(clicked),this,SLOT(on_pushButton_9_clicked()));

    ui->groupBox->hide();
}

calculate::~calculate()
{
    delete ui;
}

void calculate::on_calButton_clicked()
{
    double answer,result;
    int n = textNum;
    //ui->label_text->setText(exp.generateExpression().c_str());
    answer=ui->ResultlineEdit_answer->text().toDouble();
    result = calculateResult(exp.show_exp());
    QTextStream cout(stdout,  QIODevice::WriteOnly);
    cout<<answer<<" "<<result<<" "<<n<<" "<<h<<" "<<" "<<enter;
    ui->groupBox->show();
    if(checkanswer(result, answer))
    {
        c++;
        ui->label_check->setText("回答正确!");
        ui->label_judge->setText("继续保持哟!");
    }
    else
    {
        ui->label_check->setText("回答错误! 粗心了哟!");
        ui->label_judge->setText(QString("正确答案是: %1").arg(result));
    }
    h++;
    if(h == n)
    {
        ui->label_text->setAlignment(Qt::AlignVCenter);
        ui->label_text->setText("闯关结束(｡･∀･)ﾉ");
        ui->label_check->setText(QString("您正确回答的题数为: %1 道").arg(c));
        ui->label_judge->setText("再接再励，期待你下次更好的表现:");
        //main->closeAllWindows();
        //QMessageBox::information(this,"合计成果","在本次的答题过程中共回答正确 %d 题",count);
    }
    //ui->label_text->setText(exp.generateExpression().c_str());
}
    /*
    if(ui->groupBox->isVisible())
    {
        ui->groupBox->hide();
        ui->calButton->setText("确认<<");
    }
    else
    {
        ui->groupBox->show();
        ui->calButton->setText("确认>>");
    }
            */



void calculate::on_pushButton_1_clicked()
{
    if(ui->ResultlineEdit_answer->text().isEmpty())
    {
        ui->ResultlineEdit_answer->setText("1");
        enter = "1";
    }
    else
    {
        enter += "1";
        ui->ResultlineEdit_answer->setText(enter);
        //ui->ResultlineEdit_answer+="1";
    }
}

void calculate::on_pushButton_2_clicked()
{
    if(ui->ResultlineEdit_answer->text().isEmpty())
    {
        ui->ResultlineEdit_answer->setText("2");
        enter = "2";
    }
    else
    {
        enter += "2";
        ui->ResultlineEdit_answer->setText(enter);
        //ui->ResultlineEdit_answer+="2";
    }
}

void calculate::on_pushButton_3_clicked()
{
    if(ui->ResultlineEdit_answer->text().isEmpty())
    {
        ui->ResultlineEdit_answer->setText("3");
        enter = "3";
    }
    else
    {
        enter += "3";
        ui->ResultlineEdit_answer->setText(enter);
    }
}

void calculate::on_pushButton_4_clicked()
{
    if(ui->ResultlineEdit_answer->text().isEmpty())
    {
        ui->ResultlineEdit_answer->setText("4");
        enter = "4";
    }
    else
    {
        enter += "4";
        ui->ResultlineEdit_answer->setText(enter);
    }
}

void calculate::on_pushButton_5_clicked()
{
    if(ui->ResultlineEdit_answer->text().isEmpty())
    {
        ui->ResultlineEdit_answer->setText("5");
        enter = "5";
    }
    else
    {
        enter += "5";
        ui->ResultlineEdit_answer->setText(enter);
    }
}

void calculate::on_pushButton_6_clicked()
{
    if(ui->ResultlineEdit_answer->text().isEmpty())
    {
        ui->ResultlineEdit_answer->setText("6");
        enter = "6";
    }
    else
    {
        enter += "6";
        ui->ResultlineEdit_answer->setText(enter);
    }
}

void calculate::on_pushButton_7_clicked()
{
    if(ui->ResultlineEdit_answer->text().isEmpty())
    {
        ui->ResultlineEdit_answer->setText("7");
        enter = "7";
    }
    else
    {
        enter += "7";
        ui->ResultlineEdit_answer->setText(enter);
    }
}

void calculate::on_pushButton_8_clicked()
{
    if(ui->ResultlineEdit_answer->text().isEmpty())
    {
        ui->ResultlineEdit_answer->setText("8");
        enter = "8";
    }
    else
    {
        enter += "8";
        ui->ResultlineEdit_answer->setText(enter);
    }
}

void calculate::on_pushButton_9_clicked()
{
    if(ui->ResultlineEdit_answer->text().isEmpty())
    {
        ui->ResultlineEdit_answer->setText("9");
        enter = "9";
    }
    else
    {
        enter += "9";
        ui->ResultlineEdit_answer->setText(enter);
    }
}

void calculate::on_pushButton_0_clicked()
{
    if(ui->ResultlineEdit_answer->text().isEmpty())
    {
        ui->ResultlineEdit_answer->setText("0");
        enter = "0";
    }
    else
    {
        enter += "0";
        ui->ResultlineEdit_answer->setText(enter);
    }
}

void calculate::on_ClearButton_clicked()
{
    ui->ResultlineEdit_answer->clear();
}

void calculate::on_pushButton_begin_clicked()
{
    if(ui->pushButton_begin->text()=="开始")
    {
        secDialog secChooice;
        secChooice.setModal(true);
        ui->pushButton_begin->setText("Next");
        secChooice.exec();
    }
    ui->ResultlineEdit_answer->clear();
    enter = "";
    ui->groupBox->hide();
    ui->label_text->setText(exp.generateExpression().c_str());
}

void calculate::on_pushButton_NULL_clicked()
{
    if(ui->ResultlineEdit_answer->text().isEmpty())
    {
        ui->ResultlineEdit_answer->setText("-");
        enter = "-";
    }
}
