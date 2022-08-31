#include<stdio.h> 
#include<iostream>

using namespace std;

struct A
{

};

class B
{

};


#define ARRAY_VAR 5
const int ARRAY_CONST = 10;

int varName = 5;

int main(void)
{
	//int a[10]; 		//说明整形数组a有10个元素
	//float b[10]; 		//声明浮点型数组b有10个元素
	//char c[20]; 		//声明字符数组c有20个元素

	int arrayNameA[ARRAY_CONST - 1];
	float arrayNameFloat[ARRAY_VAR + 3];
	//double arrayNameDouble[varName + 10];

	B arrayNameClass[3];
	A arrayNameStruct[3];

	//int a1[10], a2[20]; //ͬʱ������������������

	int a1[10];

	cout << 10 * sizeof(int) << endl;

	int a2[20];
	//int x, y[20]; //ͬʱ������һ�����ͱ�����һ����������

	int x;//
	int y[20];//


	int arrayName[3];
	for (size_t i = 0; i < 3; i++)
	{
		arrayName[i] = i;
	}

	cout << "数组的第二个元素是 = " << arrayName[1] << endl;
	for (size_t i = 0; i < 3;)
	{
		//cout << "arrayName[i] = " << arrayName[i] << endl;

		cout << "arrayName[" << i << "] = " << arrayName[i] << endl;
		i++;
	}
	return 0;
}