#include<stdio.h> 
#include<iostream>

using namespace std;

// 友元函数friend
class A
{
private:
	friend void FuncFriendA()
	{
		cout << "函数A" << endl;
	}

	friend void FuncFriendB();
	friend class B;
};

//friend void FuncFriendC()
//{
//	cout << "��Ԫ����C" << endl;
//}

void FuncFriendB()
{
	cout << "FuncFriendB" << endl;
}

class B
{
public:

};


class Box
{
private:
	float width;
	friend void PrintWidth(Box box);
	friend class BoxA;
public:
	float length;
	void SetWidth(float width);	
};

void Box::SetWidth(float width)
{
	this->width = width;
}

void PrintWidth(Box box)
{
	cout << "盒子宽度" << box.width << endl;
}

class BoxA
{
public:
	void PrintInfo(int width, Box& box)
	{
		box.SetWidth(width);
		cout << "盒子的宽度为:" << box.width << endl;
	}
};


class complex
{
	//自定义的复数类型complex
	double real; //复数实部
	double imag; //复数虚部
public:
	complex(); //无参构造函数
	complex(double r, double i); //参构造函数
	friend complex addCom(complex c1, complex c2);
	friend void outCom(complex c);
	//友元函数，输出complex 类对象c 的有关数据（各分量）
};

int main(void)
{
	Box box;
	box.SetWidth(10.0f);
	PrintWidth(box);

	BoxA boxA;
	boxA.PrintInfo(20, box);

	return 0;
}