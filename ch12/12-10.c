/*
    r_drive1.c -- 测试 rand1() 和 srand1()

*/
# include <stdio.h>
# include <stdlib.h>
# include "12-9.h"

int main(void){
    int count;
    unsigned seed;

    printf("Please enter your choice for seed.\n");
    while (scanf("%u",&seed) == 1)
    {
        srand1(seed);
        for ( count = 0; count < 5; count++)
        {
            printf("%d\n",rand1());
        }
        printf("Please enter next seed (q to quit):\n");
    }
    printf("Done.\n");
    
    return 0;
}