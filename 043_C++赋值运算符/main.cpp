#include<stdio.h> 
#include<iostream>

using namespace std;

int main(void)
{
	int a = 10;
	int b = 20;
	int c;
	c = a;

	cout << "c = " << c << endl;

	c += a;//c = c + a;
	cout << "c = " << c << endl;

	c -= a;
	cout << "c = " << c << endl;

	c *= a;
	cout << "c = " << c << endl;

	c /= a;
	cout << "c = " << c << endl;

	c = 200;

	/*c %= a;
	cout << "c = " << c << endl;*/

	c <<= 2;//c = c << 2;
	cout << "c = " << c << endl;

	c >>= 2;
	cout << "c = " << c << endl;

	c = 0b11;//
	//  0010
	//-----------
	//  0001
	//c ^= 2;//c = c ^ 2;
	//cout << "c = " << c << endl;
	//    0011
	c |= 2;
	cout << "c = " << c << endl;
	return 0;
}