#include "game.h"
void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = 10;
	while (count)
	{
		int x = rand() % row + 1;//x:1~9
		int y = rand() % col + 1;//y:1~9
		if (board[x][y] != '1')
		{
			board[x][y] = '1';
			count--;
		}
	}

}