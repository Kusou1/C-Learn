#include<stdio.h>

int StaticFunction(int a)
{
	int b = 0;
	static int c = 3;

	b = b + 1;//++
	c = c + 1;


    // static变量可以保持上一次计算的值
	//a = 2, b = 1, c = 4 sum = 7;
	//a = 2  b = 1, c = 5, sum = 8
	//a = 2, b = 1, c = 6, sum = 9;
	return (a + b + c);
}

//5! = 1 * 2 * 3 * 4 * 5;
int Facto(int n)
{
	static int a = 1;
	a = a * n;
	return a;
}


int RegisterVar(int n)
{	
    // 寄存器变量，只能在函数内部使用
    // 寄存器的优势是快
	register int i;
	register int f = 1;

	for (i = 1; i <= n; i++)
	{
		f = f * i;	
	}

	return f;
}
int main(void)
{
	//auto int a = 0;
	//auto a = 0;
	//int a = 0;
	//static x = 0;
	//static int x = 0;
	//printf("a = %d\n", a);
	//printf("x = %d\n", x);

	//=====================static================
	/*int a = 2;
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("%d\n", StaticFunction(a));
	}*/


	//=====================static计算阶乘================

	/*int i;
	for (i = 1; i <= 5; i++)
	{
		printf("%d! = %d\n", i, Facto(i));
	}*/

	//=====================寄存器的变量================

	int i;
	for (i = 1; i <= 5; i++)
	{
		printf("%d! == %d\n", i, RegisterVar(i));
	}
	return 0;
}