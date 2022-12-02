/* rain.c -- 计算每年的总降水量、年平均降水量和5年每月的平均降水量*/
# include <stdio.h>
# define MONTHS 12  //月
# define YEARS 5    //年
int main(void){
    // 用2020 ～ 2024 年的降水量数据初始化数组
    const float rain[YEARS][MONTHS] =
    {
        { 4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6 },
        { 8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3 },
        { 9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4 },
        { 7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2 },
        { 7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2 }
    };

    int year,month;
    float subtotMonth;  // 每年的降水量总和
    float totalYear;    // 全部降水量总计

    printf(" YEAR    RAINFALL  (inches)\n");
    for ( year = 0,totalYear =0; year < YEARS; year++)
    {   
        for ( month = 0,subtotMonth =0; month < MONTHS; month++)
        {
            // 每一年，各月的降水量总和
            subtotMonth += rain[year][month];
        }
        printf("%5d %15.1f\n",2020 + year, subtotMonth);
        
        //  5年的总降水量
        totalYear += subtotMonth;
    }
    printf("\nThe yearly average is %.1f inches.\n\n", totalYear / YEARS);
    printf("MONTHLY AVERAGES:\n\n");
    printf("Jan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec\n");
    
    for ( month = 0; month < MONTHS; month++)
    {       // 每个月的降水量
        for ( year = 0, subtotMonth = 0; year < YEARS; year++)
        {
            subtotMonth += rain[year][month];
        }
        printf("%2.1f ",subtotMonth / YEARS);
    }
    printf("\n");
    
    return 0;
}
