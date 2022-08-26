#include<stdio.h>

int main(void)
{
	char myArray[10];//char* myArray;
	char* pArray[3];

	printf("输入三个字符串\n");
	for (size_t i = 0; i < 3; i++)
	{
		scanf("%s", myArray);
		// strlen字符串长度
		// 先给pArray分配对应大小的内存空间
		pArray[i] = (char*)malloc((strlen(myArray) +1) * sizeof(char));//length
		// 字符串拷贝，这是深拷贝
		strcpy(pArray[i], myArray);
	}

	printf("输出的字符串为\n");
	for (size_t i = 0; i < 3; i++)
	{
		printf("%s\n", pArray[i]);
	}

	// 分配的内存要记得释放
	for (size_t i = 0; i < 3; i++)
	{
		free(pArray[i]);//释放指针指向的数据
		pArray[i] = NULL;//释放指针本身

		// 如果pArray不为Null，输出他的地址
		if (pArray[i] != NULL)
		{
			printf("%p\n", pArray[i]);
		}
		else
		{
			printf("%p\n", pArray[i]);
		}
	}

	return 0;
}