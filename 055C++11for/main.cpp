#include<stdio.h> 
#include<iostream>

using namespace std;

int main(void)
{
	//数组
	int testArray[5] = { 1, 2, 3, 4, 5 };

	//遍历数组
	for (int x : testArray)
	{
		x *= 2;
		cout << x << endl;
	}

	//C++11
	for (auto x : testArray)
	{
		x *= 2;
		cout << x << endl;
	}

	string str("helloWorld");

	for (auto& c : str)
	{
		c = toupper(c);
	}

	cout << str << endl;
	return 0;
}