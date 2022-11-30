// proto.c -- 使用函数原型
#include <stdio.h>

int imax(int, int);
int main(void){
    printf("The maximum fo %d and %d is %d.\n",3,5,imax(3,5));   
    printf("The maximum of %.1f and %.1f is %d .\n",3.0,5.0,imax(3.0,5.0));
    return 0;
}

int imax(int a, int b){
    return ( a > b) ? a : b;
}