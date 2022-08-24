#include<stdio.h>
#include<string.h>

#pragma warning(disable : 4996)
int main()
{
	/*FILE* fp;

	char str[100];

	fp = fopen("Text.txt", "rt");

	if (fp == NULL)
	{
		puts("文件读取失败");
		exit(0);
	}

	while (fgets(str, 100, fp) != NULL)
	{
		printf("%s", str);
	}

	fclose(fp);*/

	FILE* fp;

	char str[200] = { 0 };
	char temp[100];
	fp = fopen("Text.txt", "at+");
	if (fp == NULL)
	{
		puts("文件读取失败");
		exit(0);
	}

	printf("请输入一个字符串:");

	gets(temp);

	strcat(str, temp);

	fputs(str, fp);

	fclose(fp);

	return 0;
}