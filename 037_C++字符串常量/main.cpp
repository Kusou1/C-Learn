#include<stdio.h> 
#include<iostream>

using namespace std;

int main(void)
{
	string strA = "";
	string strB = "A";
	string strC = "ABC";
	string strD = "C++";
	string strE = "\tD";

	cout << "strA = " << strA << "strB = " << strB
		<< "strC = " << strC << "strD = " << strD << endl
		<< "strE = " << strE;

	float floatA = 1.25f;//应保持中规中矩的代码风格

	float floatB = 1.5E+05;
	float floatC = 1.8e+13;
	float floatD = 1.5F;
	long int longIntA = 123456789L;
	long int longIntB = 123456789l;

	long double longDoubleA = 12.566370614L;


	cout << "floatB = " << floatB << endl;
	return 0;
}