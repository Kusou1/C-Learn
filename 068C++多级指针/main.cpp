#include<stdio.h> 
#include<iostream>

using namespace std;

int main(void)
{
	const char* constChar = "string"; 
	const char* charArray[3] = {"1str", "2str", "3str"};//指针数组

	const char** p;

	for (size_t i = 0; i < 3; i++)
	{
		//p += i;
		p = charArray + i;
		cout << *p << endl;
	}
	return 0;
}