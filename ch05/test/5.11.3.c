// 18 days are 2 weeks ,4 days
#include <stdio.h>
#define WEEKDAYS 7
int main(void){
    int number;
    printf("Enter days:");
    scanf("%d",&number);
    
    int week,day;
    week = number / WEEKDAYS;
    day = number % WEEKDAYS;
    printf("%d days are %d weeks ,%d days.\n",number,week,day);
    // if (number <= 0){
    //     printf("Int numbers can't great or equal of 0!\n");
    // }else{
    //     for(int i=0;i < 11;i++)
    //     {
    //         printf("%d\n",number);
    //         ++number;
    //     }
    // }
    
    return 0;
}