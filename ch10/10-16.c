// zippo2.c -- 通过指针获取zippo 的值
/*
    zippo[m][n] == *(*(zppo + m) + n)
       pz[m][n] == *(*(pz + m) + n)


*/
# include <stdio.h>

int main(void){
    int zippo[4][2] = { { 2, 4 },{ 6, 8 },{ 1, 3 },{ 5, 7 } };
    int (*pz)[2];
    pz = zippo;
    printf("    pz = %p,     pz + 1 = %p\n",pz,pz + 1);
    printf(" pz[0] = %p,  pz[0] + 1 = %p\n",pz[0],pz[0] + 1);
    printf("   *pz = %p,    *pz + 1 = %p\n",*pz,*pz + 1);
    printf("                           zippo[0][1] = %p\n",&zippo[0][1]);
    printf("                           zippo[1][0] = %p\n",&zippo[1][0]);
    printf("\n \n");
    printf("    pz[0][0] = %d\n",pz[0][0]);
    printf("      *pz[0] = %d\n",*pz[0]);
    printf("        **pz = %d\n",**pz);
    printf("    pz[2][1] = %d\n",pz[2][1]);
    printf("*(*(pz+2)+1) = %d\n",*(*(pz+2)+1));
    printf("\n");
    return 0;
}