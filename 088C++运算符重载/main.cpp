#include<stdio.h> 
#include<iostream>

using namespace std;

class A
{
public:
	void operator+(int a)
	{
		return;
	}

	void operator+()
	{
		return;
	}

	/*bool operator+��bool a,bool b��
	{
	if����a����FALSE��������b����FALSE���� return FALSE��
	return TRUE��
	}*/

	/*bool operator*��bool a��bool b��
	{
		if����a����TRUE��������b����TRUE���� return TRUE��
		return FALSE��
	}*/

	bool operator*(bool a)
	{
		if (a == true) return true;
		return false;
	}

	bool operator*()
	{
		return true;
	}

};
//void operator+(int a, int b)
//{
//	return;
//}

class PointA
{
public:
	PointA()
	{ }

	PointA(int x, int y)
	{
		this->x = x;
		this->y = y;
	}

	PointA operator+(const PointA& p)
	{
		PointA p1;
		p1.x = this->x + p.x;
		p1.y = this->y + p.y;

		return p1;
	}

	//p(x, y), p1(x1, y1)
	/*PointA operator+(const PointA& p1)
	{
		PointA p;
		p.x = p1.x + p1.x;
		p.y = p1.y + p1.y;
		return p;
	}*/

public:
	int x;
	int y;

};

class PointB
{
public:
	PointB()
	{ }

	PointB(int x, int y)
	{
		this->x = x;
		this->y = y;
	}

	friend PointB operator+(const PointB& p);
	

public:
	int x;
	int y;
};

PointB operator+(const PointB& p1, const PointB& p2)
{
	PointB pB;
	pB.x = p1.x + p2.x;
	pB.y = p1.y + p2.y;

	return pB;
}


int main(void)
{
	PointA a(1, 2);
	PointA b(3, 4);
	PointA c = a + b;
	cout << "(" << c.x << ", " << c.y << ")"<< endl;

	PointB A(10, 20);
	PointB B(30, 40);
	PointB C = A + B;
	cout << "(" << C.x << ", " << C.y << ")" << endl;
	return 0;
}
