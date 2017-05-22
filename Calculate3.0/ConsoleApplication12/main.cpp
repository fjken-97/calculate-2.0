#include"calculate.h"
#include"Expression.h"
#include"scan.h"
#include <iostream>
#include <fstream>
#include <time.h>
#include <string>
using namespace std;

char boundary[10][100];

int main(int argc, char *argv[])
{
	srand((unsigned)time(NULL));
	LanguageChoice lang;
	double answer,result;
	char ch;
	int count = 0;
	string Equation;
	Title();
	cout << "    - ";
	cin >> ch;
	memset(boundary, '\0', 100);
	lang.languageset(boundary,ch);
	cout << "******************************************************************************" << endl << endl;
	cout << boundary[0] << endl << endl;
	int n, h = 0;
	cout << "    - ";
	cin >> n; 
	cout << endl;
	cout << boundary[1] << endl << endl;
	Expression exp;
	for (;h < n ; h++)
	{
		cout <<"      The question" << " [ " << h << " ] : " << exp.generateExpression() << " = ";
		result = calculateResult(exp.show());
		cin >> answer;
		cout << endl;
		if(checkanswer(result, answer))
		{
			count++;
			cout << boundary[2] << endl;
		}
		else
		{
			cout << boundary[3] << result << endl;
		}
		cout << endl;
	}
	cout << "******************************************************************************" << endl << endl;
	cout << boundary[4] << count << endl << endl;
	cout << boundary[5] << endl << endl;
	exit(0);
	return 0;
}