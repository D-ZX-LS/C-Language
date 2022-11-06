#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void mune()
{
	printf("********************************\n");
	printf("**********   1.play   **********\n");
	printf("**********   0.exit   **********\n");
	printf("********************************\n");
}

void game()
{
	char mine[ROWS][COLS];//存放布置好雷的信息
	char show[ROWS][COLS];//存放排查出雷的信息
	//初始化棋盘
	InitBoard(mine,ROWS,COLS,'0');
	InitBoard(show,ROWS,COLS,'*');

	//打印棋盘
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);

	//布置雷
	SetMine(mine,ROW,COL);
	//DisplayBoard(mine, ROW, COL);

	//排查雷
	FindMine(mine,show,ROW,COL);
}

int main()
{
	srand((unsigned int)time(NULL));

	int intput = 0;
	do
	{
		mune();
		printf("请选择：");
		scanf("%d", &intput);
		switch (intput)
		{
		case 1:
			//printf("扫雷游戏\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (intput);
	return 0;
}