#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#pragma warning(disable:4996)

int main(void)
{
	char charArray[100];
	char* charP;

	strcpy(charArray, "charArray");
	//memory, allocation,内存分配
	//内存，分配
	charP = (char*)malloc(500 * sizeof(char));

	if (charP == NULL)
	{
		printf("没有分配到相应的内存");
	}
	else
	{
		strcpy(charP, "成功分配了动态内存。");
	}

	printf("charArray = %s\n", charArray);
	printf("charP = %s\n", charP);
	
	// re,allocation 重新分配
	charP = (char*)realloc(charP, 200 * sizeof(char));

	if (charP == NULL)
	{
		printf("分配内存失败");
	}
	else
	{
		strcat(charP, "内存分配成功。");
	}


	printf("charArray = %s\n", charArray);
	printf("charP = %s\n", charP);

	//pointer 任意类型的指针
	free(charP);

	return 0;
}