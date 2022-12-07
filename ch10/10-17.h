#include <stdio.h>
#define ROWS 3  //行数量
#define COLS 4  //列数量

void sumRows(int ar[][COLS], int rows);
void sumCols(int [][COLS], int);        // 省略形参名，没问题
int sum2d(int(*ar)[COLS], int rows);     // 另一种语法

void sumRows(int arr[][COLS], int rows){
    int row;
    int col;
    int total;

    for ( row = 0; row < rows; row++)
    {
        total = 0;
        for (col = 0; col < COLS; col++)
        {
            total += arr[row][col];
        }
        printf("row %d: sum = %d\n",row,total);
    }
}
void sumCols(int arr[][COLS], int rows){
    int row;
    int col;
    int total;

    for ( row = 0; row < rows;row++)
    {
        total = 0;
        for ( col = 0; col < COLS; col++)
        {
            total += arr[row][col];
        }
        printf("row %d: sum = %d\n",row,total);
    }
}
int sum2d(int arr[][COLS], int rows){
    int row;
    int col;
    int total = 0;
    for (row = 0; row < rows; row++)
    {
        for (col = 0; col < COLS; col++)
        {
            total += arr[row][col];
        }
    }
    return total;
}