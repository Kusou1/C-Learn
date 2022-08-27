#include<stdio.h> 
#include<iostream>

#define PI 3.1415926
#define LINE_NUMBER '\n'

using namespace std;

int main(void)
{
	int a = 1;
	float b = 3.14f;
	int c = -10;
	int d = 0xFF;
	int e = 3e+8;
	int f = 0b11;
	int g = 012;
	float h = 0.23f;

	char charA = 'A';
	char charB = 'b';

	string strA = "stringA";

	cout << "h = " << h << endl;
	cout << "g = " << g << endl;
	cout << "f = " << f << endl;
	cout << "e = " << e << endl;
	cout << "d = " << d << endl;

	cout << '\n' << "stringTest" << endl;
	cout << '\t' << "helloWorld" << endl;
	cout << '\v' << "test" << endl;
	cout << "\t\btest" << endl;
	cout << "\ftest" << endl;

	cout << '\a' << endl;
	cout << '\\' << '\?' << '\"' << '\'' << endl;
	return 0;
}