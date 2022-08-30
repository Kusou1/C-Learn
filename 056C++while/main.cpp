#include<stdio.h> 
#include<iostream>

using namespace std;

int main(void)
{
	//int i = 0;
	//while (i != 100)
	//{
	//	cout << "i = " << i << endl;
	//	//i++;
	//}

	/*int n = 0;
	cout << "请输入字符串" << endl;

	while (getchar() != '\n')
	{
		n++;
	}

	cout << "n = " << n << endl;

	while (1 <= 3)
	{
		cout << "while" << endl;
	}*/
	
	//int a = !0;
	/*int a = !1;

	cout << "a = " << a << endl;*/
	/*while (!0)
	{
		cout << "��ѭ��" << endl;
	}*/

	{
		int i = 1;
		while (i != 3)
		{
			while (i != 2)
			{
				cout << "i = " << i << endl;
				i++;
			}
			i++;
		}
	}
	int a;
	int n = 0;
	int b = (a = 5);
	cout << "b = " << b << endl;

	while (a == 5)
	{
		cout << "n = " << n++ << endl;
		break;
	}
	return 0;
}