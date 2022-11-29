// do_while.c -- 出口条件循环
// 至少执行一次
#include <stdio.h>
int main (void){
    const int secret_code = 13;
    int code_entered;
    
    do
    {
        printf("please enter secret code number:");
        scanf("%d",&code_entered);
    } while (code_entered != secret_code);
    printf("Congratulations! You are cured!\n");

    return 0;
}
