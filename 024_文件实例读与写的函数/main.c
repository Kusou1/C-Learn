#include<stdio.h>

#pragma warning(disable:4996);

int main(void)
{
	int a[5];
	int b[5];
	FILE* fp;
	fp = fopen("Text.txt", "rb+");

	int size = sizeof(int);

	if (fp == NULL)
	{
		puts("读取失败");
		exit(0);
	}


	for (size_t i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
	}

	fwrite(a, size, 5, fp);

	//重新定位到文件的开头
	rewind(fp);

	fread(b, size, 5, fp);

	for (size_t i = 0; i < 5; i++)
	{
		printf("%d ", b[i]);
	}


	printf("\n");
	fclose(fp);

	return 0;
}