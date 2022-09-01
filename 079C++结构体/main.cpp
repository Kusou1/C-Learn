#include<stdio.h> 
#include<iostream>

using namespace std;

struct StructA
{
	char a;
	short b;
	char c;
};

struct StructB
{
	char a;
	char b;
	short c;
};

struct
{
	char a;
	short b;
	double d;
}S1;

struct
{
	char a;//8, a = 2, b = 2, c = 4
	short b;
	char c;
	int intA; //4, 8
	double d;//8
}S2;

int main(void)
{
	cout << "StructA = " << sizeof(StructA) << endl;
	cout << "StructB = " << sizeof(StructB) << endl;
	cout << "S1 = " << sizeof(S1) << endl;
	cout << "S2 = " << sizeof(S2) << endl;
	

	return 0;
}