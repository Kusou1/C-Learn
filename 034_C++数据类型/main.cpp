#include<stdio.h> 
#include<iostream>

using namespace std;

int main(void)
{
	bool isBool = true;
	bool hasBool = false;

	char charA = 'A';
	char charB = 'B';

	int intA = 10;
	short int intB = 100;
	long int intC = 10000;
	unsigned int intD = -100;

	float floatA = 1.25f;
	double doubleB = 2.123;
	long double longDoubleC = 1000000000.0;

	// 一个字节占八位,8 bit, 1, 0
	cout << "bool字节的大小:" << sizeof(isBool) << endl;//1字节
	cout << "char字节的大小" << sizeof(charA) << endl;//1字节
	cout << "int字节的大小" << sizeof(intA) << endl;//4字节
	cout << "short int字节的大小" << sizeof(intB) << endl;//2字节
	cout << "long int字节的大小" << sizeof(intC) << endl;//4字节
	cout << "unsigned int字节的大小" << sizeof(intD) << endl;//4


	// 浮点型
	cout << "float字节的大小" << sizeof(floatA) << endl;//4
	cout << "double字节的大小" << sizeof(doubleB) << endl;///8
	cout << "long double字节的大小" << sizeof(longDoubleC) << endl;//8
	cout << sizeof(long double) << endl;//8

	return 0;
}