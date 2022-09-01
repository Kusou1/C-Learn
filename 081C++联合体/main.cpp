#include<stdio.h> 
#include<iostream>

using namespace std;

union UnionA
{
	int a;
	float b;
	double c;
	char ch;
	const char* name;
	int arrryName[3];
};

union 
{
	int a;
	float b;
	double c;
} U1;

union Work
{
	//char ch[10];
	const char* a;
	int i;
} work = {"teacher"};////声明一个共同体变量x，并初始化

union 
{
	int i;
	char ch[10];
} u1 = {10};//用匿名共同体类型声明一个共同体变量y


union abc
{
	char ch;
	int i;
	float f;
}x = {'a'}; //错误，初始化了太多的成员

union Test
{
	char ch;
	int a;
	float b;
};

int main(void)
{
	////Work w = "worker" ;
	//Work job = { "programmer" };//用共同体类型Work变量声明一个job
	//job.i = 10;
	//cout << job.a << job.i << endl;


	Test test;
	test.ch = 'a';
	test.a = 10;
	test.b = 2.0f;

	cout << "test.ch = " << test.ch  << " " << &test.ch << endl;

	printf("%p\n", &test.ch);

	cout << "test.a = " << test.a << " " << &test.a << endl;
	cout << "test.b = " << test.b  << " " << &test.b << endl;


	return 0;
}