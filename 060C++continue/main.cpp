#include <stdio.h>
#include <iostream>

using namespace std;

int main(void)
{
	/*for (int i = 0; i < 2; i++)
	{
		continue;
		cout << "HelloWorld" << endl;
	}*/

	/*int i = 0;

	while (i <= 2)
	{
		i++;
		continue;
		cout << "HelloWorld" << endl;
	}*/

	int i = 3;
	do
	{
		continue;
		cout << "HelloWorld" << endl;
	} while (--i);

	for (int n = 7; n <= 100; n++)
	{
		if (n % 7 == 0)
		{
			continue;
		}

		cout << "n = " << n << endl;
	}
	return 0;
}