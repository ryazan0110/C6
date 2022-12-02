// animals.c -- 使用switch语句
#include <stdio.h>
#include <ctype.h>


int main(void){
    char ch;
    printf("Give me a letter of the alphabet, and I will give an animal name\n");
    printf("beginning with that letter.\n");
    printf("Please type in a letter; type # to end my act.\n");
    
    while ((ch = getchar()) != '#')
    {
        if ('\n' == ch)
        {
            continue;
        }
        if (islower(ch))
        {
            switch (ch)
            {
            case 'a':
                printf("agrgali, a wild sheep of Asia.\n");
                break;
            case 'b':
                printf("babirusa, a wild pig of Malay.\n");
                break;
            case 'c':
                printf("coati, racoonlike mammal.\n");
                break;
            case 'd':
                printf("desman, aquatic, molelike critter.\n");
                break;
            case 'e':
                printf("chidna, the spiny anteater.\n");
                break;
            case 'f':
                printf("fisher, brownis marten.\n");
                break;
            
            default:
                printf("That's a stumper!\n");
            }
        }
        else
        {
            printf("I recognize only lowercase lettrers.\n");
        }
        while (getchar() != '\n')    //跳过输入行的剩余部分
        {
            continue;
        }
        
        printf("Please type another letter or a #.\n");
        
    }
    printf("Bye!\n");

    return 0;
}