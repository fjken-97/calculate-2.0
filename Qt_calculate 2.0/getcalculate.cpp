#include"getcalculate.h"
#include"Expression.h"
#include<stack>
#include<iostream>
using namespace std;

void transform(string infix, char postfix[])     //中缀表达式转为后缀表达式
{
    stack <char> sign;
    int i = 0, j = 0;
    while (i < infix.size())
    {
        if ((infix[i] >= '0') && (infix[i] <= '9'))      //判断数字
        {
            while ((infix[i] >= '0') && (infix[i] <= '9'))

            {
                postfix[j] = infix[i];
                i++;
                j++;
            }
            postfix[j] = '!'; //标识单个整数，为了不使得数字混排无法一一识别
            j++;
        }
        if ((infix[i] == '+') || (infix[i] == '-')) //判断'+'、'-'
        {
            while (!sign.empty() && (sign.top() != '('))
            {
                postfix[j] = sign.top();
                j++;
                sign.pop();
            }
            sign.push(infix[i]);
        }
        if (infix[i] == '*' || infix[i] == '/')   //判断'*'、'/'
        {
            while ((!sign.empty()) && (sign.top() != '(') && ((sign.top() == '*') || (sign.top() == '/')))
            {
                postfix[j] = sign.top();
                j++;
                sign.pop();
            }
            sign.push(infix[i]);
        }
        if (infix[i] == '(')
            sign.push(infix[i]); //判断'('
        if (infix[i] == ')') //判断')'
        {
            while (sign.top() != '(')
            {
                postfix[j] = sign.top();
                j++;
                sign.pop();
            }
            sign.pop();
        }
        i++;
    }
    while (!sign.empty())    //转出符号栈中剩余的运算符
    {
        postfix[j] = sign.top();
        j++;
        sign.pop();
    }
    postfix[j] = '\0';     //补上一个终止符
}
double calculateResult(string infix)     //计算后缀表达式的值 并且计算生成的运算式的结果
{
    int i = 0, point = -1;
    char postfix[100];
    double figure[100] = {}; // 开一个存放运算操作的数栈
    transform(infix, postfix);
    while (postfix[i] != '\0')

    {
        if (postfix[i] >= '0'&&postfix[i] <= '9')
        {
            double k = 0;
            while (postfix[i] >= '0'&&postfix[i] <= '9')
            {
                k = 10 * k + postfix[i] - '0';
                i++;
            }
            point++;
            figure[point] = k;
        }
        else
        {
            point--;
            switch (postfix[i])
            {
            case '+':figure[point] = figure[point] + figure[point + 1];break;
            case '-':figure[point] = figure[point] - figure[point + 1];break;
            case '*':figure[point] = figure[point] * figure[point + 1];break;
            case '/':figure[point] = figure[point] / figure[point + 1];break;
            }
        }
        i++;
    }
    //cout << figure[point] << endl;
    return figure[point];
}

bool checkanswer(int res, int ans)
{
    if (res == ans)
    {
        return true;
    }
    else
    {
        return false;
    }
    //cout<<count;
}
