#include<stdio.h> 
#include<iostream>

using namespace std;

int main(void)
{
	{
		//const int* a = NULL;
		const int a = 10;
		//int const a = 10;
		//a = 100;

		const int* p = NULL;//指向常量
		int* const q = NULL;//指针本身是个常量


		int A = 3;
		int B = 5;
		int* const pInt = &A;//指针常量的情况
		*pInt = 10;			//错误，无法ָ改变内容
		//pInt = &B;		//正确，可以改变指向

	}

	{
		char strText[32] = "heed";
		const char* const strName = strText;//信逻辑，常量指针

		//strName = strName + 2;		//错误，无法修改指向
		//*strName = 'n';		//正确，可以修改
		//*(strName + 2) = 'r';		//正确


		//const int* const A = 
	}
	return 0;
}