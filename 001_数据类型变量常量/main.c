#include <stdio.h> // 头文件，head，#include预处理器
#include <float.h>

// 代码从main()函数开始执行
int main()
{
    int a=1;
    float b;
    double c;
    
    // %d 整数
    printf("这里我们填写中文参数:%d\n",a);
    printf("这里我们输出一个变量的值：%lu\n",sizeof(int)); 
    printf("float的字节数：%lu\n",sizeof(float));
    printf("浮点数的最大值:%E",FLT_MAX);
    printf("double的字节数：%lu\n",sizeof(double));

    return 0; // 语句用于表示退出程序
}