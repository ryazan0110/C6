//
//  student.h
//  07-学生系统多模块开发
//
//  Created by Ryazan on 2022/12/14.
//

#ifndef student_h
#define student_h

#include <stdio.h>
#include "Header.h"



typedef enum{
	GenderMale,
	GenderFemale
} Gender;			//性别枚举
typedef struct{
	int id;			// 学生编号
	char *name;		// 学生姓名
	int age;		// 学生年龄
	Gender gender;	// 学生性别
	int score;		// 学生分数
}Student;			//学生结构体



									//全部变量区域
extern Student students[NUM];
extern int arrayStudents;








#endif /* student_h */
