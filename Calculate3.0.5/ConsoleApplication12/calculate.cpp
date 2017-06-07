#include"calculate.h"
#include"Expression.h"
#include<stack>
#include<iostream>
using namespace std;

void transform(string infix, char postfix[])     //��׺���ʽתΪ��׺���ʽ 
{
	stack <char> sign;
	int i = 0, j = 0;
	while (i < infix.size())
	{
		if ((infix[i] >= '0') && (infix[i] <= '9'))      //�ж����� 
		{
			while ((infix[i] >= '0') && (infix[i] <= '9'))

			{
				postfix[j] = infix[i];
				i++;
				j++;
			}
			postfix[j] = '!'; //��ʶ����������Ϊ�˲�ʹ�����ֻ����޷�һһʶ�� 
			j++;
		}
		if ((infix[i] == '+') || (infix[i] == '-')) //�ж�'+'��'-' 
		{
			while (!sign.empty() && (sign.top() != '('))
			{
				postfix[j] = sign.top();
				j++;
				sign.pop();
			}
			sign.push(infix[i]);
		}
		if (infix[i] == '*' || infix[i] == '/')   //�ж�'*'��'/' 
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
			sign.push(infix[i]); //�ж�'(' 
		if (infix[i] == ')') //�ж�')' 
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
	while (!sign.empty())    //ת������ջ��ʣ��������  
	{
		postfix[j] = sign.top();
		j++;
		sign.pop();
	}
	postfix[j] = '\0';     //����һ����ֹ�� 
}
double calculateResult(string infix)     //�����׺���ʽ��ֵ ���� �������ɵ�����ʽ�Ľ��
{
	int i = 0, point = -1;
	char postfix[100];
	double figure[100] = {}; // ��һ����������������ջ 
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