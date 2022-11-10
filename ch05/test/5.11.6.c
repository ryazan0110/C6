/* addemup.c 平方 */
#include <stdio.h>
int main(void){
    int count = 0,sum = 0;
    printf("Enter the number of days you work: ");
    scanf("%d",&count);
    while (count > 0)
    {
        
        sum = sum + count * count;
        count--;
    }
    
    printf("You earned $%d total.\n", sum);
    return 0;
}