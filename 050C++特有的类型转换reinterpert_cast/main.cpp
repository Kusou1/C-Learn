#include<stdio.h> 
#include<iostream>

using namespace std;

//reinterpret_cast, interpret解释的意思，reinterpret重新解释的意思。
//reinterpret_cast数据的二进制形式重新解释，但是不改变其值。
//常称为：重新解释类型转换。
//reinterpret_cast<type_id>（表达式）

//用途：
//1,改变指针或引用的类型
//2，将指针或引用转换为一个足够长的整形。
//3.将整形转换为指针或引用类型。

class Animal
{
public:
	virtual void Cry() = 0;

};

class Dog : public Animal
{
public:
	virtual void Cry()
	{
		cout << "小狗叫" << endl;
	}

	void DogAct()
	{
		cout << "看家" << endl;
	}
};

class Cat : public Animal
{
public:
	virtual void Cry()
	{
		cout << "小猫叫" << endl;
	}

	void CatAct()
	{
		cout << "抓老鼠" << endl;
	}
};

class Book
{
public:
	void PrintInfo()
	{
		cout << "bookInfo" << endl;
	}
};

int main(void)
{
	//reinterpret_cast

	/*int* a = new int(10);

	float* p = reinterpret_cast<float*>(a);*/


	Animal* animal = NULL;

	Dog* pDog = static_cast<Dog*>(animal);
	//Book* book = static_cast<Book*>(animal);
	Book* book = reinterpret_cast<Book*>(animal);

	book->PrintInfo();
	return 0;
}