//
//  Header.h
//  05-学生系统
//
//  Created by Ryazan on 2022/12/13.
//

#ifndef Header_h
#define Header_h
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NUM 20								// 学生库最大数量







/******************处理[学生]信息**************/
/**
 *学生性别枚举
 */
typedef enum{
	GenderMale,
	GenderFemale
} Gender;

/**
 *学生结构体
 */
typedef struct{
	int id;			// 学生编号
	char *name;		// 学生姓名
	int age;		// 学生年龄
	Gender gender;	// 学生性别
	int score;		// 学生分数
}Student;
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








/*****************处理[菜单]信息***************/
//1.显示操作菜单，并接收用户输入的数值
/**
 * 显示一级菜单，并接收用户的选择
 * @return 用户输入的值
 */
int showMenu(void);
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


/*****************处理[查询]信息***************/
												//不同查询方法
void queryAll(void);
void queryById(void);
void queryByName(void);
void queryByAge(void);
void queryByGender(void);
void queryByScore(void);
int showQueryMenu(void);						// 2 二级查询菜单
void query(void);								// 1 查询学生

												// 函数定义区域
												// 3 不同查询方法
void queryAll(){
	// 1.打印title (\t代表一个位宽)
	printf("编号\t\t姓名\t\t\t\t年龄\t\t性别\t\t成绩 \n");

	// 2.获取students[]数组的全部信息
	for (int i = 0; i < arrayStudents; i++) {

		// a.单独判断性别
		char *gender = "";
		if(students[i].gender == 0){
			gender = "男";
		}else{
			gender = "女";
		}

		// b.打印全部信息
		printf("%d\t\t%s\t\t\t%d\t\t%s\t\t%d \n",
			   students[i].id,
			   students[i].name,
			   students[i].age,
			   //students[i].gender,
			   gender,
			   students[i].score
			   );
	}


}

void queryById(){

}

void queryByName(){

}

void queryByAge(){

}

void queryByGender(){

}

void queryByScore(){


	// 1.获取成绩区间
	int minNum = 0;
	int maxNum = 0;
	printf("请输入最小成绩:\n");
	scanf("%d",&minNum);

	printf("请输入最大成绩:\n");
	scanf("%d",&maxNum);


	printf("编号\t\t姓名\t\t\t\t年龄\t\t性别\t\t成绩 \n");
	for (int i = 0; i < arrayStudents; i++) {

		// a.获取成绩
		int score = students[i].score;

		// b.比较成绩
		if ( minNum <= score && score <= maxNum){

			// a.单独判断性别
			char *gender = "";
			if(students[i].gender == 0){
				gender = "男";
			}else{
				gender = "女";
			}

			// b.打印全部信息
			printf("%d\t\t%s\t\t\t%d\t\t%s\t\t%d \n",
				   students[i].id,
				   students[i].name,
				   students[i].age,
				   //students[i].gender,
				   gender,
				   students[i].score
				   );

		}
	}


}

int showQueryMenu(){
	// 1.显示二级查询菜单
	printf("*********************************\n");
	printf("     欢 迎 使 用 学 生 管 理 系 统   \n");
	printf("         1. 查询所有学生信息        \n");
	printf("         2. 根据编号查询           \n");
	printf("         3. 根据姓名查询           \n");
	printf("         4. 根据年龄查询           \n");
	printf("         5. 根据性别查询           \n");
	printf("         6. 根据成绩查询           \n");
	printf("*********************************\n");
	//2.接收用户的选择
	printf("请输入要进行的查询编号：");
	int querySelect = 0;
	scanf("%d",&querySelect);
	printf("\n你的选择是: %d\n",querySelect);


	return  querySelect;

}						// 2 二级查询菜单

void query(void){
	//(1).接收二级菜单返回值
	int querySelect =  showQueryMenu();

	//(2).
	switch (querySelect) {
		case 1:
			//查询所有学生信息
			queryAll();
			break;
		case 2:
			//根据编号查询
			//queryById();
			break;
		case 3:
			//根据姓名查询
			//queryByName();
			break;
		case 4:
			//根据年龄查询
			//queryByAge();
			break;
		case 5:
			//根据性别查询
			//queryByGender();
			break;
		case 6:
			//根据成绩查询
			queryByScore();
			break;
		default:
			//结束程序
			printf("输入错误");
			exit(EXIT_FAILURE);
			break;
	}
}							// 1 查询学生











/*****************处理[新增]信息***************/
//新增学生
void addStudent(void);
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


























/*****************处理[删除]信息***************/
//删除学生
void deleteStudent(void);
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




/*****************处理[修改]信息***************/
//修改学生
void modifystudent(void);
void modifystudent(){

}
















#endif /* Header_h */
