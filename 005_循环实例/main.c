#include <stdio.h> 
int main(void)
{
    // =====用if语句和goto语句构成循环

    // int i = 0;
    // int sum = 0;
    // loop: if(i <= 100){
    //     sum += i;
    //     i++;
    //     goto loop;
    // }

    // printf("sum=%d\n", sum);

    // =====用while语句构成循环
    // int i = 0;
    // int sum = 0;
    // while(i <= 100){
    //     sum += i;
    //     i++;
    // }
    // printf("sum=%d\n", sum);

    // =====用do-while语句构成循环
    // int i = 0;
    // int sum = 0;
    // do{
    //     sum += i;
    //     i++;
    // }while(i <= 100);
    // printf("sum=%d\n", sum);

    // =====用for语句构成循环
    // int sum = 0;
    // for(int i = 0; i <= 100; i++){
    //     sum += i;
    // }
    // printf("sum=%d\n", sum);

    // =====break
    // int a = 10;
    // while (a<15){
    //     if(a == 13){
    //         break;
    //     }
    //     printf("a=%d\n", a);
    //     a++;
    // }

    // =====continue

    int n =0;

    for(n=10; n<=20; n++){
        if(n % 3 == 0){
            continue;
        }
        printf("n=%d\n", n);
    }
    

    return 0;
}