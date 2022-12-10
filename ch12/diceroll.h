# include <stdio.h>
# include <stdlib.h>                // 提供rand()函数原型

int roll_count = 0;

static int rollem(int sides)        // 该函数术语该文件私有
{
    int roll;

    roll = rand() % sides + 1;
    ++ roll_count;                  // 计算函数调用次数

    return roll;
}

int roll_n_dice(int dice, int sides)
{
    int total = 0;
    if (sides < 2)
    {
        printf("Need at least 2 sides.\n");
        return -2;
    }
    if (dice < 1)
    {
        printf("Need at least 1 die\n");
    }
    
    for (int d = 0; d < dice; d++)
    {
        total += rollem(sides);
    }
    
    return total;

}