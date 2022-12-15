//
//  main.c
//  05-学生系统
//
//  Created by Ryazan on 2022/12/13.
//
/*
	1.显示操作菜单，并接收用户输入的数值





 */

#include "Header.h"
#include "student.h"
#include "menu.h"
#include "query.h"
#include "add.h"
#include "delet.h"
#include "modify.h"


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
