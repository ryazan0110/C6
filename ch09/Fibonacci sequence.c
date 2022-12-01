//Fibonacci sequence.c -- 斐波那契数列
#include <stdio.h>

unsigned long f(unsigned long n);

int main(void){
    unsigned long number;
    printf("Enter an integer of Fibonacci sequence: ");
    while (scanf("%lu",&number) == 1)
    {
        printf("Fibonacci %lu = %lu \n",number,f(number));
        printf("Enter an integer of Fibonacci sequence: ");
    }
    printf("End.\n");

    return 0;
}


unsigned long f(unsigned long n){
    if (n == 1){
        return n = 1;
    }else if (n == 2){
        return n = 1;
    }else{
        return n = f(n - 1) + f(n - 2);
    }
}