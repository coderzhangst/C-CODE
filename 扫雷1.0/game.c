#include "game.h"
void game()
{
	char mine[ROWS][COLS] = { 0 };//���岼������
	char show[ROWS][COLS] = { 0 };//������ʾ������׵�״̬������
	InitBoard(mine, ROWS, COLS, '0');//��ʼ����������
	InitBoard(show, ROWS, COLS, '?');//��ʼ����ʾ������׵�״̬������
	SetMine(mine, ROW,COL);//����
	DisplayBoard(show, ROW, COL);//��ӡ��ʾ������׵�״̬������
	FindMine(mine,show,ROW,COL);//�������
}
