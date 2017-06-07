#include"Expression.h"
#include"calculate.h"
#include<iostream>
#include<cstdlib>
using namespace std;

void Expression::set(int num)
{

	number = num;
}

string Expression::Result()
{
	return equation;
}

void Expression::Res_set(double r)
{
	result = r;
}

int RandomNumber::random()
{
	int d;
	d = rand() % 10 + 1;
	return d;
}

int RandomOperation::random()
{
	int n = rand() % 4;
	char sym;
	switch (n)
	{
	case 0: sym = '+';break;
	case 1: sym = '-';break;
	case 2: sym = '*';break;
	case 3: sym = '/';break;
	}
	return sym;
}

string Expression::Int_str(int n)
{

	char str[100];
	itoa(n, str, 10);
	return str;
}

string Expression::generateExpression()
{
	for (;;)
	{
		int h = 1;
		int number[4];
		string sign[4];
		string num_1, num_2;
		RandomFactory factory;
		for (int i = 0;i <= 3;i++)
		{
			Random* pointNum = factory.creatRandom("Randomnum");
			number[i] = pointNum -> random();    //用于随机生成数字
		}
		for (int j = 0;j <= 2;j++)
		{
			Random* pointOpe = factory.creatRandom("RandomOpe");
			sign[j] = pointOpe -> random();		//用于随机生成运算符
		}
		string equa = "";
		for (int i = 0;i <= 2;i++)
		{
			num_1 = Int_str(number[i]);
			num_2 = Int_str(number[i + 1]);
			int temp = rand() % 2 + 1;
			switch (temp)
			{
			case 1:
			{
				if (i == 0)
				{
					equa = num_1 + sign[i] + num_2;
				}
				else
				{
					equa = equa + sign[i] + num_1;
				}
				break;
			}
			case 2:
			{
				if (i == 0)
				{
					equa = "(" + num_1 + sign[i] + num_2 + ")";
				}
				else
				{
					equa = "(" + equa + sign[i] + num_1 + ")";
				}
				break;
			}
			}
		}
		double res = calculateResult(equa);
		//cout << res << endl << endl;
		if (res == (int)res)
		{
			Res_set(res);
			equation = equa;
			return equation;
			break;
		}
	}
}

string Expression::show()
{
	return equation;
}

/*
void Expression::set(int num)
{

number = num;
}

string Expression::Result()
{
return equation;
}

void Expression::Res_set(double r)
{
result = r;
}

int Expression::randomNumber()
{
int d;
d = rand() % 10 + 1;
return d;
}

char Expression::randomOperation()
{
int n = rand() % 4;
char sym;
switch (n)
{
case 0: sym = '+';break;
case 1: sym = '-';break;
case 2: sym = '*';break;
case 3: sym = '/';break;
}
return sym;
}

string Expression::Int_str(int n)
{

char str[100];
itoa(n, str, 10);
return str;
}

string Expression::generateExpression()
{
for (;;)
{
int h = 1;
int number[4];
string sign[4];
string num_1, num_2;
for (int i = 0;i <= 3;i++)
{
number[i] = randomNumber();
//用于随机生成数字
}
for (int j = 0;j <= 2;j++)
{
sign[j] = randomOperation();		//用于随机生成运算符
}
string equa = "";
for (int i = 0;i <= 2;i++)
{
num_1 = Int_str(number[i]);
num_2 = Int_str(number[i + 1]);
int temp = rand() % 2 + 1;
//cout<<temp;
switch (temp)
{
case 1:
{
if (i == 0)
{
equa = num_1 + sign[i] + num_2;
}
else
{
equa = equa + sign[i] + num_1;
}
break;
}
case 2:
{
if (i == 0)
{
equa = "(" + num_1 + sign[i] + num_2 + ")";
}
else
{
equa = "(" + equa + sign[i] + num_1 + ")";
}
break;
}
}
}
double res = calculateResult(equa);
//cout << res << endl << endl;
if (res == (int)res)
	
Res_set(res);
equation = equa;
return equation;
break;
}
}
}

string Expression::show()
{
return equation;
}
*/	


