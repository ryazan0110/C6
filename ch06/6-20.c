// powe.c -- 计算数的整数幂
//
#include <ch06.h>
double power(double n,int p);   //n为传入的数，p为幂

int main (void){
    double x,xpow;
    int exp;
    printf("Enter a number and the positive integer power"); 
    printf(" to which\nthe number will be raised. Enter q"); 
    printf(" to quit.\n");
    while (scanf("%lf%d",&x,&exp) == 2) //‘q’与scanf的%lf不匹配，会返回0。类似的，输入2.8 q会使scanf()的返回值为1，循环也会结束
    {
        xpow = power(x,exp);
        printf("%.3g to the power %d is %.5g\n", x, exp, xpow); 
        printf("Enter next pair of numbers or q to quit.\n");
    }
    printf("Hope you enjoyed this power trip -- bye!\n");
    return 0;
}


