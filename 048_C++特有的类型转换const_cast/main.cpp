#include<stdio.h> 
#include<iostream>

using namespace std;

int main(void)
{
	const int a = 10;
	const int* p = &a;

	//*p = 20;
	//const_cast<type_id>(表达式);
	//用于去除指针或引用的常量性。
	int* q;
	q = const_cast<int*>(p);
	*q = 20;

	cout << a << " " << *p << " " << *q << endl;
	cout << &a << " " << p << " " << q << endl;

	return 0;
}