#include<stdio.h> 
#include<iostream>

using namespace std;


// 打印三角形
int main(void)
{

	for (int i = 1; i < 10; i++)//
	{
		for (int j = 1; j <= 10-i; j++)//2, + 1
		{
			cout << "^";
		}

		for (int k = 1; k <= 2 * i - 1 ; k++)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}