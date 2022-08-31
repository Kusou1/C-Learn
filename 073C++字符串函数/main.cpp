#include<stdio.h> 
#include<iostream>

using namespace std;

void StrFuncA()
{
	/*string str1 = "stringA";
	string str2 = "stringB";*/

	const char* str1 = "stringA";
	const char* str2 = "stringB";
	//strcmp比较str
	int result = strcmp(str1, str2);

	if (result > 0)
	{
		cout << "str1 > str2" << endl;
	}
	else if (result < 0)
	{
		cout << "str1 < str2" << endl;
	}
	else
	{
		cout << "str1 == str2" << endl;
	}

	return;
}

void StrFuncB()
{
	const char* str1 = "abc";
	const char* str2 = "abc";

	// 第三个参数表示对比几个
	int result = strncmp(str1, str2, 4);

	if (result > 0)
	{
		cout << "str1 > str2" << endl;
	}
	else if (result < 0)
	{
		cout << "str1 < str2" << endl;
	}
	else
	{
		cout << "str1 == str2" << endl;
	}
}

void StrFuncC()
{
	const char* str1 = "string";
	size_t length = strlen(str1);

	cout << "length = " << length << endl;
}

int main(void)
{

	{
		//StrFuncA();
		//StrFuncB();
		StrFuncC();
	}

	{
		cout << "INT_MAX " << INT_MAX << endl;
		cout << "LONG_MAX " << LONG_MAX << endl;
		cout << ULLONG_MAX << endl;
		
	}
	return 0;
}