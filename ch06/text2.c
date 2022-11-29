#include <stdio.h>

long number(int x);
int main(void)
{
    int x;
    scanf("%d",&x);
     number(x);
     return 0;
}

long number(int x){
    long number;
    number = x * x;
    printf("%d ^2 = %ld",x,number);
    return number;
}