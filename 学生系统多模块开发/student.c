//
//  student.c
//  07-学生系统多模块开发
//
//  Created by Ryazan on 2022/12/14.
//

#include "student.h"

Student students[NUM] = {
{1,"jack",18,GenderMale,100},
{2,"rose",21,GenderFemale,45},
{3,"lily",26,GenderFemale,23},
{4,"jim ",12,GenderMale,89},
{5,"poly",3,GenderMale,67},
{6,"meimei",19,GenderFemale,89},
{7,"likai",31,GenderMale,88},
{8,"xiaoQi",45,GenderMale,12},
{9,"aDong",29,GenderMale,76},
{10,"zhangS",35,GenderMale,91},
};				// 默认有10个学生

int arrayStudents = 10;				//数组内的学生总数
