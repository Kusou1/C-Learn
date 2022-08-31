#include<stdio.h> 
#include<iostream>

using namespace std;

void FuncName()
{
	return;
}

void FuncName(int x, int y)
{
	return;
}

void FuncName(int x)
{
	return;
}

int myAdd(int x, int y)
{
	return x + y;
}


double myAdd(double x, double y)
{
	return x + y;
}


int myMin(int a, int b)
{
	return a;
}

int myMin(int a, int b, int c)
{
	int t = myMin(a, b);
	return myMin(t, c);
}

//void outputA(int x); 	// 函数声明
//void outputA(float x); 	// 函数声明

// 内联函数，提高函数的执行效率
inline int FuncInline(int a, int b)
{
	return a + b;
}

inline void FuncInlineA();


void* PointerFunc()
{
	return NULL;
}

int* PointerFuncA()
{
	return nullptr;
}

// 指针函数指返回值为指针的函数
float* PointerFuncB()
{
	float* p = NULL;
	return p;
}

double* PointerFuncC()
{
	double a = 10.0;
	double* p = &a;

	return p;
}

int main(void)
{
	

	{
		//outputA(10);
		//outputA(0.5f);     	// 错误！不明确的调用
		//output(int(0.5));   	// 输出整形0
		//output(float(0.5));  	// 输出浮点型0.5
	}

	{
		cout << FuncInline(1, 2) << endl;
	}

	{
		//����ָ��

		int* (*p)();

		p = PointerFuncA;

		double* (*q)();
		//q = PointerFunc;
		//q++;
		//q += 1;
		//q--;
		q = PointerFuncC;

		cout << q() << endl;

		void* (*pVoid)();

	}
	return 0;
}
