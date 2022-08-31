#include<stdio.h> 
#include<iostream>
//#include<assert.h>
#include<cassert>

#pragma warning(disable:4996)

using namespace std;



void FuncTestA()
{
	cout << "FuncTestA" << endl;
}

void FuncTestB()
{
	cout << "FuncTestB()" << endl;
}

void FuncTestC()
{
	cout << "FuncTestC()" << endl;
}

void AssertFunc(int x, int y)
{	
	// 断言
	// 不符合条件的话，会弹出提示
	assert(x < 0 || y > 0);
}

int main(void)
{
	{
		//abort();
		//exit(0);
		/*atexit(FuncTestA);
		atexit(FuncTestB);
		atexit(FuncTestC);

		srand((unsigned)time(NULL));

		for (size_t i = 0; i < 100; i++)
		{
			cout << rand() << endl;
		}

		cout << endl;*/
	}

	{	
		//系统命令
		//system("pause");
		//system("calc");
		//system("notepad");
		//system("tasklist");
	}

	{
		// 绝对值
		/*int x = abs(-1);
		cout << "x = " << x << endl;
		*/
	}

	{
		/*AssertFunc(1, 2);*/
	}

	{
		time_t now = time(0);
		char* dateTime = ctime(&now);

		cout << "now = " << now << endl;
		cout << "dateTime = " << dateTime << endl;
	}
	return 0;
}