// lethead1.c
// 创建一个在一行打印40个星号的函数，
// 并在一个打印表头的程序中使用该函数
#include <stdio.h>
#define NAME "GIGATHINK, INC."
#define ADDRESS "101 Megabuck Plaze"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40

void starbar(void);
int main(void)
{
    starbar();
    printf("%s\n",NAME);
    printf("%s\n",ADDRESS);
    printf("%s\n",PLACE);
    starbar();


    return 0;
}

void starbar(void){
    int count;
    for ( count = 1; count < WIDTH; count++)
    {
        putchar('*');
    }
    putchar('\n');
    
}