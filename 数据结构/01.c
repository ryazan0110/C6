#include <stdio.h>
#include <stdlib.h>

/* 循环*/
void PrintN (int N){
    int i ;
    for (i = 1 ;i <=N ;i++){
        printf("%d\n",i);
    }
    return;
}
/*递归*/
void PrintM (int M){
    if (M){
        PrintN(M - 1);
        printf("%d\n",M);
    }
    return;
}
int main(void){
    int N,M;
    printf("请输入整数（循环）");
    scanf("%d",& N);
    printf("循环\n");
    PrintN( N );
    
    printf("请输入整数（递归）");
    scanf("%d",& M);
    printf("递归\n");
    PrintM( M );
    return 0;
}