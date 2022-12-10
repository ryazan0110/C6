/*
    r_diver0.c -- 测试rand0()函数

*/
# include <stdio.h>
# include "12-7.h"

extern unsigned int rand0(void);
int main(void){
    int count;

    for ( count = 0; count < 5; count++)
    {
        printf("%d\n",rand0());
    }
    
    
    return 0;
}