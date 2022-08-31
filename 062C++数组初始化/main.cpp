#include<stdio.h> 
#include<iostream>

using namespace std;

int main(void)
{
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };	 //整形数组元素被全部初始化
	float x[5] = { 2.1, 2.2, 2.3, 2.4, 2.5 }; 	 //浮点型数组元素被全部初始化
	int b[10] = { 1, 3, 5, 7, 9 };		//初始化了部分数组元素
	int c[] = { 2, 4, 6, 8, 10 };		//通过对数组元素全部初始化，隐含给出了数组的长度为5

	int arrayNameA[3] = { 1, 2 };
	cout << arrayNameA[2] << endl;
	//cout << arrayNameA[3] << endl;

	int arrayNameB[] = { 1, 2, 3 };

	for (size_t i = 0; i < 3; i++)
	{
		arrayNameB[i] = i;
	}

	for (size_t i = 0; i < sizeof(arrayNameB) / sizeof(arrayNameB[0]); i++)
	{
		cout << arrayNameB[i] << endl;
	}

	cout << endl;

	int iarr[4] = { 0, 1, 2, 3 };
	int size = sizeof(iarr) / sizeof(iarr[0]);
	for (int m = 0; m < size; m++)
	{
		printf("%d\n", iarr[m]);//cout
	}


	//int arrayNameC[]= ;

	return 0;
}