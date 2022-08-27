#include<stdio.h> 
#include<iostream>

using namespace std;

int main(void)
{
	int a = -10;
	unsigned int b = 10;
	long int c = 10000000;
	long int c1 = 1e+07;
	long double d = 10000000.0;
	long double e = 1e+07;//exponent指数
	long double f = 1e-07;
	long double g = 0.0000001;

	signed char charA = 'A';
	char charB = 'B';
	unsigned char charC = '-1';
	string str = "-1";

	cout << "str = " << str << endl;
	
	cout << "charC = " << charC << endl;//1
	

	bool isBool = true;

	cout << "charA = " << charA << endl;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	cout << "c1 = " << c1 << endl;
	cout << "d = " << d << endl;
	cout << "e = " << e << endl;
	cout << "f = " << f << endl;
	cout << "g = " << g << endl;

	


	return 0;
}