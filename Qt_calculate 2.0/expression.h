#ifndef EXPRESSION_H
#define EXPRESSION_H
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

class Expression{
    string num_1, num_2;
    string equation;
    double result;
public:
    void set(int);
    int randomNumber();
    char randomOperation();
    string generateExpression();
    string Int_str(int);
    int number;
    string Result();
    void Res_set(double);
    string show_exp();
};

double calculateResult(string);


#endif // EXPRESSION_H
