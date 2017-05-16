
#include"scan.h"
#include <iostream>
using namespace std;

/* void Choice::set(char ch)
{
	choice = ch;
}
void Choice::ReadFile()
{
	switch (choice)
	{
	case 'a': {
		fstream file;
		file.open("Simplified Chinese.txt");
		char line[100] = "";
		for (int i = 0;i <= 1;i++)
		{
			file.getline(line, 100);
			cout << line << endl;
		}
		file.close();
	}
	case 'b': {
		fstream file;
		file.open("English.txt");
		char line[100] = "";
		for (int i = 0;i <= 1;i++)
		{
			file.getline(line, 100);
			cout << line << endl;
		}
		file.close();
	}
	default:
		break;
	}
} */

void print(double sum)
{
	cout << "******************************************************************************" << endl << endl;


	cout << "[4] - 您正确回答的题数为 : " << sum << endl << endl;


	cout << "    - 再接再励，期待你下次更好的表现！" << endl << endl;

}

char choice()

{
	int i;
	char choise;
	for (i = 0;;i++)
	{
		cout << "    - ";
		cin >> choise;
		cout << "******************************************************************************" << endl << endl;
		if (choise == 'a')
		{
			cout << "[2] - 请输入你所想要的题目数(你可以输入'e'则结束程序)：" << endl << endl;
			break;
		}
		else if (choise == 'b')
		{
			cout << "[2] - Please enter the number of texts you want(You can enter'e'to end the program):" << endl << endl;
			break;
		}
		else
		{
			cout << "输入不当，请重新选择选项/Please select the option again if it is wrong" << endl << endl;
			continue;
		}
	}
	return choise;
}

void Scan(char choise)
{
	cout << endl;
	cout << "******************************************************************************" << endl << endl;
	if (choise == 'a')
	{
		cout << "[3] - 请在下列等式后输入你认为正确的答案：" << endl << endl;
	}
	else if (choise == 'b')
	{
		cout << "[3] - Please enter the answer you think after the equation:" << endl << endl;
	}
}

void Title()
{
	cout << "******************************************************************************" << endl << endl;
	cout << "      今天你刷题了吗？快动动你的小手，熟练一下吧！    " << endl << endl;
	cout << "******************************************************************************" << endl << endl;
	cout << "[1] - 请选择你所需要的语言 ( Please choose the language that you need ) :" << endl << endl;
	cout << "      a.简体中文 ;  b.英文 ( a.Simplified Chinese ; b.English ) " << endl << endl;
}