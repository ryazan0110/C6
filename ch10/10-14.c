# include <stdio.h>
# include "10-14.h"

int main(void){
    double dip[SIZE] = { 20.0, 17.66, 8.2, 15.3, 22.22 };
    printf("The original array:\n");
    showArray(dip,SIZE);
    multArray(dip, SIZE, 2.5);
    printf("The dip array after calling multArray():\n");
    showArray(dip,SIZE);
    return 0;
}