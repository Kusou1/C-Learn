#include<stdio.h> 
#include<iostream>

using namespace std;

int main(void)
{
	int a[3][4] =
	{
		{1, 2, 3, 4},
		{2, 3, 4, 5},
		{4, 5, 6, 7}
	};

	cout << a[2][3] << endl;
	cout << a[0][0] << endl;

	int b[5][3] = 
	{ 
		80,75,92,
		61,65,71,
		59,63,70,
		85,87,90,
		76,77,85 
	};

	int c[3][3] = 
	{ 
		{1},
		{2},
		{3}
	};

	cout << c[1][1] << endl;

	int d[3][3] = { 1,2,3,4,5,6,7,8,9 };

	int e[][3] = 
	{ 
		1,2,3,
		4,5,6,
		7,8,9 
	};

	return 0;
}