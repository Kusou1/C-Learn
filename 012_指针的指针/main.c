#include<stdio.h>
#include<time.h>

void PointerFunction(long int* p)
{
	*p = time(NULL);
	return;
}


float FindAverage(int* array, int size)
{
	//int i;
	int sum = 0;
	float avg;

	for (size_t i = 0; i < size; i++)
	{
		sum += array[i];
	}

	avg = (float)sum / size;

	return avg;
}
int main(int argc, const char* argv[])
{
	/*int a = 1;
	int* p1;
	int** p2;

	p1 = &a;
	p2 = &p1;

	printf("a = %d\n", a);
	printf("p1 = %p\n", p1);
	printf("p1 = %d\n", *p1);
	printf("p2 = %p\n", p2);
	printf("**p2 = %d\n", **p2);*/

	//=============================指针参数=================

	long int second;

    // 传入指针参数
	PointerFunction(&second);

	printf("%ld\n", second);

	int student[3] = { 10, 20, 30 };

	//float avg;

	float avg = FindAverage(student, 3);
	printf("平均值为%f\n", avg);

	return 0;
}