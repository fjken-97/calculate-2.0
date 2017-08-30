#ifndef GETCALCULATE_H
#define GETCALCULATE_H

#include"expression.h"
#include<iostream>
#include<stack>
using namespace std;

void transform(string infix, char postfix[]);
double calculateResult(string infix);    //计算后缀表达式的值 并且 计算生成的运算式的结果
bool checkanswer(int res, int ans);

#endif // GETCALCULATE_H
