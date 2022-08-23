#include<stdio.h>
#include<string.h>
#pragma warning(disable : 4996)
// 定义无符号类型的整数
typedef unsigned char BYTE;
// 定义类型
typedef int INT;

struct Bit
{
	unsigned int isTrue : 1;//ֻ只用2位来存储值
	unsigned int isFalse : 1;
};

struct  StructAge
{
	unsigned int age : 3;//2 10 4 100, 8 1000
};


typedef struct Books
{
	char title[30];
	char bookName[50];
	char author[20];
	int bookID;
}BOOK;

int main(void)
{
	//struct Bit bit;
	//struct StructAge structAge;
	//structAge.age = 4;
	//printf("%d\n", sizeof(structAge));
	//printf("%d\n", structAge.age);

	//structAge.age = 8;

	//printf("%d\n", structAge.age); //0

	////printf("%d\n", sizeof(bit));//占四个字节

	//BYTE B1, B2;
	//INT a, b;


	BOOK book;

	strcpy(book.title, "C语言");
	strcpy(book.author, "Dennis");
	strcpy(book.bookName, "C语言程序设计");
	book.bookID = 12345;
	printf("%s\n", book.title);

	return 0;
}