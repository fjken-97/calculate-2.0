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

string equation,answer,Last,result,numerator, denominator,numerators, denominators;

int n,i,j,count=0;

void checkanswer(string res,string ans);

string calculateResult(string infix);


char choise;

void choice()
{

	fstream file;
	
	file.open("out.txt",ios::app);
	
	//file1.close();
	cout<<"******************************************************************************"<<endl<<endl;
	
	file<<"******************************************************************************"<<endl<<endl;
	
	cout<<"      ������ˢ�����𣿸Ͽ춯�����С�֣�����һ�°ɣ�    "<<endl<<endl; 
	
	file<<"      ������ˢ�����𣿸Ͽ춯�����С�֣�����һ�°ɣ�    "<<endl<<endl;
	
	cout<<"******************************************************************************"<<endl<<endl;
	
	file<<"******************************************************************************"<<endl<<endl;
	
	cout<<"[1] - ��ѡ��������Ҫ������ ( Please choose the language that you need ) :"<<endl<<endl;
	
	file<<"[1] - ��ѡ��������Ҫ������ ( Please choose the language that you need ) :"<<endl<<endl;
	
	cout<<"      a.�������� ;  b.Ӣ�� ( a.Simplified Chinese ; b.English ) "<<endl<<endl;          //ʵ��2�����Ե��л�     
	
	file<<"      a.�������� ;  b.Ӣ�� ( a.Simplified Chinese ; b.English ) "<<endl<<endl;    
	
	int i;


	for(i=0;;i++)

	{
		cout<<"    - ";
		
		file<<"    - ";
		
		cin>>choise;
		
		file<<choise;
		
		cout<<endl;

		file<<endl;
		
	    cout<<"******************************************************************************"<<endl<<endl;	
		
		file<<"******************************************************************************"<<endl<<endl;
		
		
		if(choise=='a')

	        {
				cout<<"[2] - ������������Ҫ����Ŀ��(���������'e'���������)��"<<endl<<endl;
				file<<"[2] - ������������Ҫ����Ŀ��(���������'e'���������)��"<<endl<<endl;
				break;
			}

	    else if(choise=='b') 

		    {
				cout<<"[2] - Please enter the number of texts you want(You can enter'e'to end the program):"<<endl<<endl;
				file<<"[2] - Please enter the number of texts you want(You can enter'e'to end the program):"<<endl<<endl;
				break;
			}

		else

		    {
				cout<<"[2] - ���벻����������ѡ��ѡ��/Please select the option again if it is wrong"<<endl<<endl;
				file<<"[2] - ���벻����������ѡ��ѡ��/Please select the option again if it is wrong"<<endl<<endl;
				continue;
			}
		    
	}
	file.close();

}

void scan(int n)
{
	fstream file;
	
	file.open("out.txt",ios::app);
	
	cout<<"    - ";
	
	file<<"    - ";
	
	cout<<endl;
	
	file<<endl;
	
	cout<<"******************************************************************************"<<endl<<endl;	
	
	file<<"******************************************************************************"<<endl<<endl;	
	
	if(choise=='a')
	{
		cout<<"[3] - �������е�ʽ����������Ϊ��ȷ�Ĵ𰸣�"<<endl<<endl;
		
		file<<"[3] - �������е�ʽ����������Ϊ��ȷ�Ĵ𰸣�"<<endl<<endl;
	}
	
	

	else if(choise=='b') 
	{
		cout<<"[3] - Please enter the answer you think after the equation:"<<endl<<endl;
		
		file<<"[3] - Please enter the answer you think after the equation:"<<endl<<endl;
	}
	
	file.close();

}

int randomNumber()
{
	int d;            //d���������

	//srand((unsigned)time(NULL));             //�������������Ĺؼ���ʵ������������� 

	d=rand()%10+1;                       
	
	return d;			//����1~10֮���ĳһ�����

}

string randomOperation()
{
	//srand((unsigned)time(NULL));
	
	int n = rand() % 4 ;

    string sym;

    switch(n)

    {

        case 0: sym='+';break;

        case 1: sym='-';break;

        case 2: sym='*';break;

        case 3: sym='/';break;

    }
	return sym;
}

string Int_str(int n) 			//��int���͵�����ת��Ϊ�ַ���
{         

	char str[100];

	itoa(n,str,10);

	return str;
}

void generateExpression()		//kΪ���ѡȡ��Ŀ���� 
{
  fstream file;
	
  file.open("out.txt",ios::app);
  
  int h=1,i,j;
	
  for(;h<=n;h++)
  {
		
	int number[4];
	
	string sign[4];
	
	string num_1,num_2;
	
	for(i=0;i<=3;i++)
	{
		number[i]=randomNumber();		//���������������
	}
	
	for(j=0;j<=2;j++)
	{
		sign[j]=randomOperation();		//����������������
	} 
	
	equation="";
	
	for(int i=0;i<=2;i++)
	{
		num_1=Int_str(number[i]);
		
		num_2=Int_str(number[i+1]);
		
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
	
	file<<"     The question"<<" [ "<<h<<" ] : "<<equation<<" = ";
	
	cin>>answer;
	
	file<<answer;
	
	cout<<endl;
	
	file<<endl;
	
	file.close();
			
	checkanswer(result,answer);
  }
}


void checkanswer(string res,string ans)
{
	if(Last==ans)  
	
	{
		count++;
	}
	
	//cout<<count; 
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
    fstream file;
	
	file.open(argv[2],ios::app);
    
    Last=Int_str(figure[point]);
    
    cout<<Last;
    
    file<<Last;
    
    file.close();
    
    return Last;
}

void print(int count)
{
	fstream file;
	
	file.open(argv[2],ios::app);
		
	cout<<"******************************************************************************"<<endl<<endl;	
	
	file<<"******************************************************************************"<<endl<<endl;
	
	cout<<"[4] - ����ȷ�ش������Ϊ : "<<count<<endl<<endl;
	
	file<<"[4] - ����ȷ�ش������Ϊ : "<<count<<endl<<endl;

	cout<<"    - �ٽ��������ڴ����´θ��õı��֣�"<<endl<<endl; 
	
	file<<"    - �ٽ��������ڴ����´θ��õı��֣�"<<endl<<endl;
	
	file.close();
	
}

int main(int argc,char *argv[])
{
	srand((unsigned)time(NULL));		
	choice();	
	scan(n);    //�ú����������û���������ȡ��������	 
	generateExpression();   //������������ʽ
    print(count);    //��ͳ�ƽ��������û�	
return 0;

}
