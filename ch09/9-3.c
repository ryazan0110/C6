
#include <stdio.h>

int imin(int,int);
int main(void){
    int num1,num2;
    printf("Please enter a pair of integers(q to quit): ");
    while ( scanf("%d %d",&num1,&num2) == 2)
    {
        imin(num1,num2);    
        printf("Please enter a pair of integers(q to quit): ");
    }
    printf("End.\n");
    

    return 0;
}

int imin(int a ,int b){
    int c;  //函数的私有属性

    c = (a < b) ? a : b;
    printf("%d is the min number.\n",c);
    return c;
}