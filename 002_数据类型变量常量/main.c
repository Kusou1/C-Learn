#include <stdio.h> // 头文件，head，#include预处理器

#define PRICE 10; // 定义常量，定义的常量不能改变

// 函数外面定义
int x;
int y;
x = 3;
y = 4;

// 自定义函数 void表示不需要返回值
int MyFunction()
{
    // 函数内声明的变量
    extern int x;
    extern int y;
    x = 1;
    x = 2;
    return x + y;
}

// 代码从main()函数开始执行
int main()
{
    // ==========demo1============

    // int num;
    // int totalValue;
    // // int 价格;
    // // int 苹果;
    // num = 10;
    // totalValue = num * PRICE;

    // printf("totalValue=%d\n", totalValue);

    // ==========demo2============

    // int result;
    // result = MyFunction();
    // printf("result=%d\n", result);

    // ==========demo3============

    // int a;
    // int b;
    // int c;
    // int d;

    // // 无符号的整形变量
    // unsigned int u;
    // a = 12;
    // b = -24;
    // u = 10;

    // c = a+u;
    // d = b+u;
    // printf("a + u = %d, b + u = %d\n", c,d);

    // ==========demo4============
    // float a,b;
    // a = 12345673.789e5;

    // b = a+ 20;

    // printf("%f\n",b);

    // ==========demo5============

    // char c1;
    // char c2;
    // c1 = 97;
    // c2 = 98;

    // printf("%c,%c\n", c1, c2); // a,b ASCII码
    // printf("%d,%d\n", c1, c2); // 97,98


    char c1;
    char c2;
    c1 = 'a';
    c2 = 'b';
    c1 = c1 - 32;
    c2 = c2 - 32;

    printf("%c,%c\n", c1, c2); // a,b ASCII码
    printf("%d,%d\n", c1, c2); // 97,98

    return 0; // 语句用于表示退出程序
}