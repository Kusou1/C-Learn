#include<stdio.h>
//#include<iostream>
//
//using namespace std;

// 1!= 1, 2!= 2 * 1 = 2, 3!= 3 * 2 * 1 = 3 * 2!;
//4! = 4* 3 * 2 * 1 = 4 * 3!,... n! = n * (n-1)!;

long long JieChen(unsigned int i)
{
	if (i <= 1)
	{
		return 1;
	}	
	return i * JieChen(i - 1);
}

//0, 1, 1, 2, 3, 5, 8, 13, 21, 34...,斐波那契数列
long Fib(int i)
{
	if (i == 0)
	{
		return 0;
	}

	if (i == 1)
	{
		return 1;
	}

	return Fib(i - 1) + Fib(i - 2);
}

int main(void)
{
	/*int i = 15;
	long long result = JieChen(i);

	printf("%d的阶乘是%lld\n", i, result);*/

	int i;
	for (size_t i = 0; i < 10; i++)
	{
		printf("%d\n", Fib(i));
	}

	return 0;
}