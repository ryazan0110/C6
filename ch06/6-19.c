// scores_in.c -- 使用循环处理数组
//
#include <stdio.h>
#define SIZE 10
#define PAR 72

int main (void){
    int index,score[SIZE];
    

    printf("Enter %d golf scores:\n", SIZE);
    //读取10个分数
    for ( index = 0; index < SIZE; index++)
    {
        scanf("%d",&score[index]);
    }

    printf("The scores read in are as follows:\n");
    //验证输入
    for (index = 0; index < SIZE; index++)
    {
        printf("%5d",score[index]);
    }
    printf("\n");
    
    //求总分数
    int sum = 0;
    for ( index = 0; index < SIZE; index++)
    {
        sum += score[index];
    }
    //求平均分
    float average;
    average = (float)sum / SIZE;
    printf("Sum of scores = %d, average = %.2f\n", sum, average); 
    printf("That's a handicap of %.0f.\n", average - PAR);
    return 0;
}
