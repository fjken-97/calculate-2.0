/************************************************************
FileName: main.cpp          Author: �����
Version : 1.0               Date: 2017/4/27
Function List:  calculate��������ʵ��Բ����ļ���             
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
		cout << "����������Ҫ��Բ�뾶 r =  ";
		cin >> r;
		while ( cin.fail() || r < 0 )
		{
			cout << endl;
			cout << "����������������������������Ҫ�İ뾶ֵ"<<endl;
			cin.clear();       //�ָ�ԭʼ״̬
			cin.sync();
			cout << r<<endl;
			//fflush(stdin);
			//cin.ignore( numeric_limits<streamsize>::max(), '\n');       //������뻺����
			cout << "����������Ҫ��Բ�뾶 r =  ";
			cin >> r;
			cout << endl;
		}	
		cin.clear();        //Ϊ�˱�������ȷ������ֵ�Ժ󸽴��ϲ���Ҫ�ķǷ����룬����"12DB"����ʱ��ִ�ж���12���DB������
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		S = calculate(r);
		cout << endl;
		cout << "������İ뾶����Ӧ��Բ��� S =  ";
		cout << S <<endl<<endl;
		cout << "*******************************************************************************"<<endl;
		cout << "�Ƿ��������Բ�뾶����Բ�����Y/N��: ";
		cin >> choice;
		while ( cin.fail() || choice != 'Y' && choice != 'N')
		{
			cout << endl;
			cout << "������������������(Y/N) : ";
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