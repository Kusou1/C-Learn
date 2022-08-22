#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int FindMax(int a, int b)
{
	return a > b ? a : b;
}

//回调函数是通过函数指针调用的函数
//这是一个回调函数
void CallBackFunc(int* array, int size, int (*p)())
{
	for (size_t i = 0; i < size; i++)
	{
		array[i] = p();
	}
	//return;
}


int FindRandomFunc()
{
	/*static int temp = rand();
	printf("%d ", temp);*/

	return rand();
}

int main(void)
{
	//int (*p)(int, int);

	//int (*p)(int, int) = FindMax;

	//int a;
	//int b;
	//int c;
	////int d;

	//printf("请输入三个数字：");
	//scanf("%d %d %d", &a, &b, &c);

	////int d = FindMax(a, b);
	//int d = p(p(a, b), c);

	//printf("最大值为%d\n", d);

	//==============================================
	//回调函数 Java, C#头疼的概念。
	//回调函数是通过函数指针调用的函数。

	int myArray[5];

	CallBackFunc(myArray, 5, FindRandomFunc);

	for (size_t i = 0; i < 5; i++)
	{
		//printf("myArray[%d] = %d\n", i, myArray[i]);
		printf("%d ", myArray[i]);
	}
	
	return 0;
}