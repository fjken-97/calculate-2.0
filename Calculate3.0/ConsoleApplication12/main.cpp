#include"calculate.h"
#include"Expression.h"
#include"scan.h"
#include <iostream>
#include <fstream>
#include <time.h>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
	srand((unsigned)time(NULL));
	// Choice lan;
	double answer,result;
	char ch;
	int count = 0;
	string Equation;
	Title();
	ch = choice();
	// cin >> c;
	// lan.set(c);
	// lan.ReadFile();
	int n, h = 0;
	cout << "    - ";
	cin >> n; 
	Scan(ch);
	// lan.ReadFile();
	Expression exp;
	for (;h < n ; h++)
	{
		cout << "     The question" << " [ " << h << " ] : " << exp.generateExpression() << " = ";
		result = calculateResult(exp.show());
		//cout << result << endl;
		cin >> answer;
		cout << endl;
		if(checkanswer(result, answer))
		{
			count++;
			cout << "     �ش���ȷ����������Ӵ��" << endl;
		}
		else
		{
			cout << "     �ش���󣡴�����Ӵ����ȷ���ǣ�" << result << endl;
		}
		// lan.ReadFile();
		cout << endl;
	}
	print(count);   	
	return 0;
}