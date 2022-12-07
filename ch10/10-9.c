/*
    1. *(days + 2) 与 *days + 2完全不同
        前者表示指针加2
        后者表示days元素加2（也就是数组首地址的值加2）
    2. 




*/
# include <stdio.h>
#define MONTHS 12


int main(void){
    int days[MONTHS] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int index;

    for ( index = 0; index < MONTHS; index++)
    {
        printf("Month %2d has %d days([]).\n",index + 1,days[index]);
        printf("Month %2d has %d days.(*)\n",index + 1,*(days + index));

    }
    

    return 0;
}