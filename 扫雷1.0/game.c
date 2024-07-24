#include "game.h"
void game()
{
	char mine[ROWS][COLS] = { 0 };//定义布雷数组
	char show[ROWS][COLS] = { 0 };//定义显示玩家排雷的状态的数组
	InitBoard(mine, ROWS, COLS, '0');//初始化布雷数组
	InitBoard(show, ROWS, COLS, '?');//初始化显示玩家排雷的状态的数组
	SetMine(mine, ROW,COL);//布雷
	DisplayBoard(show, ROW, COL);//打印显示玩家排雷的状态的数组
	FindMine(mine,show,ROW,COL);//玩家找雷
}
