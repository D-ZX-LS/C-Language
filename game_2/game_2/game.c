#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROWS; i++)
	{
		for (j = 0; j < COLS; j++)
		{
			board[i][j] = set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("----------扫雷游戏----------\n");
	//打印列号
	for (i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");

	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);//打印行号
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("----------扫雷游戏----------\n");

}

void SetMine(char mine[ROWS][COLS], int row, int col)
{
	//布置雷
	int count = EASY_COUNT;
	while (count)
	{
		//生成随机下标
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		//判断坐标的合法性
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}

static int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	//法一
	//int i = 0;
	//int j = 0;
	//int count = 0;
	//for(i = - 1; i <= 1; i++)
	//{
	//	for (j = - 1; j <= + 1; j++)
	//	{
	//		if (mine[x+i][y+j] == '1')
	//		{
	//			count++;
	//		}
	//	}
	//}
	//return count;
	//法二
	return mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y - 1] - 8 * '0';
}

static int IsWin(char show[ROWS][COLS], int row, int col)
{  
	int i = 0;
	int j = 0;
	int win = 0;
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= col; j++)
		{
			if (show[i][j] == '*' || show[i][j] == '#')//插旗符号 - #
			{
				win++;
			}
		}
	}
	return win;
}

static void Flag(char show[ROWS][COLS],int row,int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("(若未插旗且需退出插旗，请再次输入坐标：0 0)\n");
		printf("请输入要插旗的坐标：\n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (show[x][y] == '*')
			{
				show[x][y] = '#';
				printf("插旗成功,游戏继续\n");
				break;
			}
			else
			{
				printf("内容已显示，请重新输入\n");
			}
		}
		else if (x == 0 && y == 0)
		{
			printf("退出插旗成功，游戏继续\n");
			break;
		}
		else
		{
			printf("坐标不合法，请重新输入\n");
		}
	}
}

//扫雷展开附近8个坐标都没有雷的递归函数
void Expand(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)
{
	//获取排雷坐标附近雷的数量
	int count = get_mine_count(mine, x, y);
	//没有雷才进行展开
	if (count == 0)
	{
		//没有雷标志空格
		show[x][y] = ' ';
		//注意一定要在坐标还未进行过排雷和坐标不会越界的情况下进行展开，否则会进入越界和死递归
		//造成程序崩溃
		if (show[x - 1][y - 1] == '*' && x - 1 > 0 && x - 1 < ROWS && y - 1 > 0 && y - 1 < COLS)
			Expand(mine, show, x - 1, y - 1);
		if (show[x - 1][y] == '*' && x - 1 > 0 && x - 1 < ROWS && y > 0 && y < COLS)
			Expand(mine, show, x - 1, y);
		if (show[x - 1][y + 1] == '*' && x - 1 > 0 && x - 1 < ROWS && y + 1 > 0 && y + 1 < COLS)
			Expand(mine, show, x - 1, y + 1);
		if (show[x][y - 1] == '*' && x > 0 && x < ROWS && y - 1 > 0 && y - 1 < COLS)
			Expand(mine, show, x, y - 1);
		if (show[x][y + 1] == '*' && x > 0 && x < ROWS && y + 1 > 0 && y + 1 < COLS)
			Expand(mine, show, x, y + 1);
		if (show[x + 1][y - 1] == '*' && x + 1 > 0 && x + 1 < ROWS && y - 1 > 0 && y - 1 < COLS)
			Expand(mine, show, x + 1, y - 1);
		if (show[x + 1][y] == '*' && x + 1 > 0 && x + 1 < ROWS && y > 0 && y < COLS)
			Expand(mine, show, x + 1, y);
		if (show[x + 1][y + 1] == '*' && x + 1 > 0 && x + 1 < ROWS && y + 1 > 0 && y + 1 < COLS)
			Expand(mine, show, x + 1, y + 1);
	}
	else
	{
		//坐标附近有雷，正确显示雷的数量
		show[x][y] = count + '0';
	}
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	//1.输入排查坐标
	//2.检查坐标处是不是雷
	  //(1)是雷   - 很遗憾，你被炸死了   - 游戏结束
	  //(2)不是雷 - 统计坐标周围有几个雷 - 存储排查雷的信息到show数组 - 游戏继续

	int x = 0;
	int y = 0;
	int win = row*col;

	while (win> EASY_COUNT)
	{
		printf("请输入要排查的坐标(如需插旗请输入坐标：0 0)\n");
		scanf("%d%d", &x, &y);
		//判断坐标的合法性
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("很遗憾，你被炸死了\n");
				DisplayBoard(mine, ROW, COL);
				break;
			}
			else
			{
				//不是雷的情况下 - 统计x,y坐标周围有几个雷
				//int count = get_mine_count(mine,x, y);
				//show[x][y] = count + '0';

				//扫雷展开
				Expand(mine, show, x, y);

				//显示排查出的信息
				DisplayBoard(show, ROW, COL);
				win = IsWin(show,ROW,COL);
			}
		}
		//插旗
		else if (x==0&&y==0)
		{
			Flag(show,row,col);
			DisplayBoard(show, ROW, COL);
		}
		else
		{
			printf("坐标不合法，请重新输入\n");
		}
    }
	if (win == EASY_COUNT)
	{
		printf("恭喜你，排雷成功\n");
		DisplayBoard(mine, ROW, COL);
	}
}