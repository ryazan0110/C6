// colddays.c -- 找出0度以下的天数

#include <stdio.h>
int main(void){
    const int FREEZING = 0 ;
    float temerature;
    int allDays = 0;
    int coldDays = 0;
    printf("Enter the list of daily low temperatures.\n");
    printf("Use Celsius, and enter q to quit.\n");
    while (1 == scanf("%f",&temerature))
    {
        allDays++;
        if (temerature < FREEZING)
        {
            coldDays++;
        }
    }
    if (0 == allDays)
    {
        printf("No data entered!\n");
    }else {
        printf("%d days total:%1.1f%% were below freezing.\n",allDays,100.0 * (float) coldDays / allDays);
    }
    

    return 0;
}