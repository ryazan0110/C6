/* shoes2.c -- 计算多个不同鞋码对应的脚长 */
#include <stdio.h>
#define ADJUST 7.31 //常数
#define SCALE 0.333

int main(void){
    double shoe,foot;

    printf("Shoe size (men's)      foot length\n");
    shoe = 3.0;
    
    //如果忘记改变 鞋子的尺码，shoe 的值就会一直小雨18.5，循环不会停止，就会陷入死循环
    while (++shoe < 18.5){    //while循环开始
        foot = SCALE * shoe + ADJUST;
        printf("%10.3f %15.2f inches\n",shoe,foot);
    }

    printf("If the shoe fits, wear it.\n");
    return 0;
}
