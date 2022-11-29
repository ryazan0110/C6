#include <stdio.h>
#include <stdbool.h>

int main(void){
    unsigned long num;      //待测试数
    unsigned long divisor;  //可能的约数
    bool isPrime;           //素数标记
    printf("Please enter an integer for analysis;");
    printf("Enter q to quit.\n");
    
    while (scanf("%lu",&num) == 1)
    {
        for (divisor = 2,isPrime = true; (divisor * divisor) <= num; divisor++)    //平方根结束（平方根之后的数值都是重复的了）
        {
            if (num % divisor == 0)
            {
                if (divisor * divisor != num)
                {
                    printf("%lu is divisible by %lu amd %lu\n",num,divisor, num /divisor);
                    //printf("divisor^2 = %lu.\n",divisor * divisor);
                }
                else
                {
                    printf("%lu = %lu^2 \n",num,divisor);
                }
                isPrime = false;
                   
            }
        }
    if (isPrime == true)
    {
        printf("%lu is prime.\n",num);
    }
    printf("Please enter another integer for analysis;\n");
    printf("Enter q to quit.\n");
    }
    printf("Bye.\n");
    

    return 0;
}