/************************************************************
FileName: main.cpp          Author: 柯奇豪
Version : 1.0               Date: 2017/4/27
Function List:  calculate（）——实现圆面积的计算             
************************************************************/

#include "Cricle.h"
#include<iostream>
#include <limits>
using namespace std;

int main()
{
	bool test=true;
	while (test)
	{
		double r, S;
		char choice;
		cout << "*******************************************************************************"<<endl;
		cout << "请输入您需要的圆半径 r =  ";
		cin >> r;
		while ( cin.fail() || r < 0 )
		{
			cout << endl;
			cout << "您的输入有误，请重新输入你所想要的半径值"<<endl;
			cin.clear();       //恢复原始状态
			cin.sync();
			cout << r<<endl;
			//fflush(stdin);
			//cin.ignore( numeric_limits<streamsize>::max(), '\n');       //清空输入缓冲流
			cout << "请输入您需要的圆半径 r =  ";
			cin >> r;
			cout << endl;
		}	
		cin.clear();        //为了避免在正确输入数值以后附带上不必要的非法输入，类似"12DB"，这时候执行读入12清除DB的作用
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		S = calculate(r);
		cout << endl;
		cout << "您输入的半径所对应的圆面积 S =  ";
		cout << S <<endl<<endl;
		cout << "*******************************************************************************"<<endl;
		cout << "是否继续输入圆半径计算圆面积（Y/N）: ";
		cin >> choice;
		while ( cin.fail() || choice != 'Y' && choice != 'N')
		{
			cout << endl;
			cout << "您的输入有误，请输入(Y/N) : ";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cin >> choice;
		}
		if (choice=='N')
		{
			test = false;
		}
		cout << endl;
	}
	system("pause");
	return 0;
}