#include<stdio.h> 
#include<iostream>

using namespace std;

int main(void)
{
	//expression

	/*int a = 5;
	int b = a < 3 ? 3 : a;
	cout << "b = " << b << endl;*/

	//int a = 2, b = 4, c = 6, x, y;
	int a = 2;//每一种变量都可以写注释，便于代码的阅读
	int b = 4;
	int c = 6;
	int x;
	int y;

	y = ((x = a + b), (b + c));//逗号表达式，不建议使用，可读性差
	printf("y = %d,x = %d\n", y, x);//10, 6



	return 0;
}