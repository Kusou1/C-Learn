#include<stdio.h> 
#include<iostream>

using namespace std;

int main(void)
{
	//unsigned int i = 1;
	/*for (; i <= 2;)
	{
		++i;
		cout << "for循环 = " << i << endl;
	}*/

	/*for (int a = 1; a <= 3; a++)
	{

	}

	for (int i = 0; i < 3; ++i)
	{

	}*/


	/*for (;;)
	{
		static int i = 0;
		i++;
		cout << "当前i, i = "  << i << endl;
	}*/
	/*size_t i = 0;
	i != 3;
	for (;; i++)
	{
		cout << "i = " << i << endl;
	}*/

	//int n, s = 0;

	int s = 0;
	for (int n = 1; n <= 100; n++)
	{
		//int s = 0;
		//s = s + n;
		s += n;
	}
		

	cout << "s = " << s << endl;
	

	return 0;
}