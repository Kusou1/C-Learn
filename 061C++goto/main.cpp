#include <stdio.h>
#include <iostream>

using namespace std;

int main(void)
{
	//	int a = 10;
	//	for (int i = 0; i < 200; i++)
	//	{
	//		for (int j = 0; j < 300; j++)
	//		{
	//			for (int k = 0; k < 400; k++)//256��
	//			{
	//				cout << "HelloWorld" << endl;
	//				goto label;
	//			}
	//		}
	//	}
	//
	// label:
	//	//a++;
	//	cout << "a = " << a << endl;

	int n = 0;
	cout << "请输入一个字符串" << endl;

loop:
	if (getchar() != '\n')
	{
		n++;
		goto loop;
	}

	cout << "n = " << n << endl;

	return 0;
}