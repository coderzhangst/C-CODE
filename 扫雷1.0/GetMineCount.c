#include "game.h"
int GetMineCount(char mine[ROWS][COLS],int x,int y)
{
	return mine[x][y + 1] + mine[x][y - 1] + mine[x - 1][y] + mine[x + 1][y] + mine[x + 1][y + 1] + mine[x - 1][y - 1] + mine[x - 1][y + 1] + mine[x + 1][y - 1] - 8 * '0';
}