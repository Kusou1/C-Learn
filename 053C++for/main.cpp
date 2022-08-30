#include<stdio.h> 
#include<iostream>

using namespace std;

int main(void)
{
	/*for (表达式1;表达式2;表达式3)
	{

	}*/
	//int i = 1;
	//for (; ;)
	//{
	//	//cout << "i = " << i << endl;
	//	//�����
	//}



	for (size_t i = 0; i < 2; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			cout << "i = " << i << endl;
		}
	}
	return 0;
}