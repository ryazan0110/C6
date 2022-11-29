//postage.c -- 顺丰邮资
//
#include <stdio.h>
int main (void){
    const int FIRST_KG = 12;    //省内首重12元
    const int NEXT_KG = 2;          //超重每公斤2元
    int Kilograms ,cost;

    printf("Kilograms cost\n");
    for(Kilograms = 1,cost = FIRST_KG; Kilograms <= 16; Kilograms++,cost += NEXT_KG){
        printf("%4dkg %6d¥\n",Kilograms,cost);
    }

    return 0;
}
