#include <stdio.h>
#include <iostream> //常用关键字include 文件包括

using namespace std;

extern int A0 = 10;

template <typename T>

// 类C++才有
class A
{
public:
protected:
private:
};

struct B
{
};

enum C
{

};

inline void Func()
{
}

int main(void)
{
	int a = 3;
	double b = 4.0;
	// double double = 10.0;
	float _a = 1.0f;

	if (a < b)
	{
		cout << "a > b " << endl;
	}

	int x = 1;
	float A = 2;
	int _x = 10;
	int a0 = 10;
	int a1 = 100;
	int a2 = 1000;
	int ______a = 100;
	int a_______________________ = 1000;


	//变量的名称最好有一定的含义，不要太长，英文的单词数量一般不超过三个
	int my_first_name = 10;//匈牙利命名法
	int varName = 100;//驼峰命名法
	int VarName = 100;
	int myVarNamemyVarNamemyVarNamemyVarNamemyVarNamemyVarNamemyVarName = 100;

	int A1 = 10;
	int ___ = 100;

	cout << ___ << endl;

	return 0;
}