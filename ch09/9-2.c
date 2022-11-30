// lethead2.c
// 创建一个在一行打印40个星号的函数，
// 并在一个打印表头的程序中使用该函数
#include <stdio.h>
#include <string.h>                     //导入strlen
#define NAME "GIGATHINK, INC."
#define ADDRESS "101 Megabuck Plaze"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40
#define SPACE ' '

void show_n_char(char ch,int num);
int main(void)
{
    int spaces;
    show_n_char('*',WIDTH);
    putchar('\n');
    show_n_char(SPACE,12);
    printf("%s\n",NAME);

    spaces = (WIDTH - strlen(ADDRESS)) / 2 ;
    show_n_char(SPACE,spaces);
    printf("%s\n",ADDRESS);


    show_n_char(SPACE,( (WIDTH - strlen(PLACE)) / 2 ));
    printf("%s\n",PLACE);
    show_n_char('*',WIDTH);


    return 0;
}

void show_n_char(char ch,int num){
    int count;
    
    for ( count = 1; count < num; count++)
    {
        putchar(ch);
    }
}