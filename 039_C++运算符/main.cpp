#include<stdio.h> 
#include<iostream>

using namespace std;

int main(void)
{
	int a = 10;
	int b = 20;

	cout << "a + b = " << a + b << "a - b = " << a - b
		<< "a * b = " << a * b << "a / b = " << a / b 
		<< "a % b = " << a % b << endl;

	//a += 10;
	//a = a + 10;
	//a -= 10;

	//a >>= 2;
	a = a >> 2;

	cout << "a = " << a << endl;

	return 0;
}