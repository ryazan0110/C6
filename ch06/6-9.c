// boolean.c -- 使用 Bool类型变量 variable
#include <stdio.h>


int main (void){
    long num;
    long sum = 0L;
    _Bool isNumber;

    printf("Please enter an integer to be summed");
    printf("(q to quit):");
    isNumber = (scanf("%ld",&num) == 1);

    while (1 == isNumber)
    {
        sum = sum + num;
        printf("Please enter next integer (q to quit):");
        isNumber = (scanf("%ld",&num) == 1);
    }
    printf("Those integers sum to %ld\n",sum);
    
    return 0;
}
