#include <stdio.h>
#define SEC_PRE_MIN 60
int main(void){
    int number;
    printf("Enter number:");
    scanf("%d",&number);
    
    if (number <= 0){
        printf("Int numbers can't great or equal of 0!\n");
    }else{
        for(int i=0;i < 11;i++)
        {
            printf("%d\n",number);
            ++number;
        }
    }
    
    return 0;
}