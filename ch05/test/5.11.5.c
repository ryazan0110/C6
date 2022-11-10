/* addemup.c ——几种常见的语句 */
//  gcc 5-13.c -o 5-13
#include <stdio.h>
int main(void){
    int start,sum,days;
    start = 0;
    sum = 1;

    printf("Enter days:");
    scanf("%d",&days);
    while (start++ < days)
    {
        printf("Day%d . sum = %d\n",start,sum);
        sum = sum + start ;
    }
    
    return 0;
}