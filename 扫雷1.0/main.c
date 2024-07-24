
#include "game.h"
int main()
{
	int tmp = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();//调用菜单函数
		scanf("%d", &tmp);
		switch (tmp)
		{
		case 2:
			break;
		default:
		{
			printf("输入错误，重新选择！\n");
			Sleep(1000);
			system("cls");
			break;
		}
		  case 1:
		  {
			  system("cls");
			  game();
			  break;
		  }

		}

	} 
	while (tmp != 2);
	return 0;
}

