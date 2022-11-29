// cypher1.c -- 更改输入，空格不变
#include <stdio.h>
#define SPACE ' '

int main(void){

    char ch;        
    while ((ch = getchar()) != '\n')      //读取一个字符,且不是换行符时,获取下一个字符
    {
        if (ch == SPACE) {  //留下空格
            putchar(ch);    //该字符不变
        }else {
            putchar(ch+1);  //改变其他字符
        }
    }
    putchar(ch);            //打印换行符

    return 0;
}