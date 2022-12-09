/*
    local_static.c -- 使用局部静态变量

*/
# include <stdio.h>

void tryStatic(void);
int main(void){
    int count;
    for ( count = 1; count <= 3; count++)
    {
        printf("Here comes iteration: %d\n",count);
        tryStatic();
    }
    
    
    return 0;
}
void tryStatic(void){
    int fade = 1;
    static int stay = 1;        // 函数结束后内存空间不会被擦除

    printf("fade = %d and stay = %d\n",fade++,stay++);
}