#include<stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	//FILE* fp;
	//char myChar;

	//if ((fp = fopen("Text.txt", "rt")) == NULL)
	//{
	//	puts("文件读取失败。");
	//	exit(0);
	//}

	////每次读取一个字节，直到读取到结尾
	//while ((myChar = fgetc(fp)) != EOF)
	//{
	//	putchar(myChar);
	//}

	//putchar('\n');

	//fclose(fp);

	//==========================================

	FILE* fp;
	char ch;
	fp = fopen("Text.txt", "rt");

	if (fp == NULL)
	{
		puts("文件读取失败");
		exit(0);
	}

	while ((ch = fgetc(fp)) != EOF)
	{
		putchar(ch);
	}

	putchar('\n');

	if (ferror(fp))
	{
		puts("读取出错");
	}
	else
	{
		puts("读取成功");
	}

	fclose(fp);

	return 0;
}