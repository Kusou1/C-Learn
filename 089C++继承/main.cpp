#include<stdio.h> 
#include<iostream>

using namespace std;

class A
{
public:
	A();
	~A();

	int a = 10;
	void FuncA()
	{
		cout << "FuncA函数" << endl;
	}
private:
	void FuncPrivateA()
	{
		cout << "FuncPrivateA函数" << endl;
	}
};

A::A()
{
	cout << "A��Ĺ��캯��" << endl;
}

A::~A()
{
	cout << "A" << endl;
}


class C {};
class B : public A, public C
{
public:
	B();
	~B();

	void FuncB()
	{
		cout << "FuncB" << endl;
	}
private:

};

B::B()
{
	cout << "B��Ĺ��캯��" << endl;
}

B::~B()
{
	cout << "B��Ĺ��캯��" << endl;
}

class Animal
{

};

class Cat : public Animal
{

};

class CoffenCat : public Cat
{

};

class D : protected A//private
{

};

int main(void)
{
	B b;
	b.a = 100;
	b.A::a = 1000;

	cout << "b.a = " << b.a << endl;

	b.FuncA();
	b.FuncB();
	//b.~A();
	//b.~B();


	return 0;
}