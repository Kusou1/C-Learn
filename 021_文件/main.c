#include<stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	// FILE* fileP;

	// fileP = fopen("test.txt", "w+");

	// fprintf(fileP, "这是一个测试文本文件。\n");
	// fputs("这是一个测试类的文件", fileP);

	// fclose(fileP);


	FILE* fp = NULL;
	char charBuffer[255];

	fp = fopen("./test.txt", "r");

	// 从文件中读取字符串，如果遇到第一空格和换行符时，就会停止读取
	fscanf(fp,"%s", charBuffer);
	printf("1:%s\n", charBuffer);

	//从文件指针中读取n-1个字符
	fgets(charBuffer, 255, fp);
	printf("2:%s\n", charBuffer);

	fgets(charBuffer, 255, fp);
	printf("3:%s\n", charBuffer);

	fclose(fp);
	return 0;
}