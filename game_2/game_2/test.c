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
	char mine[ROWS][COLS];//��Ų��ú��׵���Ϣ
	char show[ROWS][COLS];//����Ų���׵���Ϣ
	//��ʼ������
	InitBoard(mine,ROWS,COLS,'0');
	InitBoard(show,ROWS,COLS,'*');

	//��ӡ����
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);

	//������
	SetMine(mine,ROW,COL);
	//DisplayBoard(mine, ROW, COL);

	//�Ų���
	FindMine(mine,show,ROW,COL);
}

int main()
{
	srand((unsigned int)time(NULL));

	int intput = 0;
	do
	{
		mune();
		printf("��ѡ��");
		scanf("%d", &intput);
		switch (intput)
		{
		case 1:
			//printf("ɨ����Ϸ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (intput);
	return 0;
}