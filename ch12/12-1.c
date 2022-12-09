/*
    hiding.c -- 块中的变量
    如果内层块中的声明变量与外层块中的变量同名会怎么？
    - 内存块会隐藏外层块的定义

*/

# include <stdio.h>
int main(void)
{
    int x = 30;
    printf("x in outer block:%d at %p\n",x,&x);
    {
        int x = 77;
        printf("x in inner block:%d at %p\n",x,&x);
    }
    printf("x in outer block:%d at %p\n",x,&x);
    while (x++ < 33)
    {
        int x = 100;
        x++;
        printf("x in while loop %d at %p\n",x,&x);
    }
    printf("x in outer block:%d at %p\n",x,&x);
    

    return 0;
}