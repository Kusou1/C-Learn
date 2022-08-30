#include<stdio.h> 
#include<iostream>

using namespace std;

int main(void)
{
	//int a = 2;
	char charA = '1';
	switch (charA)
	{
	
	case '1':
		cout << "a = 1" << endl;
		break;
	case 2:
	{
		cout << "a = 2" << endl;
		break;
	}
	default:
		cout << "default" << endl;
		break;
	case 3:
		cout << "a = 3" << endl;
		break;
	case 4:
		cout << "a = 4" << endl;
		break;
	
	}

	int a;
	cout << "今天星期几？请输入0-7的整数" << endl;
	cin >> a;

	switch (a)
	{
	case 1:
		cout << "星期一" << endl;
		break;
	case 2:
		cout << "星期二" << endl;
		break;
	case 3:
		cout << "星期三" << endl;
		break;
	case 4:
		cout << "星期四" << endl;
		break;
	case 5:
		cout << "星期五" << endl;
		break;
	case 6:
		cout << "星期六" << endl;
		break;
	case 7:
		cout << "星期日" << endl;
		break;
	default:
		cout << "输入的为无效数字" << endl;
		break;
	}
	return 0;
}