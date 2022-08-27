//#include<iostream.h>
//#include<stdio.h>
#include<iostream> // C++的头文件，这些头文件包括了程序中必须的或有用的相关信息

//use, ʹ使用’，namespace命名空间std, standard
using namespace std;//告诉编译器使用std命名空间，命名空间是C++中的一个概念。

//是程序开始执行的地方，主函数
int main(void)
{
	//打印HelloWorld
	//cout << "HelloWorld" << endl;

    // 使用命名空间::
	std::cout << "Hello World" << std::endl;

	return 0;//终止main函数，并向调用进程返回0;
}