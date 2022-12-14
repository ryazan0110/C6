/*
    1. 多维数组中，函数名是地址的地址，必须解引用两次才能获得原始值
    2. 增加数组维数会增加指针的复杂度


*/
# include <stdio.h>

int main(void){
    int zippo[4][2] = { { 2, 4 },{ 6, 8 },{ 1, 3 },{ 5, 7 } };

    printf("    zippo = %p,     zippo + 1 = %p\n",zippo,zippo + 1);
    printf(" zippo[0] = %p,  zippo[0] + 1 = %p\n",zippo[0],zippo[0] + 1);
    printf("   *zippo = %p,    *zippo + 1 = %p\n",*zippo,*zippo + 1);
    printf("                           zippo[0][1] = %p\n",&zippo[0][1]);
    printf("                           zippo[1][0] = %p\n",&zippo[1][0]);
    printf("\n \n");
    printf("    zippo[0][0] = %d\n",zippo[0][0]);
    printf("      *zippo[0] = %d\n",*zippo[0]);
    printf("        **zippo = %d\n",**zippo);
    printf("    zippo[2][1] = %d\n",zippo[2][1]);
    printf("*(*(zippo+2)+1) = %d\n",*(*(zippo+2)+1));
    printf("\n");

    return 0;
}