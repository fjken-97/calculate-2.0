#pragma once
#include"Expression.h"
#include<iostream>
#include<stack>
using namespace std;

void transform(string infix, char postfix[]); 
double calculateResult(string infix);    //�����׺���ʽ��ֵ ���� �������ɵ�����ʽ�Ľ��
bool checkanswer(int res, int ans);