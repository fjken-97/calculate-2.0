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

using namespace std;

string equation,answer,last,result;

char choice;

int n,i,j,count=0;

void checkanswer(string res,string ans);

string calculateResult(string infix);

void choise()
{

	cout<<"******************************************************************************"<<endl<<endl;
	
	cout<<"      今天你刷题了吗？赶快动动你的小手，熟练一下吧！    "<<endl<<endl; 
	
	cout<<"******************************************************************************"<<endl<<endl;
	
	cout<<"[1] - 请选择你所需要的语言 ( Please choose the language that you need ) :"<<endl<<endl;
	
	cout<<"      a.简体中文 ;  b.英文 ( a.Simplified Chinese ; b.English ) "<<endl<<endl;          //实现2种语言的切换     
	
	int i;


	for(i=0;;i++)

	{
		cout<<"    - ";
		
		cin>>choice;
		
		cout<<endl;

	    cout<<"******************************************************************************"<<endl<<endl;	
		
		if(choice=='a')

	        {cout<<"[2] - 请输入你所想要的题目数(你可以输入'e'则结束程序)："<<endl<<endl;break;}

	    else if(choice=='b') 

		    {cout<<"[2] - Please enter the number of texts you want(You can enter'e'to end the program):"<<endl<<endl;break;}

		else

		    {cout<<"[2] - 输入不当，请重新选择选项/Please select the option again if it is wrong"<<endl<<endl;continue;}
		    
	}

}

void scan()
{
	
	choise();
	
	cout<<"    - ";
	
	cin>>n;
	
	cout<<endl;
	
	cout<<"******************************************************************************"<<endl<<endl;	
	
	if(choice=='a')
	
		cout<<"[3] - 请在下列等式后输入你认为正确的答案："<<endl<<endl;

	else if(choice=='b') 

		cout<<"[3] - Please enter the answer you think after the equation:"<<endl<<endl;
		
}

int randomNumber()
{
	int d;            //d代表第数字

	//srand((unsigned)time(NULL));             //这个是随机函数的关键，实现随机生成数字 

	d=rand()%10+1;                       
	
	return d;			//传出1~10之间的某一随机数

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

string int_str(int n) 			//将int类型的数字转换为字符型
{         

	char str[100];

	itoa(n,str,10);

	return str;
}

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
	cout<<"     The question"<<" [ "<<h<<" ] : "<<equation<<" = "; 
	
	cin>>answer;
	
	cout<<endl;
	
	string result = calculateResult(equation);
	
	checkanswer(result,answer);
  }
}

void transform(string infix,char postfix[])     //中缀表达式转为后缀表达式 
{
    stack <char> sign;
    
	int i=0,j=0;
    
	while (i<infix.size())
    {
        if ((infix[i]>='0')&&(infix[i]<='9'))      //判断数字 
        {
            while ((infix[i]>='0')&&(infix[i]<='9'))

            {
                    postfix[j]=infix[i];
                    i++;
                    j++;
            }
            postfix[j]='!'; //标识单个整数，为了不使得数字混排无法一一识别 
            j++;
        }
		if ((infix[i]=='+')||(infix[i]=='-')) //判断'+'、'-' 
        {
            
            while (!sign.empty())
            {

                postfix[j]=sign.top();

                j++;
                sign.pop();
            
            }
            sign.push(infix[i]);

        }
        if (infix[i]=='*'||infix[i]=='/')   //判断'*'、'/' 
        {
            
            while ((!sign.empty())&&((sign.top()=='*')||(sign.top()=='/')))
            {
                postfix[j]=sign.top();
                j++;
                sign.pop();
            }
            sign.push(infix[i]);
        }
        i++;
    }
    if (infix[i] == '(') 
	
		sign.push(infix[i]); //判断'(' 

	if (infix[i] == ')') //判断')' 

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
   
    while(!sign.empty())    //转出符号栈中剩余的运算符  
    {
        
        postfix[j]=sign.top();
        
		j++;
        
		sign.pop();
    }
    postfix[j]='\0';     //补上一个终止符 
}



int figure[100];  // 开一个存放运算操作的数栈 

string calculateResult(string infix)     //计算后缀表达式的值 并且 计算生成的运算式的结果
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
            
			case '/':figure[point]=figure[point]/figure[point+1];break;
        }
    }
    
	i++;
    
	}
    
    last=int_str(figure[point]);
    
    //cout<<last;
    
    return last;
}

void checkanswer(string res,string ans)
{
	if(last==ans)  
	
	{
		count++;
	}
	
	//cout<<count; 
}
void print()
{
		
	cout<<"******************************************************************************"<<endl<<endl;	
	
	cout<<"[4] - 您正确回答的题数为 : "<<count<<endl<<endl;
	
	cout<<"    - 再接再励，期待你下次更好的表现！"<<endl<<endl; 
}

int main()

{
	
	srand((unsigned)time(NULL));
	
	scan();    //该函数用于与用户交互，获取输入数据
	 
	generateExpression();   //用于生成运算式

    print();    //将统计结果输出给用户
    
return 0;

}
