#include"calculate.h"

#include <iostream>
#include <fstream>
using namespace std;

fstream file1;

char choise;

void choice()
{

	cout<<"******************************************************************************"<<endl<<endl;
	
	file1<<"******************************************************************************"<<endl<<endl;
	
	cout<<"      ������ˢ�����𣿸Ͽ춯�����С�֣�����һ�°ɣ�    "<<endl<<endl; 
	
	file1<<"      ������ˢ�����𣿸Ͽ춯�����С�֣�����һ�°ɣ�    "<<endl<<endl;
	
	cout<<"******************************************************************************"<<endl<<endl;
	
	file1<<"******************************************************************************"<<endl<<endl;
	
	cout<<"[1] - ��ѡ��������Ҫ������ ( Please choose the language that you need ) :"<<endl<<endl;
	
	file1<<"[1] - ��ѡ��������Ҫ������ ( Please choose the language that you need ) :"<<endl<<endl;
	
	cout<<"      a.�������� ;  b.Ӣ�� ( a.Simplified Chinese ; b.English ) "<<endl<<endl;          //ʵ��2�����Ե��л�     
	
	file1<<"      a.�������� ;  b.Ӣ�� ( a.Simplified Chinese ; b.English ) "<<endl<<endl;    
	
	int i;


	for(i=0;;i++)

	{
		cout<<"    - ";
		
		file1<<"    - ";
		
		cin>>choise;
		
		file1<<choise;
		
		cout<<endl;

		file1<<endl;
		
	    cout<<"******************************************************************************"<<endl<<endl;	
		
		file1<<"******************************************************************************"<<endl<<endl;
		
		
		if(choise=='a')

	        {
				cout<<"[2] - ������������Ҫ����Ŀ��(���������'e'���������)��"<<endl<<endl;
				file1<<"[2] - ������������Ҫ����Ŀ��(���������'e'���������)��"<<endl<<endl;
				break;
			}

	    else if(choise=='b') 

		    {
				cout<<"[2] - Please enter the number of texts you want(You can enter'e'to end the program):"<<endl<<endl;
				file1<<"[2] - Please enter the number of texts you want(You can enter'e'to end the program):"<<endl<<endl;
				break;
			}

		else

		    {
				cout<<"[2] - ���벻����������ѡ��ѡ��/Please select the option again if it is wrong"<<endl<<endl;
				file1<<"[2] - ���벻����������ѡ��ѡ��/Please select the option again if it is wrong"<<endl<<endl;
				continue;
			}
		    
	}

}

void scan(int n)
{
	
	cout<<"    - ";
	
	file1<<"    - ";
	
	cout<<endl;
	
	file1<<endl;
	
	cout<<"******************************************************************************"<<endl<<endl;	
	
	file1<<"******************************************************************************"<<endl<<endl;	
	
	if(choise=='a')
	{
		cout<<"[3] - �������е�ʽ����������Ϊ��ȷ�Ĵ𰸣�"<<endl<<endl;
		
		file1<<"[3] - �������е�ʽ����������Ϊ��ȷ�Ĵ𰸣�"<<endl<<endl;
	}
	
	

	else if(choise=='b') 
	{
		cout<<"[3] - Please enter the answer you think after the equation:"<<endl<<endl;
		
		file1<<"[3] - Please enter the answer you think after the equation:"<<endl<<endl;
	}
		
}
