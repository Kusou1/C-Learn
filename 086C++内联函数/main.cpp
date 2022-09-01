#include<stdio.h> 
#include<iostream>

using namespace std;

class A
{
public:
	inline int FuncClassA(int a, int b)
	{
		return a + b;
	}

public:
	int FuncClassB(int a, int b)//默认的就是内联函数
	{
		return a * b;
	}

};

struct Birthday
{
	int year;
	int month;
	int day;
};

class B
{
public:
	const static int a = 10;
	static int b;

	const int c = 100;
	//c = 100;
	const Birthday birthday = { 2000, 10, 12 };
	
	static void FuncClassB()
	{
		cout << "FuncClassB静态函数" << endl;

		return;
	}

	static int personCount;

	static int GetPersonCount()
	{
		personCount = 100;
		return personCount;
	}

	void FuncA()
	{
		cout << "FuncA函数" << endl;
		return;
	}

	static void TestFuncStatic()
	{
		//this.
		return;
	}

	Birthday FuncConst()const
	{
		//birthday.year = 2000;

		return birthday;
	}

	Birthday FuncConstA() const;

};

int B::b = 100;

Birthday B::FuncConstA() const
{
	return birthday;
}

inline void FuncInline()
{
	for (size_t i = 0; i < 10; i++)
	{
		for (size_t i = 0; i < 5; i++)
		{

		}

	}
	return;
}

int main(void)
{
	B b;
	b.FuncA();
	b.FuncClassB();
	B::FuncClassB();
	//B::FuncA();

	return 0;
}
