//
//  add.c
//  07-学生系统多模块开发
//
//  Created by Ryazan on 2022/12/14.
//

#include "add.h"


void addStudent(){
	//1
	//  输入要新增的学生信息
	//  编号自动生成

	//1.1 生成编号
	int id = students[arrayStudents-1].id + 1;

	//1.2 输入姓名
	//	  使用fgets函数将最后一位变成 \0
	//
	//	  【iOS开发基础班+就业班（100天完整版）之基础班1：C语言学习（14天）】 【精准空降到 03:10】 https://www.bilibili.com/video/BV1GJ411T7Fz/?p=318&share_source=copy_web&vd_source=4145b34856f70b75f02e15246eef0fbf&t=190
	//
	//
	printf("请输入新增学生的姓名：");
	char name0[10];
	rewind(stdin);								//如果不清空缓存区，就会发生异常

	fgets(name0, 10, stdin);
	size_t len = strlen(name0);
	if (name0[len - 1] == '\n')
	{
		name0[len - 1] = '\0';
	}


	char *name = calloc(len+1, sizeof(char));	//name0属于局部变量
	strcpy(name, name0);						//需要将(临时变量)name0 拷贝到 (堆区)name
	//free(name);

	//1.3 请输入年龄
	printf("请输入年龄：");
	int age = 0;
	scanf("%d",&age);

	//1.4 请输入性别
	printf("请输入性别( O--> 男, 1-->女)：");
	int gender = 0;
	scanf("%d",&gender);

	//1.5 请输入成绩
	printf("请输入成绩：");
	int score = 0;
	scanf("%d",&score);


	//2 创建结构体变量
	Student stu = {id,name,age,gender,score};

	//3 将结构体添加到students数组
	//	需要防止出现存储溢出的情况
	students[arrayStudents] = stu;
	printf("students[arrayStudents].name = %s\n",students[arrayStudents].name);
	arrayStudents++;


}
