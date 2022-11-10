/* addemup.c ——几种常见的语句 */
//  gcc 5-13.c -o 5-13
#include <stdio.h>
int main(void){
    int count,sum;
    count = 0;
    sum = 1;

    while (count++ < 20)
    {
        printf("%d . sum = %d\n",count,sum);
        sum = sum+  count ;
    }
    
    return 0;
}