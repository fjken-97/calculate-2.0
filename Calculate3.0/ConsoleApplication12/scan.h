#pragma once
#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

class LanguageChoice {
	char path[10] = "";
public:
	void languageset(char boundary[10][100], char choice);
};

/*void print(double answer);
char choice();
void Scan(char choise);*/
void Title();