/* whear.c —— 指数增长 */
//  gcc 5-5.c -o 5-5
#include <stdio.h>
#define SQUARES 64          //棋盘中的方格数

int main(void){
    const double CROP = 2e16;   //世界小麦年产谷粒数
    double current,total;
    int count = 1;

    printf("square     grains       total     ");
     printf("fraction of \n");
     printf("           added        grains    ");
     printf("world total\n");
    total = current = 1;        /* 从1 颗谷粒开始 */
    printf("%4d %13.2e %12.e %12.2e\n",count,current,total,total / CROP);
    while (count < SQUARES)
    {
        count = count + 1;
        current = 2.0 * current;    /* 下一个方格鼓励翻倍 */
        total = total + current;    /* 更新总数 */
        printf("%4d %13.2e %12.2e %12.2lf%%\n",count,current,total,(total / CROP) * 100);
    }
    printf("That's all.\n");
    
    // 尝试在接近 世界产量100% 时停止
    // double currentFraction = 0.0;
    // double fractionOfWorldTotal = (total / CROP) * 100;
    // while (currentFraction < fractionOfWorldTotal)
    // {
    //     count = count + 1;
    //     current = 2.0 * current;    /* 下一个方格鼓励翻倍 */
    //     total = total + current;    /* 更新总数 */
    //     printf("%4d %13.2e %12.2e %12.2lf%%\n",count,current,total,fractionOfWorldTotal);
    // }
    // printf("That's all.\n");
    




    printf("");




    printf("");
    return 0;
}