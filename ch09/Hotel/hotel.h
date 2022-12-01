/* hotel.h -- 符号常量和hotel.c中所有函数的原型*/
#define QUIT 5
#define HOTEL_1 180.00
#define HOTEL_2 225.00
#define HOTEL_3 255.00
#define HOTEL_4 355.00
#define DISCOUNT 0.95

#define STARS "***************************"

//显示选择列表
int menu(void);

//返回预定天数
int getNights(void);

//根据费率、入住天数计算费用
//并显示结果
void showPrice(double rate, int nights);