#include <stdio.h>


int main (void){
    char F = 'A';
    for (int i = 1; i <= 6; i++)
    {
        for (int j = 0; j < i; j++,F++)
        {
            printf("%c",F);
        }
        printf("\n");
    }
    
    return 0;
}
