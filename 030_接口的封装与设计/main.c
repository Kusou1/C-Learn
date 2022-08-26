#include<stdio.h> 
//#include<iostream>

//using namespace std;

// 调用动态库
// #pragma comment(lib, "libMath.dylib")
int Add(int a, int b);
int Sub(int a, int b);
int Multi(int a, int b);
int Div(int a, int b);

int main(void)
{
	printf("调用dll相加函数%d\n", Add(1, 2));
	printf("调用dll相减函数%d\n", Sub(1, 2));
	printf("调用dll相乘函数%d\n", Multi(1, 2));
	printf("调用dll除法函数%d\n", Div(2, 1));
	return 0;
}