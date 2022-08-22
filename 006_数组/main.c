#include <stdio.h>
#include <string.h>

#define ARRAYNUM 10

int main(void)
{
    // int a[10];
    // float b[10], c[20];

    // char ch[20];

    // int MyArray[ARRAYNUM] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d\n", MyArray[i]);
    // }

    // ============字符串=============

    // char c[] = {"C program"};
    // char c[] = "C program";

    // char myCharArray[] = "C语言";

    // // string myStr = "srt"

    // char c[] = "BASIC\ndBASE";
    // printf("%s\n", c);

    // char st[15];
    // printf("input string:\n");
    // scanf("%s", st);
    // printf("%s\n", st);


    // ============put=============

    // char c[]="BASIC\ndBASE";
    // puts(c);

    // char st[15];
    // printf("input string:\n");
    // gets(st);
    // puts(st);

    // ============连接字符串strcat=============
    static char st1[30] = "My name is ";
    int st2[10];
    printf("input your name:\n");
    gets(st2);
    strcat(st1, st2);
    puts(st1);


    return 0;
}