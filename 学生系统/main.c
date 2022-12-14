//
//  main.c
//  05-学生系统
//
//  Created by Ryazan on 2022/12/13.
//
/*
	1.显示操作菜单，并接收用户输入的数值





 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Header.h"

int main(int argc, const char * argv[]) {

	while (1)
	{
		
		//1.显示操作菜单，并接收用户输入的数值
		int uesrSelect = showMenu();

		//2.根据用户的选择,做对应的操作
		switch (uesrSelect) {
			case 1:
				//查询
				query();
				break;
			case 2:
				//新增
				addStudent();
				break;
			case 3:
				//删除
				deleteStudent();
				break;
			case 4:
				//修改
				modifystudent();
				break;
			case 5:
				//退出
				return 0;
				break;
			default:
				//结束程序
				printf("输入错误");
				exit(EXIT_FAILURE);
				break;
		}

	}
	
	return 0;
}

//commond + alt + 左箭头 隐藏函数
