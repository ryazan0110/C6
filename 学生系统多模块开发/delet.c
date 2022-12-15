//
//  delet.c
//  07-学生系统多模块开发
//
//  Created by Ryazan on 2022/12/14.
//

#include "delet.h"
#include "student.h"

void deleteStudent(void){
	//1. 先输入需要删除的编号
	printf("输入需要删除的编号:");
	int id = 0;
	scanf("%d",&id);

	//2. 在数组中找到对应编号的人
	int deletIndex = -1;
	for (int i = 0; i < arrayStudents; i++) {
		if (students[i].id == id){
			deletIndex = i;
			break;
		}
	}
	if (deletIndex == -1){
		printf("你查找的下标不存在!\n");
		return;
	}

	//3. 将后面的元素往‘上’顶
	for (int i = deletIndex + 1; i < arrayStudents ; i++) {
		students[i-1] = students[i];
	}

	//4. 删除完成后
	arrayStudents--;
}
