/*
    partb.c -- 程序剩余部分
    与 parta.c 一起编译

*/
# include <stdio.h>

extern int gameCount;               // 引用式声明，外部链接

static int publicTotal = 0;           // 静态定义，内部链接


void accumulate(int k){
    static int subtotal = 0;    // 静态，无链接

    if (k <= 0)
    {
        printf("\n");
        printf("游戏次数(Game loop cycle): %d\n",gameCount);
        printf("统计所有传入此函数的值(Public total): %3d\n",publicTotal);
        printf("累加值 -> n = (n-1) + 1(subtotal): %3d\n",subtotal);
        printf("\n");
        subtotal = 0;
    }
    else
    {
        publicTotal += k;
        subtotal += k;
        
    }
}