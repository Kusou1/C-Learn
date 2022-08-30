#include<stdio.h> 
#include<iostream>

using namespace std;

struct A
{
	int data;
};

int main(void)
{
	const A a = { 200 };

	A& a1 = const_cast<A&>(a);
	a1.data = 100;
	cout << "a1.data = " << a1.data << endl;

	A* a2 = const_cast<A*>(&a);
	a2->data = 300;

	cout << "a2.data = " << a2->data << endl;


	const int x = 1;

	int& x1 = const_cast<int&>(x);

	x1 = 2;
	cout << "x1 = " << x1 << endl;

	int* x2 = const_cast<int*>(&x);

	*x2 = 3;
	cout << "*x2 = " << *x2 << endl;

	
	return 0;
}