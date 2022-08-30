#include<stdio.h> 
#include<iostream>

using namespace std;

int main(void)
{
	/*int i = 0;
	do
	{
		cout << "do while���" << endl;
		cout << "i = " << i << endl;
		i++;
	} while (i != 3);*/

	int a = 0;
	int n;
	cout << "输入一个整数n的值： " << endl;

	//scanf("%d", &n);
	cin >> n;

	do
	{
		//a++;

		//cout << "a = " << a << endl;
		
		cout << "a = " << a * 2 << endl;
		a++;
	} while (--n);

	int b = 10;

	do
	{
		cout << "b的值:" << a << endl;
		a++;
		cout << "b的值:" << a << endl;
	} while (false);


	/*do
	{
		while (true)
		{
			cout << "while(true)" << endl;
		}
	} while (true);*/

	/*do
	

	while (true);*/

	return 0;
}