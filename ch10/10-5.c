# include <stdio.h>

int main(void){
    const int MONTHS = 12;
    int days[MONTHS] = {31,28,[4] = 31, 30, 31, [2] = 29};

    for (int i = 0; i < MONTHS; i++)
    {
        printf("%2d %d \n",i,days[i]);
    }
    
    return 0;
}