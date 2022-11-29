#include <stdio.h>



double power(double n,int p){
    double pow = 1; //初始化结果

    for (int i = 1; i <= p; i++)    //定义循环次数
    {
        pow *= n;
    }
    return pow;

}