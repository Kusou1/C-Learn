#include<stdio.h>

void ChangeNum(int a, int b)
{
	
}

int main(void)
{
	//3 = 0011
	//5 = 0101
	//& = 0001 
	int x = 3;//0011
	int y = 5;//0101
	//===============
	printf("%d\n", x & y);

	//060 = 0011 0000
	//017 = 0000 1111
	//|   = 0011 1111
	int a = 060;//八进制
	int b = 017;
	printf("%d\n", a | b);

	int A = 1;
	int B = 2;

	A = A ^ B;
	B = B ^ A;
	A = A ^ B;

	ChangeNum(A, B);
	printf("A = %d, B = %d\n", A, B);
	return 0;
}