#include<stdio.h> 
#include<iostream>

using namespace std;

class A
{
public:
	virtual void FuncA()
	{
		cout << "FuncA()" << endl;
	}
};

class B : public A
{
public:
	void FuncB()
	{
		cout << "Func()" << endl;
	}
};


class C : public A
{
	void FuncC()
	{
		return;
	}
};

int Func()
{
	return 1;
}

int main(void)
{
	{
		int a = 1;
		int b = 2;
		//实现C++基本的数据类型转换
		//在编译期内实现其类型转换。
		//static_cast<目标类型>(变量或表达式)
		double c = static_cast<double>(a);
		float d = static_cast<float>(b);
		double doubleA = 1.123456;
		printf("%.17lf\n", doubleA);

		printf("%.100lf\n", c);
		printf("%f\n", d);
		cout << "a = " << a << "字节数 = " << sizeof(a) << endl;
		cout << "b = " << b << "字节数 = " << sizeof(b) << endl;
		cout << "c = " << c << "字节数 = " << sizeof(c) << endl;
		cout << "d = " << d << "字节数 = " << sizeof(d) << endl;


		double PI = 3.1415926;
		int e = static_cast<int>(PI);
		cout << "e = " << e << endl;
	}


	//动物，猫，猫是动物，动物不一定是猫
	A* pA1 = new A;
	A* pA2 = new B;

	B* pB;
	C* pC;

	pB = dynamic_cast<B*>(pA2);//向下转换

	if (pB == NULL)
	{
		cout << "null" << endl;
	}
	else
	{
		cout << "not null" << endl;
	}

	pB = dynamic_cast<B*>(pA1);


	if (pB == NULL)
	{
		cout << "null" << endl;
	}
	else
	{
		cout << "not null" << endl;
	}

	pC = dynamic_cast<C*>(pA1);
	if (pC == NULL)
	{
		cout << "null" << endl;
	}
	else
	{
		cout << "not null" << endl;
	}

	delete(pA1);
	//pA = static_cast<B*>(new A);
	//pB = dynamic_cast<B*>(new A);
	//pB->FuncA();
	//pB->FuncB();

	return 0;
}
