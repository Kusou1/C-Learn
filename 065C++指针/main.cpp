#include<stdio.h> 
#include<iostream>

using namespace std;

struct A
{

};

class B
{

};


int main(void)
{
	int* p1 = NULL;

	cout << "p1 = " << p1 << endl;
	float* p2 = nullptr;

	cout << "p2 = " << p2 << endl;

	double* p3 = NULL;
	cout << "p3 = " << p3 << endl;

	A* p4;
	B* p5;

	void* p6;

	int a = 10;
	int* ip1, ip2;	 //声明了1个指针变量ip1和一个普通变量ip2 

	ip1 = &a;
	//ip2 = &a;

	/*int* ip1;
	int ip2;*/

	int* ip3, * ip4;	//声明了指针变量ip3,ip4都是整型指针


	//void *pA, *pB;
	void* pA;
	void* pB;

	return 0;
}