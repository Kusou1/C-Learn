#include <stdio.h>
#include <string.h>

void PrintStar()
{
    printf("*************");
}

void PrintMessage()
{
    extern a;
    printf("a=%d\n", a);
    printf("i love coding \n");
}

int a = 3; //外部变量
int b = 5;
// 驼峰命名法
int FindMax(int a, int b) //局部变量
{
    int z; //局部变量
    z = a > b ? a : b;
    return z;
}

int FuncTest(int a, int b)
{
    int c;
    if (a > b)
    {
        c = a;
    }
    else if (a == b)
    {
        c = 0;
    }
    else
    {
        c = b;
    }
    return c;
}

float FindAvarage(float array[])
{
    int i;
    float aver;
    float sum = 0;

    for (i = 0; i < 10; i++)
    {
        sum += array[i];
        // sum = sum + array[i];
    }

    aver = sum / 10;

    return aver;
}

int main(void)
{
    // =====打印函数======
    // PrintStar();
    // PrintMessage();

    // =====大小比较函数=====

    // int a;
    // int b;
    // int c;
    // scanf("%d,%d", &a, &b);

    // c = FindMax(a, b);

    // printf("Max is %d\n", c);

    // =====函数的调用=====

    // int i = 2;
    // int p;
    // p = FuncTest(i, 3);
    // printf("p=%d\n", p);

    // =====将数组作为参数求平均值=====

    // float score[10];
    // float aver;

    // int i;
    // printf("请输入10个学生的成绩:\n");

    // for(i = 0;i<10;i++){
    //     scanf("%f", &score[i]);
    // }

    // printf("\n");

    // aver = FindAvarage(score);

    // printf("学生的平均成绩为:%5.2f\n", aver);

    // =====全局变量，局部变量，外部变量=====
    int a = 8;
    printf("%d, %d\n", FindMax(a, b), b);
	PrintMessage();
    return 0;
}