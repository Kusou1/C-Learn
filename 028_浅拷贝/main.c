#include <stdio.h>


int main(void)
{
	char myArray[100]; // const char* string
	char *pArray[3]; // 指针数组

	printf("输入三个字符串\n");
	for (size_t i = 0; i < 3; i++)
	{
		scanf("%s", myArray);
		// 直接赋值，指向同一块内存
		pArray[i] = myArray;
	}

	printf("输出的字符串为\n");

	for (size_t i = 0; i < 3; i++)
	{
		printf("%s\n", pArray[i]);
	}

	return 0;
}