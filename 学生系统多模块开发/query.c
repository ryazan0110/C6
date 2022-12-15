//
//  query.c
//  07-学生系统多模块开发
//
//  Created by Ryazan on 2022/12/14.
//


#include "query.h"

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

void query(){
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
