#pragma once
#include<iostream>
#include<cstdlib>
using namespace std;

class Expression {
	string num_1, num_2;
	string equation;
	double result;
public:
	void set(int);
	string generateExpression();
	string Int_str(int);
	int number;
	string Result();
	void Res_set(double);
	string show();
};

double calculateResult(string);

class Random
{
public:
	virtual int random() = 0;
	virtual ~Random() {};
};

class RandomNumber :public Random
{
public:
	int random();
	RandomNumber() {}
};

class RandomOperation :public Random
{
public:
	int random();
	RandomOperation() {}
};

class RandomFactory
{
public:
	Random *creatRandom(const string &name)
	{
		if(name=="Randomnum")
		{
			return new RandomNumber;
		}
		if(name=="RandomOpe")
		{
			return new RandomOperation;
		}
	}
};



/*
class Expression{
string num_1, num_2;
string equation;
double result;
public:
void set(int);
int randomNumber();
char randomOperation();
string generateExpression();
string Int_str(int);
int number;
string Result();
void Res_set(double);
string show();
};

double calculateResult(string);
*/