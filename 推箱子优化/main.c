/*

 ##########
 #  ####  #
 # X####  #
 # 0 	  #
 #######  #
 #  ####  #
 #		  #
 #	 ######
 #
 ##########
 请输入小人的前进方向 a.左 s.下 w.上 d.右 q.结束游戏



 1. 应该将地图上的每一个‘格子的类型’保存起来.
	墙：
	路：
	人：
	箱子：

	并且地图是1个有行有列的表格，所以用二维数组来保存我们的地图是非常合适的了
 2. 游戏的流程

 while(1){
	1). 打印地图
	2). 接收  输入小人的前进方向
	3). 根据小人的前进方向：前进或者推箱子

 }



 */


#include <stdio.h>
#include <stdlib.h>
#include "Header.h"


int main(int argc, const char * argv[]) {
	while (1) {
		// 0). 清屏
		system("clear");
		// 1). 打印地图
		showMap();
		// 2). 接收  输入小人的前进方向
		char dir = enterDirection();
		// 3). 根据小人的前进方向：前进或者推箱子
		if (dir == 'q') {
			puts("程序结束!");
			exit(EXIT_SUCCESS);
		} else {
			movePerson(dir);
		}
	}
	return 0;
}


