#include <stdio.h> // 头文件，head，#include预处理器

// 代码从main()函数开始执行
int main(void)
{
    int a = 1;
    int b = 2;

    // printf("a+b=%d\n", a + b);

    // int c = a - b;
    // printf("c=%d\n", c);

    // c = a * b;
    // printf("c=%d\n", c);

    // c = a / b; // 取整
    // printf("c=%d\n", c);

    // c = a % b; // 取余
    // printf("c=%d\n", c);

    // int c = ++a;
    // printf("c=%d\n", c);
    
    // int c = --a;
    // printf("c=%d\n", c);

    if (a == b){
        printf("a=b\n");
    }
    else{
        printf("a!=b\n");
    }

    if(a<b){
        printf("a<b\n");
    }
    else{
        printf("a>=b\n");
    }

    if(a && b){
        printf("条件为真\n");
    }

    if(a || b){
        printf("条件为真\n");
    }

    if(!(a && b)){
        printf("条件为真\n");
    }

    return 0; // 语句用于表示退出程序
}