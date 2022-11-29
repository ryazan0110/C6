
/*summing.c -- 根据用户键入的证书求和*/
/*pseudocode 伪代码*/
#include <stdio.h>


int main (void){
    long num,sum = 0L;
    int status;

    printf("Please enter an integer to be summed ");
    printf("(q to quit):");
    status = scanf("%ld",&num);
    while (1 == status) /* 检查 scanf的返回值是否为1 —— 如果成功写入，就会返回1 */
    {
        sum = sum + num;
        printf("Please enter next integer (q to quit):");
        status = scanf("%ld",&num);/* 将scanf的‘函数返回值’，赋予status */
    }
    printf("Those integers sum to %ld.\n",sum);

    return 0;
}
