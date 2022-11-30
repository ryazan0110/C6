/* echo_eof.c -- 重复输入 */
#include <stdio.h>
int main(void)
{
     char ch;
     while ( (ch = getchar()) != EOF)
     {
          putchar(ch);
     }
     
     return 0;
}