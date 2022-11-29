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
        for (divisor = 2; (divisor * divisor) <= num; divisor++)
        {
            if ( num % divisor == 0)
            {
                if ((divisor * divisor) != num)
            {
                printf("%lu is divisor by %lu and %lu.\n",num,divisor, num / divisor);
            }else
            {
                printf("%lu = %lu ^ 2",num,divisor);
            }     
            }
        }
        
    }
    
    return 0;
}