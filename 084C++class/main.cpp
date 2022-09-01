#include<stdio.h> 
#include<iostream>

using namespace std;

class ClassB;

class ClassA
{
private:
	float b;
public:
	int a;
protected:
private:
public:
	void FuncClassA();
	int FuncClassAAdd(int a, int b)
	{
		return a + b;
	}

	void FuncClassATest()
	{
		//this总是指向当前调用者
		this->b = 10;
		this->FuncClassA();
		this->FuncClassAAdd(100, 200);
		//this->a = 100;
		(*this).a = 20;
		a = 100;
	}
};

class CHero
{
public:
	void SetHP(int hp)
	{
		m_HP = hp;
	}

	int GetHP()
	{
		return m_HP;
	}
private:
	int m_HP;
};

class ClassC
{
public:
	void GetMP();
private:
	int m_MP;
};

void ClassC::GetMP()
{

	return;
}

int main(void)
{
	int a = 10;

	ClassA classA;
	classA.FuncClassA();
	//this->FuncClass();
	

	cout << "ֵ: " << classA.FuncClassAAdd(1, 2) << endl;

	ClassA* pClassA = &classA;
	pClassA = new ClassA;

	cout << pClassA->FuncClassAAdd(10, 20) << endl;;

	delete pClassA;
	pClassA = NULL;

	return 0;
}