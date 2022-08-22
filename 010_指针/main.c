#include<stdio.h>

int main(void)
{
	//=========================指针的基础理解==========================
	//int a = 1;
	//int* p = &a;

	//float* p1;
	//double* p2;
	//char* p3;

	////p = &a;
	//printf("a变量的地址为:%p\n", p);
	//printf("a的值为%d\n", a);
	//printf("a的值为%d\n", *p);
	//=========================指针的基础理解==========================

	//int* ptr = NULL;//空指针，Null指针：值为零的指针常量
	//int* p = 0;//空指针，地址为0的内存，操作系统用的。不指向任何东西

	//printf("ptr的地址是%p\n", ptr);
	//printf("p的地址是%p\n", p);

	//if (ptr)//ָ指针ptr为非空，执行
	//{
	//	printf("HelloWorld");
	//}

	//if (!ptr)//ָ指针为空执行
	//{

	//}

	//=========================指针的运算===============================
	int array[] = { 1, 2, 3 };
	int i = 0;
	int* p;

	const int arrayMaxIndex = 3;
	//p = &array[0];
	//p = array;
	//p = &array[arrayMaxIndex - 1];
	
	// 本身就指向头指针，所以不需要加&
	p = array;

	// for (size_t i = 0; i < 3; i++)
	// {
	// 	// %zu是size_t类型的格式化符，用于输出size_t类型的变量
	// 	printf("array[%zu] = %p\n", i, p);
	// 	printf("array[%zu] = %d\n", i, *p);
	// 	// 指向数组下一个的指针
	// 	p++;
	// }

	/*for (size_t i = arrayMaxIndex; i > 0; i--)
	{
		printf("array[%d] = %p\n", i-1, p);
		printf("array[%d] = %d\n", i-1, *p);
		p--;
	}*/


	// 指针大小的比较
	while (p <= &array[arrayMaxIndex-1])
	{
		printf("array[%d] = %p\n", i, p);
		printf("array[%d] = %d\n", i, *p);
		p++;
		i++;
	}


	return 0;
}