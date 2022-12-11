/*
    dyn_arr.c -- 动态分配数组
    1.  malloc() 把内存块的地址赋值给指针 *ptd
        然后可以数用数字名的方法使用ptd[]
    2.  如果分配失败，可以调用exit()结束程序
    3.  exit(EXIT_FAILURE) 表示程序异常终止
        exit(EXIT_SUCCESS) 表示普通程序的结束 -- 相当于 0

*/
# include <stdio.h>
# include <stdlib.h>
void greeting(){
    printf("***********************\n");
    puts("malloc / free 函数演示");
    puts("请输入需要的数组元素个数：");
}

int main(void){
    double *ptd;
    int max;                // 数组的元素个数
    int subscript = 0;

    greeting();

    //防止 max 出现错误
    if (scanf("%d",&max) != 1 || max == 0)
    {
        puts("输入不正确.");
        exit(EXIT_FAILURE);
    }
    // 将malloc申请的空间赋值
    ptd = (double *)malloc(max * sizeof(double));

    // 防止出现空指针
    if (ptd == NULL)
    {
        puts("内存申请失败： 空指针.");
        exit(EXIT_FAILURE);
    }

    
    puts("输入存取的数值 (q 退出): ");
    while (subscript < max && scanf("%lf",&ptd[subscript]) == 1)
    {
        ++subscript;
    }
    printf("你输入了%d个元素\n",subscript);

    for ( int i = 0; i < subscript; i++)
    {
        printf("ptd[%d] = %.2lf\n",i,ptd[i]);
    }
    puts("结束!\n");
    free(ptd);
    return 0;
}