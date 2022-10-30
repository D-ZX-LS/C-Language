#define _CRT_SECURE_NO_WARNINGS 1

//test.c测试游戏逻辑
//三子棋

#include"game.h"

void menu()
{
	printf("***********************************\n");
	printf("**********    1.play    ***********\n");
	printf("**********    0.exit    ***********\n");
	printf("***********************************\n");
}

void game()
{
	//存储数据 - 二维数组
	char board[ROW][COL];
	//初始化棋盘 - 初始化为空格
	InitBoard(board,ROW,COL);
	//打印棋盘 - 本质是打印数组
	DisplayBoard(board,ROW,COL);
	char ret = 0;//接受游戏状态
	while (1)
	{
		//玩家走子
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断玩家是否赢得游戏
		ret=IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
		//电脑走子
		ComputerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		//判断电脑是否赢得游戏
		ret=IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*')
		printf("YOU WIN\n");
	else if (ret == '#')
		printf("YOU FAILED\n");
	else
		printf("平局\n");
	DisplayBoard(board, ROW, COL);
}

int main()
{
	int intput = 0;
	srand((unsigned int) time(NULL));
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &intput);
		switch (intput)
		{
		case 1:
			printf("三子棋游戏\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择：\n");
			break;
		}
	} while (intput);
	return 0;
}