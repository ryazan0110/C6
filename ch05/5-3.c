/* golf.c -- 高尔夫锦标赛记分卡 */
/* 赋值 */
// gcc 5-3.c -o 5-3
#include <stdio.h>
int main(void){
    int jane,tarzan,cheeta;
    cheeta = jane = tarzan = 68;
    printf("                  cheeta   tarzan    jane\n");
    printf("First round score %4d %8d %8d\n",cheeta,tarzan,jane);
    
    return 0;
}
