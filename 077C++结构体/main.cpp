#include<stdio.h> 
#include<iostream>

using namespace std;

struct StructA
{
	int a;
	float b;
	double c;
	char d;
	int structArray[3];
	const char* name;
	struct StructB
	{
		int year;
		int month;
		int day;
	} structB;
} structC, structD, structE[3];
////定义一个人物信息结构
//struct CHARACTER
//{
//	unsigned long uID;
//	char strName[20];
//	char nSex;
//	unsigned short uLevel;
//};

struct CHARACTER
{
	unsigned long uID;
	char strName[20];
	char nSex;
	unsigned short uLevel;
}boy1, boy2;//声明变量

struct
{
	int a;
	float b;
	double c;
} structNULLName;

struct
{
	unsigned long uID;
	char strName[20];
	char nSex;
	unsigned short uLevel;
};

#include<string.h>
int main(void)
{
	{
		int a = 10;
		int b;

		StructA structAArray[3];
		StructA structA = { 1, 2.0, 3.0, 'a', {1, 2, 3}, "����", 2021, 8, 1};
		

		cout << structA.structB.year << endl;
		cout << structA.structB.month << endl;
		cout << structA.structB.day << endl;
		cout << structA.structArray[2] << endl;
		cout << structA.d << endl;

		/*structA.a = 10;
		structA.structB.year = 2000;
		structA.structB.month = 11;
		structA.structB.day = 10;
		structA.name = "蛋堡";
		structA.structArray[2] = {1};
		cout << structA.structArray[2] << endl;
		cout << structA.structArray[0] << endl;*/

		//struct StructA structB;
		//struct CHARACTER boy1;     	 //旧的定义方法
		//CHARACTER boy2;             	 	 //新的定义方法

		gets(boy1.strName);
		boy1.nSex = getchar();

		cout << boy1.strName << "  " << boy1.nSex << endl;
	}

	return 0;
}