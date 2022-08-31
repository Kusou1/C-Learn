#include<stdio.h> 
#include<iostream>
#include<math.h>

using namespace std;

void FuncNameA()
{
	//return;
}

int FuncNameB(int a, int b)
{
	/*int FuncNameD()
	{
		return 10;
	}*/
	FuncNameA();
	return a + b;
	return a * b;
}

int FindMax(int a, int b)
{
	if (a > b)
	{
		return a;
	}
	else return b;
}

int FuncNameC()
{
	return 0;
}

int FuncNameE(int x, int y);


void Foo(int x = 0, int y = 0)
{
	return;
}

void FooA(int x, int y = 0)
{
	return;
}

void output(int x)
{
	printf("output int %d", x);
}

void output(int x, float y)
{
	printf("output int %d and float %f", x, y);
}


void FuncArrayParaA(int arrayName[], int arrayLength)
{
	return;
}

void FuncArrayParaB(int a[], int n)//n表示数组的长度
{

}

void FuncArrayParaC(int arrayName[], int arrayLength)
{
	int i;
	printf("\nvalues of array a are:\n");
	for (i = 0; i < arrayLength; i++)
	{
		if (arrayName[i] < 0)
		{
			arrayName[i] = 0;
		}			

		printf("%d ", arrayName[i]);
	}
}


int FindArrayLength(int x, int y)
{
	return x + y;
}

int main(void)
{
	{
		/*int result = FuncNameB(1, 2);
		cout << result << endl;*/

		/*int ret = FindMax(1, 2);
		cout << ret << endl;*/
		//int x;
		//int y;
		//cout << "请输入两个整数值:" << endl;
		//cin >> x >> y;
		//int result = FindMax(x, y);
		////cout << FindMax(1, 2) << endl;

		//cout << result << endl;

		//int multiRes = FuncNameE(1, 2);
		//cout << multiRes << endl;
	}

	{
		/*Foo();
		Foo(1, 2);
		Foo(1);*/
		//Foo(, 10);

		//Foo(1, 2, 3);
	}

	{
		//int x = 1;
		//float y = 0.5;
		////output(x); 	
		//output(x, y); 	//正确调用
	}

	{
		int arrayNameA[3] = { 1, 2, 3 };
		FuncArrayParaC(arrayNameA, FindArrayLength(1, 2));
	}

	return 0;
}


int FuncNameE(int x, int y)
{
	return x * y;
}