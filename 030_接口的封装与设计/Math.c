#include <stdio.h>
#define PI 3.1415926

//将常用的代码封装生成dll和lib文件，重复使用，节省劳动量

// 封装数学库
float GetCircleArea(float r)
{
	return PI * r * r; //获取圆面积
}
int Add(int a, int b);
int Sub(int a, int b);
int Multi(int a, int b);
int Div(int a, int b);

// 声明dll动态连接库
//扩展特性dll
__declspec(dllexport) int Add(int a, int b)
{
	return a + b;
}

__declspec(dllexport) int Sub(int a, int b)
{
	return a - b;
}

__declspec(dllexport) int Multi(int a, int b)
{
	return a * b;
}

__declspec(dllexport) int Div(int a, int b)
{
	if (b != 0)
	{
		return a / b;
	}
	else
	{
		printf("被除数不能为0");
	}
}

int main(void)
{
	return 0;
}