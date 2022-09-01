#include<stdio.h> 
#include<iostream>

using namespace std;

class Address
{
public:
	long teleNum;
	//char addr[30];
	string addr;
};

class Person
{
public:
	//const char* name;
	string name = " ";
	int age = 0;
	Address address = {1234567, "string"};

	Person()
	{ }

	//Person(string name, int age, Address addr)
	//{
	//	this->name = name;
	//	this->age = age;
	//	this->address = addr;
	//}

	// 构造函数，函数名与类名相同
	Person(string name, int age, Address addr) : name(name), age(age), address(addr)
	{

	}
	void InitFunc()
	{
		age = 10;
		name = { "张三" };
		//address = {12345678911, "泉州"};
		address.addr = "泉州";
		address.teleNum = 123456789;
	}

	/*~Person()
	{

	}*/

	//析构函数
	~Person()
	{
		cout << "我是Person的析构函数" << endl;
	}

	
};

class Point
{
public:
	/*Point(int x, int y) : x(x), y(y)
	{

	}*/

	/*Point(int x, int y)
	{
		this->x = x;
		this->y = y;
	}*/

	Point(int a, int b)
	{
		x = a;
		y = b;
	}

	Point(const Point& p)
	{
		x = p.x;
		y = p.y;
	}

	int GetX()
	{
		return x;
	}

	int GetY()
	{
		return y;
	}

	void FuncA(Point p)
	{
		cout << p.GetX() << endl;
		cout << p.GetY() << endl;
	}

	Point FuncB()
	{
		Point A(1, 2);
		return A;
	}
private:
	int x;
	int y;
};
int main(void)
{
	//Person person = { "张三", 10, {13812345678, "广州"}};

	Person* person = new Person("abc", 10, { 1234567, "string" });

	//触发析构函数
	delete person;

	return 0;
}