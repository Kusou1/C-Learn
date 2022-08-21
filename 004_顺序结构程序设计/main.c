#include <stdio.h> // 头文件，head，#include预处理器
#include <math.h>
// 代码从main()函数开始执行
int main(void)
{
    // ============利用海伦公式计算三角形面积============
    // float a;
    // float b;
    // float c;
    // float p;
    // float area;

    // printf("请输入三角形的三条边长：");
    // scanf("%f,%f,%f", &a, &b, &c);
    // p = 0.5 * (a + b + c);

    // area = sqrt(p * (p - a) * (p - b) * (p - c));

    // printf("a=%f,b=%f,c=%f,p=%f", a, b, c, p);

    // printf("area=%f", area);

    // ============从键盘输入一个大写字母，要求改用小些字母输出============
    // char c1;
    // char c2;
    // c1 = getchar();
    // printf("%c,%d\n", c1, c1);
    // c2 = c1 + 32;
    // printf("%c,%d\n", c2, c2);

    // ============求ax^2 + bx + c =0方程的根，a,b,c由键盘输入，设b^2 - 4ac > 0============

    float a;
    float b;
    float c;

    float x1;
    float x2;

    float delta;

    float p;
    float q;

    scanf("%f,%f,%f", &a, &b, &c);

    delta = b * b - 4 * a * c;
    p = -b / (2 * a);
    q = sqrt(delta) / (2 * a);
    x1 = p + q;
    x2 = p - q;

    printf("x1 = %f\n", x1);
    printf("x2 = %f\n", x2);

    // 试数


    return 0; // 语句用于表示退出程序
}