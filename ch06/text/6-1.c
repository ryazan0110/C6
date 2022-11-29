#include <stdio.h>


int main (void){
    char list[26];
    char a = 'a';
    for (int index = 0; index < 26; index++,a++)
    {
         list[index] = a   ;
    }
    for (int index = 0; index < 26; index++)
    {
        printf("%c",list[index]);
    }
    printf("\n");
    return 0;
}
