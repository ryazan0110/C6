# 什么是数组？

## 数组声明


    /* 一些数组声明*/
    int main(void)
    {
        float candy[365];      /* 内含365个float类型元素的数组 */
        char code[12];         /*内含12个char类型元素的P数组*/
        int states[50];        /*内含50个int类型元素的数组 */
        ...
    }

  
## 数组
### 初始化


    /* 一些数组声明*/
    int main(void)
    {
        float candy[365];      /* 内含365个float类型元素的数组 */
        char code[12];         /*内含12个char类型元素的P数组*/
        int states[50];        /*内含50个int类型元素的数组 */
        ...
    }

  

- 使用数组前必须初始化它
  - 未初始化状态
  
    #define SIZE 4
    int no_data[SIZE];  // 未初始化数组

- 当初始化列表中的值少于数组元素个数时
      
      int some_data[SIZE] = { 1492, 1066 };
      for (i = 0; i < SIZE; i++){
        printf("%2d%14d\n", i, some_data[i]);
      }
        
            
        i some_data[i]
        0         1492
        1         1066
        2            0
        3            0

    - 编译器会将剩余元素初始化为0
  - 当初始化列表的项数多于数组元素个数
    - int array[1] = {1,2,3,4,5,6,7,8,9,10};
    - 编译器会显示错误
- 使用指定初始化
  - int days[MONTHS] = { 0, 1, [4] = 4, 30, 31, [1] = 29 };
    - 在[4]初始化为 31后，30、31会被初始化为[4]之后的数，也就是[5] [6]
- 给数组元素赋值
  - C 不允许数组作为一个单元赋值给另一个数组
  
     int oxen[SIZE] = {5,3,2,8};     /* 初始化没问题 */
     int yaks[SIZE];
     yaks = oxen;                    /* 不允许 */
     yaks[SIZE] = oxen[SIZE];        /* 数组下标越界 */
     yaks[SIZE] = {5,3,2,8};         /* 不起作用 */


### 数组越界
- 
- 使用越界的数组下标，会导致程序改变其他变量的值
- 数组元素的编号从0开始，所以最好声明数组时，使用常量符号来表示数组的大小
        #define SIZE 4
        int main(void)
        {
            int arr[SIZE];
            for (i = 0; i < SIZE; i++)
            ....

## 主数组
- float rain[5][12]; // 内含5个数组元素的数组，每个数组元素内含12个float类型的元素

### 遍历数组
1.  
    for (year = 0, total = 0; year < YEARS; year++)
    {// 处理每一年的数据
        for (month = 0, subtot = 0; month < MONTHS; month++)
        {
            ... // 处理每月的数据
        }   
        ... //处理每一年的数据
    }

    - **在 year 不变的情况下，遍历 month**
    - 这种循环用于处理二维数组时
      - 一个循环处理数组的第1个下标，另一个循环处理数组的第2个下标
2.  
    for (month = 0; month < MONTHS; month++)
    { // 处理每月的数据
        for (year = 0, subtot =0; year < YEARS; year++)
        {
            ... // 处理每年的数据
        }
        ... // 处理每月的数据
    }

    - **在 month 不变的情况下，遍历 year**
    - 这种循环用于处理二维数组时
      - 一个循环处理数组的第2个下标，另一个循环处理数组的第1个下标
- 每执行一次外层循环，就完整遍历一次内层循环

### 指针与数组
#### 数组名是该数组首元素的地址
flizny == &flizny[0]; 

1. 数组指针 + 1
  - 意味着是下一个元素的地址