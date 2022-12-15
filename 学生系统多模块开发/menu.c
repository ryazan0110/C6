//
//  menu.c
//  07-学生系统多模块开发
//
//  Created by Ryazan on 2022/12/14.
//

#include "menu.h"


int showMenu(){
	// 1.显示菜单
	printf("*********************************\n");
	printf("     欢 迎 使 用 学 生 管 理 系 统   \n");
	printf("         1. 查 询 学 生            \n");
	printf("         2. 新 增 学 生            \n");
	printf("         3. 删 除 学 生            \n");
	printf("         4. 修 改 学 生            \n");
	printf("         5. 退 出 系 统            \n");
	printf("*********************************\n");
	//2.接收用户的选择
	printf("请输入你的选择：");
	int userSelect = 0;
	scanf("%d",&userSelect);
	printf("\n你的选择是: %d\n",userSelect);

	return  userSelect;
}
