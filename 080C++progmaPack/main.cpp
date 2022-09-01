#include <stdio.h>
#include <iostream>

using namespace std;

__declspec(align(32)) struct StructA
{
	int a; // 4
	int b;
	int c;
	int d;
	int e;
	/*int a, b, c, d, e;*/
};

#pragma pack(4)
struct StructB
{
	char a;
	short sh; // 4
	int c;	  // 4
	float f;  // 4
	int *p;	  // 4
	char *s;  // 4
	double d; // 8
};

//通信
int main(void)
{
	cout << "StructA = " << sizeof(StructA) << endl;
	cout << "StructB = " << sizeof(StructB) << endl;

	return 0;
}
