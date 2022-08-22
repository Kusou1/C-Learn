#include<stdio.h>

#define max 3
//const int max = 3;
int main(int argc, char* argv[])
{
	
	int array[] = { 1, 2, 3 };
	int i;
	int* p[max];//ָ指针数组的定义

	/*for (size_t i = 0; i < max; i++)
	{
		printf("array[%d] = %d\n", i, array[i]);
	}*/

	for (size_t i = 0; i < max; i++)
	{
		p[i] = &array[i]; //ָ指针数组的赋值，指针数组的每个元素指向数组的每个元素的地址
	}

	for (size_t i = 0; i < max; i++)
	{
		printf("array[%zu] = %d\n", i, *p[i]);
	}

	
	//const char*表示的是字符串，string, C++, Java, C#
	const char* names[] = { "A", "B", "C" };//字符串数组
	//char* const Names[] = { "a", "b", "c" };

	//string names[] = {""};
	for (size_t i = 0; i < max; i++)
	{
		printf("名字的值为names[%zu] = %s\n", i, names[i]);
	}

	return 0;
}