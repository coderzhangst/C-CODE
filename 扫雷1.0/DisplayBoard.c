#include "game.h"
void DisplayBoard(char board[ROWS][COLS],int row,int col)
{
	printf("-------99扫雷-------\n");
	printf("0 ");
	for (int i = 1; i <= row; i++)
	{
		printf("%d ", i);//打印行
	}
	printf("y");
	printf("\n");
	for (int i = 1; i <= row; i++)
	{
		printf("%d ", i);//打印列
		for (int j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("x");
	printf("\n--------------------\n");
}