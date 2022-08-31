#include<stdio.h> 
#include<iostream>

using namespace std;

int main(void)
{
	{
		//int x;
		//int& refx = x;

		//int a = 10;
		//int& b = a;//b是a引用

		//cout << "b = " << b << endl;

	}

	{
		/*int x, y = 36;
		int& refx = x, & refy = y;
		refx = 12;*/

		int x;
		int y = 20;
		int& refx = x;
		int& refy = y;
		refx = 10;

		cout << "x=" << x << "  refx=" << refx << endl;
		cout << "y=" << y << "  refy=" << refy << endl;
		refx = y;
		cout << "x=" << x << "  refx=" << refx << endl;
	}

	{
		const int x = 10;

		const int& a = x;

	}


	return 0;
}