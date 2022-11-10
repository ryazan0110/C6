#include <stdio.h>
#define SEC_PRE_MIN 60
int main(void){
    double min,total_sec;
    int transfer_sec;
    printf("Enter min:");
    while (min > 0)
    {
        scanf("%lf",&min);
        total_sec = min * SEC_PRE_MIN;
        transfer_sec = (int)total_sec % SEC_PRE_MIN;
        printf("%.2lf min ,It's equal %d min %d sec.\n",min,(int)min,transfer_sec);
    }
    return 0;
}