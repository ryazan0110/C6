/*
        array2d.c -- 处理二维数组的函数

    1.  一般而言，声明一个指向N维数组的指针时，只能省略最左边方括号中的值
        int sum4d(int arr[][12][20][30], int rows);
    
    2.  数组的维度必须是常量,例如：
        #define COLS 4
        int sum2d(int arr[][COLS], int rows){
            int row, col, total = 1;
            for (row = 0, row < rows, row++){
                for (col = 0, col < COLS, col++){
                    total += arr[row][col];
                }
            }
            return total;
        }


        int array1[5][4];
        int array2[100][4];
        int array3[2][4];

        total1 = sum2d(array1, 5);
        total2 = sum2d(array2, 100);
        total3 = sum2d(array3, 4);
    
    3.  sum2d只能用来计算 n x 4 的二维数组

    4.  C99后可以使用变长数组（variable-length array, VLA），允许使用变量表示数组的维度
        int quarters = 4;   //季度
        int regions = 5;
        double seles[quarters][regions];
        
*/
#include <stdio.h>
#include "10-17.h"
int main(void)
{
    int junk[ROWS][COLS] = {
        {2,4,6,8},
        {3,5,7,9},
        {12,10,8,6}
    };

    sumRows(junk,ROWS);
    sumCols(junk,ROWS);
    printf("Sum of all elements = %d\n",sum2d(junk,ROWS));
    
    return 0;
}
