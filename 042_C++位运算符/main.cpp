#include<stdio.h> 
#include<iostream>

using namespace std;

/// <summary>
/// 这也是一种注释 C#
/// 
/// 
/// 
/// </summary>
/// <param name=""></param>
/// <returns></returns>

int main(void)
{
	//int a = 60;//0011 1100
	int a = 0b00111100;
	//int b = 13;//0000 1101
	int b = 0b00001101;

	//-----------------------
	int c = 0; //0000 1100
	c = a & b;

	cout << "c = " << c << endl;//12

	c = a | b;
	cout << "c = " << c << endl;

	c = a ^ b;
	cout << "c = " << c << endl;

	c = ~a;
	cout << "c = " << c << endl;

	c = a << 2;
	cout << "c = " << c << endl;

	c = a >> 2;
	cout << "c = " << c << endl;

	return 0;
}