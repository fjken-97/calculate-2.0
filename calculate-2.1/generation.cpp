#include"calculate.h"
//#include "language.h"
#include <iostream>
#include <time.h>
#include <cstdlib>
#include <cstring>
#include <stack>
#include <map> 
#include <fstream>
#include <vector>
#include <stdlib.h>
#include<sstream>

using namespace std;

void generateExpression()		//k为随机选取题目类型 
{
  int h=1,i,j;
	
  for(;h<=n;h++)
  {
		
	int number[4];
	
	string sign[4];
	
	string num_1,num_2;
	
	for(i=0;i<=3;i++)
	{
		number[i]=randomNumber();		//用于随机生成数字
	}
	
	for(j=0;j<=2;j++)
	{
		sign[j]=randomOperation();		//用于随机生成运算符
	} 
	
	equation="";
	
	for(int i=0;i<=2;i++)
	{
		num_1=int_str(number[i]);
		
		num_2=int_str(number[i+1]);
		
		int temp=rand()%2+1;
		
		//cout<<temp;
		
		switch(temp)
	    {
	
		case 1:
		{
			if(i==0)
			{
				equation=num_1+sign[i]+num_2;
			}
			else
			{
				equation=equation+sign[i]+num_1;	
			}
			break;
		}
		case 2:
		{
			if(i==0)
			{
				equation="("+num_1+sign[i]+num_2+")";
			}
			else
			{
				equation="("+equation+sign[i]+num_1+")";
			}
			break;
		}
	    }
	}
	string result = calculateResult(equation);
	
	cout<<"     The question"<<" [ "<<h<<" ] : "<<equation<<" = "; 
	
	cin>>answer;
	
	cout<<endl;
			
	checkanswer(result,answer);
  }
}


void checkanswer(string res,string ans)
{
	if(last==ans)  
	
	{
		count++;
	}
	
	//cout<<count; 
}


