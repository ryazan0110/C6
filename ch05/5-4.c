/* squares.c -- 计算1～20的平方 */
//  gcc 5-4.c -o 5-4
#include <stdio.h>
int main(void){
    int num = 0;
    while (num++ < 20)
    {
        /* code */
        printf("%4d ^2 =  %13d\n",num,num * num);

    }
    return 0;
}