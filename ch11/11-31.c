/*
    repeat.c -- 带参数的 main()
    argc -- argument count 参数计数
    argv -- argument value 参数值
*/
# include <stdio.h>

int main(int argc, char *argv []){
    int count;
    printf("The command line has %d arguments",argc - 1);
    for ( count = 1; count < argc; count++)
    {
        printf("%d: %s\n",count, argv[count]);
    }
    printf("\n");
    
    return 0;
}