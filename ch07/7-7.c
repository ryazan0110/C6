// wordcnt.c -- 统计字符数、单词数、行数
#include <stdio.h>
#include <ctype.h>          //为isspace()函数提供原型
#include <stdbool.h>        //为bool、true、false提供定义
#define STOP '|'
int main(void){
    char ch;                // 读入字符
    char prevCh;            // 保存前一个字符
    long n_chars = 0L;      // 字符数
    int n_lines = 0;        // 行数
    int n_words = 0;        // 单词数
    int p_lines = 0;        // 特殊行数（不完整的行数，也就是最后一行）
    bool inword = false;    // 如果ch在单词中，inword 等于 true （确认单词）

    printf("Enter text tot be analyzed (| to terminate): \n");
    prevCh = '\n';          // 用于识别完整的行

    while ((ch = getchar()) != STOP)
    {
        n_chars ++;
        if (ch == '\n')
        {
            n_lines ++;     //统计行
        }
        if (inword == false && isspace(ch) == false) //ch 不在单词里 且ch 不是‘空格’
        {   //开始一个新的单词
            inword = true;
            //统计单词
            n_words ++;
        }
        if (inword == true && isspace(ch))
        {   //到达单词末尾
            inword = false;
        }
        prevCh = ch;        //保存字符
    }
    if (prevCh != '\n')     //循环结束后，最后的字符不是行尾的话，特殊行+1
    {
        p_lines = 1;
    }
    printf("characters = %ld, worlds = %d, lines = %d.\n",n_chars,n_words,n_lines + p_lines);
    
    return 0;
}