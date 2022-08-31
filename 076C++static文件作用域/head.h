#pragma once

extern  int a;
// 文件作用域static
static int b = 10;

void FuncA();

//static long add(long a, long b) 
//{ 
//	return a + b; 
//}

static long add(long a, long b)
{
	return a + b;
}





