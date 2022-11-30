#include <stdio.h>
#include <stdlib.h>
int main(void){

    int ch;
    FILE *fp;
    char fname[50];     //存储文件名


    printf("Enter the name of the file: ");
    scanf("%s",fname);
    fp = fopen(fname,"r");//打开待读取文件
    if (fp == NULL)     //如果无法打开
    {
        printf("Failed to open file.Bye\n");        
        exit(1);        //退出程序
    }
    //get(fp)从打开的文件中获取一个字符
    while ((ch = getc(fp)) != EOF)
    {
        putchar(ch);
    }
    fclose(fp);         //关闭文件

    return 0;
}