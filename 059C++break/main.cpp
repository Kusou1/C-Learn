#include<stdio.h> 
#include<iostream>

using namespace std;

int main(void)
{
	int n;
	int i;

	for (n = 2; n <= 5; n++)
	{
		for (i = 2; i < n; i++)
		{
			if (n % i == 0)
			{
				break;//跳出最近的循环
			}		
		}

		if (i >= n)
		{
			cout << "n = " << n << endl;
		}
	}

	int a = 10;

	do
	{
		cout << "a��ֵ = " << a << endl;
		//a = a + 1;
		a++;
		//a += 1;

		if (a > 15)
		{
			break;
		}
	} while (a < 20);
	return 0;
}