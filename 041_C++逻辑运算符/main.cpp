#include<stdio.h> 
#include<iostream>

using namespace std;

int main(void)
{
	int a = false;
	int b = false;

	cout << "a = " << a << "b = " << b << endl;

	if (a && b)
	{
		cout << "&&与的结果为真" << endl;
	}

	if (a || b)
	{
		cout << "||或的结果为真" << endl;
	}

	if ((!a) && b)
	{
		cout << "!非的结果为真" << endl;
	}

	int c = 20;
	int d = 20;

	if (c == d)
	{
		cout << "c == d" << endl;
	}

	if (c != d)
	{
		cout << "c != d" << endl;
	}

	if (c >= d)
	{
		cout << "c >= d" << endl;
	}

	if (c <= d)
	{
		cout << "c <= d " << endl;
	}

	return 0;
}