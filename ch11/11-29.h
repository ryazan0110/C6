#include <stdio.h>
#include <string.h>
#define SIZE 81             // 限制字符串长度，包括\0
#define maxInputLine 20     // 可读入的最多行数
#define HALT ""             // 空字符停止输入

/*字符串排序函数*/
void stsrt(char *strings [], int num)
{
    char *temp;
    int top,seek;

    for ( top = 0; top < num - 1; top++)
    {
        for (seek = top + 1; seek < num; seek++)
        {
            if (strcmp(strings[top], strings[seek]) > 0)
            {
                temp = strings[top];
                strings[top] = strings[seek];
                strings[seek] = temp;
            }
        }
        
        
        
    }
}
char *s_gets(char *st, int n)
{
    char *ret_val;
    int i = 0;
    
    ret_val = fgets(st,n,stdin);
    if (ret_val)
    {
        while (st[i] !='\n' && st[i] !='\0')
        {
            i++;
        }
        if (st[i] == '\n')
        {
            st[i] = '\0';
        }
        else
        {
            while (getchar() != '\n')
            {
                continue;
            }
        }
    }   
    return ret_val;
}