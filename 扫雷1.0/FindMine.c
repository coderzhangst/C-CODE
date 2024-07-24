#include "game.h"
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col-COUNT)
	{
		
		//DisplayBoard(mine, ROW, COL);//作弊模式：)
		printf("输入排查雷的坐标 x y :>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("这是雷，很遗憾游戏结束\n");
				DisplayBoard(mine, ROW, COL);
				Sleep(3000);
				system("cls");
				break;
			}
			else
			{
				win++;
				system("cls");
				int sum = GetMineCount(mine, x, y);//t统计去心九宫格雷的个数
				show[x][y] = sum + '0';
				DisplayBoard(show, ROW, COL);
				printf("\n还要排查%d个位置", row * col - COUNT);
			}
		}

		else
		{
			printf("输入有误，重新输入\n");
		}

	}
	if (win== row * col - COUNT)
		printf("赢了\n");
}