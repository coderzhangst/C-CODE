#include "game.h"
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col-COUNT)
	{
		
		//DisplayBoard(mine, ROW, COL);//����ģʽ��)
		printf("�����Ų��׵����� x y :>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("�����ף����ź���Ϸ����\n");
				DisplayBoard(mine, ROW, COL);
				Sleep(3000);
				system("cls");
				break;
			}
			else
			{
				win++;
				system("cls");
				int sum = GetMineCount(mine, x, y);//tͳ��ȥ�ľŹ����׵ĸ���
				show[x][y] = sum + '0';
				DisplayBoard(show, ROW, COL);
				printf("\n��Ҫ�Ų�%d��λ��", row * col - COUNT);
			}
		}

		else
		{
			printf("����������������\n");
		}

	}
	if (win== row * col - COUNT)
		printf("Ӯ��\n");
}