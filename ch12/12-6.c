/*
    partb.c -- 程序剩余部分
    与 parta.c 一起编译

*/
# include <stdio.h>

extern int gameCount;               // 引用式声明，外部链接

static int total = 0;           // 静态定义，内部链接

//void accumulate(int k); 
void accumulate(int k){
    static int subtotal = 0;    // 静态，无链接

    if (k <= 0)
    {
        printf("\n");
        printf("game loop cycle: %d\n",gameCount);
        printf("subtotal: %d; total: %d\n",subtotal,total);
        subtotal = 0;
    }
    else
    {
        subtotal += k;
        total += k;
    }
}