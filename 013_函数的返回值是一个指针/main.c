#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int* GetNumber()
{
	static int array[10];//C语言不支持调用函数时返回局部变量的地址，所以加一个static

	//seed,库,种子,
	srand((unsigned)time(NULL));
	for (size_t i = 0; i < 10; i++)
	{
		//random
		array[i] = rand();
		printf("%d\n", array[i]);
	}

	return array;
}
int main(int argc, const char* argv[])
{
	int* p;
	//int i;

	p = GetNumber();

	for (size_t i = 0; i < 10; i++)
	{
		// 获取数组的遍历
		printf("*(p + [%zu]) = %d\n", i, *(p+i));
	}
	return 0;
}