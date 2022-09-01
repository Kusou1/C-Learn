#include<stdio.h> 
#include<iostream>

using namespace std;

class People
{
protected:
	const char* name;
	int age;

public:
	People(const char* name, int age);
	People()
	{
		cout << "People默认构造函数" << endl;
	}
};

People::People(const char* name, int age):name(name), age(age)
{
	cout << "People�Ĺ��캯��" << endl;
}

//People::People(char* name, int age)
//{
//	this->name = name;
//	this->age = age;
//}

class Student : public People
{
private:
	float score;
public:
	Student(const char* name, int age, float score);//
	void PrintStudentInfo();
};

Student::Student(const char* name, int age, float score) : People(name, age)
{
	this->score = score;
}

//Student::Student(char* name, int age, float score)
//{
//	this->name = name;
//	this->age = age;
//	this->score = score;
//}

void Student::PrintStudentInfo()
{
	cout << name << "的年龄是" << age << ", 成绩是" << score << endl;
}


class A
{
public:
	A()
	{
		cout << "A�Ĺ��캯��" << endl;
	}
};

class B
{
public:
	B()
	{
		cout << "B�Ĺ��캯��" << endl;
	}
};

class C : public B, public A
{
public:
	C()
	{
		cout << "C�Ĺ��캯��" << endl;
	}
};


class Animal
{
public:
	Animal()
	{
		cout << "����Ĺ��캯��" << endl;
	}

	void AnimalFunc()
	{
		cout << "AnimalFunc()" << endl;
	}

protected:
	void AnimalProtectedFunc()
	{
		cout << "AnimalProtectedFunc()" << endl;
	}
};

class Cat : public Animal
{
public:
	Cat()
	{
		cout << "Cat�Ĺ��캯��" << endl;
	}

	void CatFuncA()
	{
		AnimalProtectedFunc();
		cout << "CatFuncA()" << endl;
	}
};

int main(void)
{
	{
		Student student("阿宏", 10, 100);
		student.PrintStudentInfo();
	}
	
	{
		C c;

	}

	{
		Animal animal;
		Cat cat;
		cat.AnimalFunc();
		cat.CatFuncA();
		//cat.AnimalProtectedFunc();
		
	}

	{
		Cat cat;
		Animal animal = (Animal)cat;
		animal.AnimalFunc();
	}
	return 0;
}
