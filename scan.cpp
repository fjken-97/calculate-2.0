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
	
	cout<<"      今天你刷题了吗？赶快动动你的小手，熟练一下吧！    "<<endl<<endl; 
	
	file1<<"      今天你刷题了吗？赶快动动你的小手，熟练一下吧！    "<<endl<<endl;
	
	cout<<"******************************************************************************"<<endl<<endl;
	
	file1<<"******************************************************************************"<<endl<<endl;
	
	cout<<"[1] - 请选择你所需要的语言 ( Please choose the language that you need ) :"<<endl<<endl;
	
	file1<<"[1] - 请选择你所需要的语言 ( Please choose the language that you need ) :"<<endl<<endl;
	
	cout<<"      a.简体中文 ;  b.英文 ( a.Simplified Chinese ; b.English ) "<<endl<<endl;          //实现2种语言的切换     
	
	file1<<"      a.简体中文 ;  b.英文 ( a.Simplified Chinese ; b.English ) "<<endl<<endl;    
	
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
				cout<<"[2] - 请输入你所想要的题目数(你可以输入'e'则结束程序)："<<endl<<endl;
				file1<<"[2] - 请输入你所想要的题目数(你可以输入'e'则结束程序)："<<endl<<endl;
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
				cout<<"[2] - 输入不当，请重新选择选项/Please select the option again if it is wrong"<<endl<<endl;
				file1<<"[2] - 输入不当，请重新选择选项/Please select the option again if it is wrong"<<endl<<endl;
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
		cout<<"[3] - 请在下列等式后输入你认为正确的答案："<<endl<<endl;
		
		file1<<"[3] - 请在下列等式后输入你认为正确的答案："<<endl<<endl;
	}
	
	

	else if(choise=='b') 
	{
		cout<<"[3] - Please enter the answer you think after the equation:"<<endl<<endl;
		
		file1<<"[3] - Please enter the answer you think after the equation:"<<endl<<endl;
	}
		
}
