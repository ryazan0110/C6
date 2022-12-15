//
//  Header.h
//  Day12-指针
//
//  Created by Ryazan on 2022/12/12.
//

#ifndef Header_h
#define Header_h


#define ROWS 10		// 行
#define COLS 11		// 列，保存为字符串形式,\n换行符留空间
#include <stdio.h>


/**
 * 地图数组，用来保存地图上的每一个格子的类型
 *
 */
static char map[ROWS][COLS] = {
	"##########",
	"#  ####  #",
	"# X####  #",
	"# 0      #",
	"######   #",
	"#   ##   #",
	"#        #",
	"#  #######",
	"#         ",
	"##########"
};



/**
 * 根据map数组打印地图
 *
 */
void showMap(void);

/**
 * 接收输入小人的前进方向
 * @return 前进方向
 */
char enterDirection(void);

/**
 * 根据指定的方向提供下一个坐标
 *
 * @param dir 指定的方向, 	*下一次坐标的行, 	*下一次坐标的列
 */
void getNextPosition(char dir,int currentRow, int currentCol, int *pNextRow, int *pNextCol);

/**
 * 将小人向指定的方向移动
 *
 * @param dir 指定的方向
 */
void movePerson (char dir);

// 小人当前坐标
int personCurrenRow = 3;
int personCurrenCol = 2;





char enterDirection(){

	printf("请输入小人的前进方向 a.左 s.下 w.上 d.右 q.结束游戏\n");
	char dir = 'a';
	rewind(stdin);		// 清空标准输入的缓存区
	scanf("%c",&dir);

	return dir;
}



void showMap(){
	for (int i = 0; i < ROWS; i++) {
		printf("%s\n",map[i]);
	}
}


void getNextPosition(char dir,int currentRow, int currentCol, int *pNextRow, int *pNextCol){

	int nextRow = 0;
	int nextCol = 0;

	switch (dir) {
		case 'a':
		case 'A':
			// 向左
			nextRow = currentRow;
			nextCol = currentCol - 1;
			break;
		case 'w':
		case 'W':
			// 向上
			nextRow = currentRow - 1;
			nextCol = currentCol;
			break;
		case 'd':
		case 'D':
			// 向右
			nextRow = currentRow;
			nextCol = currentCol + 1;
			break;
		case 's':
		case 'S':
			// 向下
			nextRow = currentRow + 1;
			nextCol = currentCol;
			break;

		default:
			break;
	}
	*pNextRow = nextRow;
	*pNextCol = nextCol;
}




void movePerson (char dir){
	//1. 拿到小人下一个坐标
	//
	int personNextRow = 0;
	int personNextCol = 0;
	getNextPosition(dir, personCurrenRow, personCurrenCol,&personNextRow, &personNextCol);


	//2. 判断小人的坐标是什么
	if(map[personNextRow][personNextCol] == ' '){
		//路
		map[personNextRow][personNextCol] = 'o';
		map[personCurrenRow][personCurrenCol] = ' ';

		//重制坐标
		personCurrenRow = personNextRow;
		personCurrenCol = personNextCol;
	}else if (map[personNextRow][personNextCol] == 'X'){

		//箱子
		//判断能不能推
		int boxNextRow = 0;
		int boxNextCol = 0;
		getNextPosition(dir, personNextRow, personNextCol, &boxNextRow, &boxNextCol);

		//这段代码执行完毕后,boxRow 和 boxCol 就是箱子下一个的坐标
		if (map[boxNextRow][boxNextCol] == ' ') {
			// 箱子下一个是路
			map[boxNextRow][boxNextCol] = 'X';
			// 把箱子的当前位置设置为小人
			map[personNextRow][personNextCol] = 'O';
			// 把小人的当前位置设置为空格
			map[personCurrenRow][personCurrenCol] = ' ';
			// 推完之后 改小人的位置
			personCurrenRow = personNextRow;
			personCurrenCol = personNextCol;
		}



	}
}


#endif /* Header_h */
