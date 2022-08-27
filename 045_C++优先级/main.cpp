#include<stdio.h> 
#include<iostream>

using namespace std;

int main(void)
{
	int x = 10;
	int y = 20;
	int z = 30;

	//x = y = z;
	y = z;
	x = y;


	cout << "y = " << y << "x = " << x << "z = " << z;


	int intA = 10;//低精度
	float floatB = 20.51321313f;//高精度
	//intA = floatB;
	//cout << "intA = " << intA << endl;
	//floatB = intA;//强制类型转换

	//cout << "floatB = " << floatB << endl;

	int intB = (int)(floatB + intA);
	cout << "intB = " << intB << endl;
	return 0;
}