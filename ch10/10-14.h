# include <stdio.h>
# define SIZE 5

//显示数组的内容
void showArray( const double *ar, int n){
    int i;

    for ( i = 0; i < n; i++)
    {
        printf("%8.3f",ar[i]);
    }
    printf("\n");
    
}


//把数组的每个元素乘以相同的值
void multArray( double ar[], int n, double mult){
    int i;
    for ( i = 0; i < n; i++)
    {
        ar[i] *= mult;
    }
    
}   