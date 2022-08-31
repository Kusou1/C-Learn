#include<stdio.h> 
#include<iostream>
//#include "test.h"
//#include "testA.cpp"

using namespace std;


int g_a = 10;

//全局作用域extern
extern int g_b;
//extern int a;

//int a = 123;

extern int a = 10;//定义
extern int b = 100;

extern int c ;
//extern int c;

void FuncA()
{
	cout << "g_b = " << g_b << endl;
}

int main(void)
{
	//cout << g_b << endl;
	//FuncA();
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;

	return 0;
}

int g_b = g_a;