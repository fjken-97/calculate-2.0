
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


	cout << "[4] - ����ȷ�ش������Ϊ : " << sum << endl << endl;


	cout << "    - �ٽ��������ڴ����´θ��õı��֣�" << endl << endl;

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
			cout << "[2] - ������������Ҫ����Ŀ��(���������'e'���������)��" << endl << endl;
			break;
		}
		else if (choise == 'b')
		{
			cout << "[2] - Please enter the number of texts you want(You can enter'e'to end the program):" << endl << endl;
			break;
		}
		else
		{
			cout << "���벻����������ѡ��ѡ��/Please select the option again if it is wrong" << endl << endl;
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
		cout << "[3] - �������е�ʽ����������Ϊ��ȷ�Ĵ𰸣�" << endl << endl;
	}
	else if (choise == 'b')
	{
		cout << "[3] - Please enter the answer you think after the equation:" << endl << endl;
	}
}

void Title()
{
	cout << "******************************************************************************" << endl << endl;
	cout << "      ������ˢ�����𣿿춯�����С�֣�����һ�°ɣ�    " << endl << endl;
	cout << "******************************************************************************" << endl << endl;
	cout << "[1] - ��ѡ��������Ҫ������ ( Please choose the language that you need ) :" << endl << endl;
	cout << "      a.�������� ;  b.Ӣ�� ( a.Simplified Chinese ; b.English ) " << endl << endl;
}