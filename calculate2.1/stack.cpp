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
	
fstream file1;

string Last;

string Int_str(int n) 			//��int���͵�����ת��Ϊ�ַ���
{         

	char str[100];

	itoa(n,str,10);

	return str;
}

void transform(string infix,char postfix[])     //��׺���ʽתΪ��׺���ʽ 
{
    stack <char> sign;
    
	int i=0,j=0;
    
	while (i<infix.size())
    {
      	if ((infix[i]>='0')&&(infix[i]<='9'))      //�ж����� 
        {
            while ((infix[i]>='0')&&(infix[i]<='9'))

            {
                    postfix[j]=infix[i];
                    i++;
                    j++;
            }
            postfix[j]='!'; //��ʶ����������Ϊ�˲�ʹ�����ֻ����޷�һһʶ�� 
            j++;
        }
		if ((infix[i]=='+')||(infix[i]=='-')) //�ж�'+'��'-' 
        {
            
            while (!sign.empty()&&(sign.top()!= '('))
            {

                postfix[j]=sign.top();
                j++;
                sign.pop();
            
            }
            sign.push(infix[i]);

        }
        if (infix[i]=='*'||infix[i]=='/')   //�ж�'*'��'/' 
        {
            
            while ((!sign.empty())&&(sign.top()!= '(')&&((sign.top()=='*')||(sign.top()=='/')))
            {
                postfix[j]=sign.top();
                j++;
                sign.pop();
            }
            sign.push(infix[i]);
        }
	  
		if (infix[i] == '(') 
	
		sign.push(infix[i]); //�ж�'(' 
	
		if (infix[i] == ')') //�ж�')' 

		{

			while (sign.top() != '(')

			{

				postfix[j] = sign.top();

				j++;
	
				sign.pop();

			}

			sign.pop();
		} 
		
		i++;
	}
		
   
    while(!sign.empty())    //ת������ջ��ʣ��������  
    {
        
        postfix[j]=sign.top();
        
		j++;
        
		sign.pop();
    }
    postfix[j]='\0';     //����һ����ֹ�� 
}

int figure[100];  // ��һ����������������ջ 

string calculateResult(string infix)     //�����׺���ʽ��ֵ ���� �������ɵ�����ʽ�Ľ��
{
    int i=0,point=-1;

	char postfix[100];
    
	transform(infix,postfix);
    
	while (postfix[i]!='\0')

    {
    if (postfix[i]>='0'&&postfix[i]<='9') 
    {
            double k=0; 
            while (postfix[i]>='0'&&postfix[i]<='9')
            {

                k=10*k+postfix[i]-'0';

                i++;
            }
            point++;
            
			figure[point]=k;
    }
    else
    {
        point--;
        switch (postfix[i])
        {
            case '+':figure[point]=figure[point]+figure[point+1];break;
            
			case '-':figure[point]=figure[point]-figure[point+1];break;
            
			case '*':figure[point]=figure[point]*figure[point+1];break;
            
			case '/':
			{
				/*if(figure[point]%figure[point+1]!=0)
					while(figure[point]%figure[point+1]!=0)
					{
						figure[point+1]=1;//randomNumber();
					}*/	
				figure[point]=(figure[point]/figure[point+1]);break;
			}	
        }
    }
    
	i++;
    
	}
    
    Last=Int_str(figure[point]);
    
    cout<<Last;
    
    file1<<Last;
    
    return Last;
}
