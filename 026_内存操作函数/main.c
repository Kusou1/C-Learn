#include<stdio.h> 
#include<string.h>
//#include<iostream>

//using namespace std;//standard

int main01(void)
{
	const char str[50] = "www.google.com";//\0
	char dest[50];

	//\0
	//调用约定  目标，源头，size
	//memcpy(dest, str, strlen(str)+1);

	//memcpy(dest, str+11, 6);
	//逻辑理解
	//F1,帮助
	memcpy(dest, str + 11 * sizeof(char), 6 * sizeof(char));

	dest[6] = '\0';
	printf("dest = %s\n", dest);

	
	return 0;
}

int main02(void)
{
	const char dest[] = "oldstring";//destination
	const char src[] = "newstring";//source
	printf("dest = %s, src = %s\n", dest, src);

	// 移动内存
	memmove(dest, src, 2);

	printf("dest = %s, src = %s\n", dest, src);

	return 0;
}

//dest = oldstring, src = newstring
//dest = newstring, src = newstring
//�밴���������. . .

#pragma warning(disable:4996)

int main(void)
{
	char str[50];

	strcpy(str, "helloworld");

	puts(str);

	//get函数, set函数;
	memset(str, 65, 7);//65
	puts(str);

	return 0;
}
