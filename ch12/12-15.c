/*
    where.c -- 数据被存储在何处？

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int store = 30;
const char *pcg = "String Literal"; // 常量字符串


int main(void){
    int autoStore = 40;
    char autoString[] = "Auto char Array";
    int *pint = (int *)malloc(sizeof(int));
    char *pchar = (char *)calloc(strlen("Dynamic String")+1,sizeof(char));

    *pint = 35;
    strcpy(pchar,"Dynamic String");

    printf("static store: %d at %p\n",store,&store);
    printf("  auto store: %d at %p\n",autoStore,&autoStore);
    printf("       *pint: %d at %p\n",*pint,pint);
    printf("  %s at %p\n",pcg,&pcg);
    printf(" %s at %p\n",autoString,&autoString);
    printf("  %s at %p\n",pchar,pchar);
    printf("   %s at %p\n","Quoted String","Quoted String");
    free(pint);
    free(pchar);

    return 0;
}