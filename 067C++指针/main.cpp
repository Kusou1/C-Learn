#include<stdio.h> 
#include<iostream>

using namespace std;

int main(void)
{
	//int* p1 = NULL;
	//int* p2 = NULL;

	//cout << (bool)(p1 == p2) << endl;

	//cout << (p1 - p2) << endl;

	//if (p1 > p2)
	//{
	//	cout << "p1 == p2" << endl;
	//}

	//int a = 5, * p = &a;
	//printf("%d\n", *p);//cout



	//int a = 16, 
	//	b = 28;
	//int* pa = &a, 
	//	*pb; 		//符号*表示pa、pb是指针变量 
	//a *= b;			//符号*表示进行乘法运算

	//*pa = 123;		//符号*表示简接引用pa所指向的对象a0


	{
		//int* pA = NULL;
		//pA += 2;
		//pA--;

		//cout << pA << endl;

		//cout << sizeof(float) << endl;
		//cout << sizeof(double) << endl;

		//double* pB = NULL;
		////pB++;
		////pB *= 2;
		//pB = 2 + pB;
		//cout << pB << endl;
		//int a = 16, * pa = &a, * p1, * p2;
		//p1 = pa + 3;
		//p2 = pa - 2;
	}


	{
		//int a[10];
		//int* p1 = &a[1];		 //p1ָ指向a[1] 
		//int* p2 = &a[6]; 		 //p2ָ指向a[6] 
		//int b = p2 - p1;  		 // b=5  

		//cout << b << endl;
	}


	{
		//int a[10];
		//int* p1 = &a[1]; //p1ָ指向a[1] 
		//int* p2 = &a[6]; //p2ָ指向a[6] 
		//if (p1 == p2)
		//{
		//	printf("=");
		//}
		//else printf("!=\n");

		//if (p1 != nullptr)
		//{
		//	cout << "p1不为空指针" << endl;
		//}
	}

	{
		/*int a[3] = { 1, 2, 3 };
		int* p = a;

		cout << *p << endl;
		cout << *(p + 1) << endl;
		cout << *(p + 2) << endl;
		cout << *p + 1 << endl;*/
	}

	{
		//int a[5] = { 1, 2, 3, 4, 5};
		//int i;
		//int* p = a;			//数组名代表了数组的首地址

		//for (i = 2; i < 5; i++)
		//{
		//	//*(p + i) = p[i - 1] + p[i - 2];

		//	p[i] = p[i - 1] + p[i - 2];

		//	//cout << "p[i] = " << p[i] << endl;

		//	cout << "p[" << i << "] = " << p[i] << endl;
		//}//用指针运算和下标访问数组元素

		////cout << i << endl;

		//cout << p[i-1] << endl;
	}
	
	
	{//多维数组的指针
		//int a[3][4] = 
		//{
		//	{1, 2, 3, 4},
		//	{2, 3, 4, 5},
		//	{4, 5, 6, 7}
		//};

		////0x表示16进制
		///*printf("0x%p\n", a);

		//cout.setf(ios::hex);
		//cout << "hex:" << a << endl;
		//cout.unsetf(ios::hex);*/

		//cout << "*a = " << *a << endl;
		//cout << "a[0] = " << a[0] << endl;
		//cout << "&a[0][0] = " << &a[0][0] << endl;

		//cout << "a[1] = " << a[1] << endl;//10, 16
		//cout << "a[1] - a[0] = " << a[1] - a[0] << endl;

		//int (*p)[3];//这是一个指向二维数组的指针
		//int* p[3];//这是一个指针的数组

		//int a[3];
		//int* b[10];
	}

	{
		int a[3][4] =
		{
			{1, 2, 3, 4},//a[0]
			{2, 3, 4, 5},//a[1]
			{4, 5, 6, 7} //a[2]
		};

		int(*p)[4];//是一个指向二维数组的指针
		
		int i;
		int j;

		p = a;//指向二维数组a的首地址

		/*i = 10;
		j = 5;*/
		//p = &a[0];
		//p = a[0][0];

		for (size_t i = 0; i < 3; i++)
		{
			for (size_t j = 0; j < 4; j++)
			{
				cout << "*(*(p + i) + j) = " <<  *(*(p + i) + j) << endl;	
			}
		}

	}
	return 0;
}


void FuncA(int a[][3], int b[][4]);
void FuncB(int(*p)[3], int(*q)[4]);