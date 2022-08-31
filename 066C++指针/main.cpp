#include<stdio.h> 
#include<iostream>

using namespace std;

void FuncName(int x, int y)
{
	return;
}

int main(void)
{
	//int a, * pa;
	//int a;
	//int* pa;

	//pa = &a; 	/*把整型变量a的地址赋予整型指针变量pa*/


	//int a, * pa = &a, * pb;

	//int a;
	//int* pa = &a;
	//int* pb;

	//pb = pa; 	/*把a的地址赋予指针变量pb*/


	//int a[5], * pa;
	int a[5];
	int* pa;
	pa = a; 	    /*数组名表示 数组的首地址ַ*/
	pa = &a[0]; 	/*数组第一个元素的地址赋予pa*/
	//int a[5], * pa = a;

	float floatArray[100];
	void* voidP;

	voidP = floatArray;
	voidP = &floatArray[99];

	const char* str = "string";
	const char* strA = "string";

	void (*FuncP)(int a, int b);

	FuncP = FuncName;

	return 0;
}