#include<stdio.h> 
#include<iostream>

using namespace std;

class Animal
{
public:
	virtual void Cry() = 0;
};

// 继承自animal
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
		cout << "睡觉" << endl;
	}
};

int main(void)
{
	Animal* pAnimal = NULL;
	pAnimal = new Cat();
	pAnimal->Cry();

	// 把动物的指针转换成狗的指针
	Dog* pDog = dynamic_cast<Dog*>(pAnimal);

	if (pDog != NULL)
	{
		pDog->Cry();
		pDog->DogAct();
	}
	else
	{
		cout << "pDogָ指针转换失败" << endl;
	}

	Cat* pCat = dynamic_cast<Cat*>(pAnimal);
	if (pCat != NULL)
	{
		pCat->Cry();
		pCat->CatAct();
	}

	return 0;
}