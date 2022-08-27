#include<stdio.h> 
#include<iostream>

using namespace std;

class A
{

};

int varE;

//常：健康
//变：生病
int main(void)
{
	const int a = 100;//constant常量

	//a = 100;

	const float b = 10.0f;
	const double c = 1.5;
	const string str = "C++";
	const A classA;

	int variableA = 10;//variable变量
	int varA = 20, varB = 10;
	cout << "varA = " << varA << "varB = " << varB << endl;

	int varC = 100;
	int varD = 100;

	varE = 1;

	return 0;
}