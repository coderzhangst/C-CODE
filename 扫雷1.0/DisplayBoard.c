#include "game.h"
void DisplayBoard(char board[ROWS][COLS],int row,int col)
{
	printf("-------99ɨ��-------\n");
	printf("0 ");
	for (int i = 1; i <= row; i++)
	{
		printf("%d ", i);//��ӡ��
	}
	printf("y");
	printf("\n");
	for (int i = 1; i <= row; i++)
	{
		printf("%d ", i);//��ӡ��
		for (int j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("x");
	printf("\n--------------------\n");
}