#include<stdio.h> 
#include<iostream>

using namespace std;

int main(void)
{
	int* ip;
	ip = new int;

	delete ip;

	int* pA = new int(10);
	cout << "pA = " << pA << " *pA = " << *pA << endl;
	delete pA;

	int* pArray = new int[3]{1, 2, 3};

	/*for (size_t i = 0; i < 3; i++)
	{
		pArray[i] = i;
	}*/

	for (size_t i = 0; i < 3; i++)
	{
		cout << "pArray[i] = " << pArray[i] << endl;
	}
	cout << "pArray = " << pArray << endl;

	delete[] pArray;
	//delete[] pArray;
	//pArray = NULL;
	//pArray = nullptr;
	cout << "pArray = " << pArray << endl;
	
	cout << "pArray = " << pArray << endl;


	return 0;
}