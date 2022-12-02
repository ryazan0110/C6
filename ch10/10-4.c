/* day_mon2.c -- 让编译器计算元素个数*/
# include <stdio.h>

int main(void){
    const int days[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int index;

    int Power = sizeof(days) / sizeof(days[0]);
    printf("sizeof(days) = %zd = (int)%zd * (power)%d \n",
        sizeof(days),sizeof(days[0]),Power);  //   sizeof(days) = 48
    for ( index = 0; index < Power; index++)
    {
        printf("Month %2d has %d days.\n",index+1,days[index]);
    }
    
    return 0;
}