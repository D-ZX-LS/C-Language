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
	printf("----------ɨ����Ϸ----------\n");
	//��ӡ�к�
	for (i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");

	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);//��ӡ�к�
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("----------ɨ����Ϸ----------\n");

}

void SetMine(char mine[ROWS][COLS], int row, int col)
{
	//������
	int count = EASY_COUNT;
	while (count)
	{
		//��������±�
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		//�ж�����ĺϷ���
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}

static int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	//��һ
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
	//����
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
			if (show[i][j] == '*' || show[i][j] == '#')//������� - #
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
		printf("(��δ���������˳����죬���ٴ��������꣺0 0)\n");
		printf("������Ҫ��������꣺\n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (show[x][y] == '*')
			{
				show[x][y] = '#';
				printf("����ɹ�,��Ϸ����\n");
				break;
			}
			else
			{
				printf("��������ʾ������������\n");
			}
		}
		else if (x == 0 && y == 0)
		{
			printf("�˳�����ɹ�����Ϸ����\n");
			break;
		}
		else
		{
			printf("���겻�Ϸ�������������\n");
		}
	}
}

//ɨ��չ������8�����궼û���׵ĵݹ麯��
void Expand(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)
{
	//��ȡ�������긽���׵�����
	int count = get_mine_count(mine, x, y);
	//û���ײŽ���չ��
	if (count == 0)
	{
		//û���ױ�־�ո�
		show[x][y] = ' ';
		//ע��һ��Ҫ�����껹δ���й����׺����겻��Խ�������½���չ������������Խ������ݹ�
		//��ɳ������
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
		//���긽�����ף���ȷ��ʾ�׵�����
		show[x][y] = count + '0';
	}
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	//1.�����Ų�����
	//2.������괦�ǲ�����
	  //(1)����   - ���ź����㱻ը����   - ��Ϸ����
	  //(2)������ - ͳ��������Χ�м����� - �洢�Ų��׵���Ϣ��show���� - ��Ϸ����

	int x = 0;
	int y = 0;
	int win = row*col;

	while (win> EASY_COUNT)
	{
		printf("������Ҫ�Ų������(����������������꣺0 0)\n");
		scanf("%d%d", &x, &y);
		//�ж�����ĺϷ���
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("���ź����㱻ը����\n");
				DisplayBoard(mine, ROW, COL);
				break;
			}
			else
			{
				//�����׵������ - ͳ��x,y������Χ�м�����
				//int count = get_mine_count(mine,x, y);
				//show[x][y] = count + '0';

				//ɨ��չ��
				Expand(mine, show, x, y);

				//��ʾ�Ų������Ϣ
				DisplayBoard(show, ROW, COL);
				win = IsWin(show,ROW,COL);
			}
		}
		//����
		else if (x==0&&y==0)
		{
			Flag(show,row,col);
			DisplayBoard(show, ROW, COL);
		}
		else
		{
			printf("���겻�Ϸ�������������\n");
		}
    }
	if (win == EASY_COUNT)
	{
		printf("��ϲ�㣬���׳ɹ�\n");
		DisplayBoard(mine, ROW, COL);
	}
}