#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

typedef struct SListNode
{
	char* SListword;
	int count;
	struct SListNode* next;
}SListNode;

//���ʵĲ��뼰ͳ��
void SListPhsh(SListNode* pHead,char* word)
{
	SListNode* cur = pHead->next;
	SListNode* prev = pHead;

	while (cur != NULL)
	{
		//�ҵ���ͬ�ĵ���
		if (strcmp(cur->SListword, word) == 0)
		{
			cur->count++;
			break;
		}
		//���ֵ�˳�������ˣ����治����������ͬ����
		if (strcmp(cur->SListword, word) > 0)
		{
			break;
		}
		prev = cur;
		cur = cur->next;
	}
	//û�ҵ���ͬ�ĵ��ʣ����ֵ�˳�����

	if (cur == NULL || strcmp(cur->SListword, word) > 0)
	{
		SListNode* newNode = (SListNode*)malloc(sizeof(SListNode));

		if (newNode == NULL)
		{
			printf("newNode malloc failed\n");
			return;
		}
		//_strdup����һ��word���βΣ���Ȼ����SLitword������word�ĸı���ı�
		//_strdup�൱��(strlen + memcpy)
		//newNode->SListword = _strdup(word);
		int WordLength = sizeof(word);
		newNode->SListword=(char*)malloc(WordLength);
		if (newNode->SListword == NULL)
		{
			printf("newNode->SListword malloc failed\n");
			return;
		}
		newNode->SListword = memcpy(newNode->SListword, word, WordLength);
		newNode->count = 1;
		newNode->next = NULL;

		newNode->next = prev->next;
		prev->next = newNode;

	}

}

void SListTopPrint(SListNode* pHead)
{
	SListNode* cur = pHead->next;
	int MaxCount = 0;

		while (cur != NULL)
		{
			if (cur->count > MaxCount)
			{
				MaxCount = cur->count;
			}
			cur = cur->next;
		}
		
		int top = 5;

		while (top && MaxCount)
		{
			cur = pHead->next;//cur��ͷ��ʼ��

			while (cur != NULL)
			{
				if (cur->count == MaxCount)
				{
					printf("%s %d\n", cur->SListword, cur->count);
					top--;
					if (top == 0)
					{
						break;
					}
				}
				cur = cur->next;
			}
			MaxCount--;//��ӡƵ�ʴθߵĵ���
		}
}

void SLitstDestory(SListNode* pHead)
{
	SListNode* cur = pHead;
	while (cur != NULL)
	{
		SListNode* next = cur->next;
		free(cur->SListword);
		cur->SListword = NULL;
		free(cur);
		cur = next;
	}
}

int main()
{
	//FILE* pfWrite = fopen("case1.in", "w");
	
	//���ļ�
	FILE* pf = fopen("case1.in", "r");
	if (pf == NULL)
	{
		printf("fopen failed\n");
		return -1;
	}
	//������ͷ���ĵ�������
	SListNode* plist = (SListNode*)malloc(sizeof(SListNode));
	if (plist == NULL)
	{
		printf("plist malloc failed\n");
		return -1;
	}
	plist->SListword = NULL;
	plist->count = -1;
	plist->next = NULL;

	//���ļ��ж�ȡ����
	char ch = 0;
	char word[21] = { 0 };
	int digit = 0;

	//�ж�ǰһ���ַ��Ƿ�Ϊ���ַ�
	int flag = 0;

	while ((ch = fgetc(pf)) != EOF)
	{
		if (islower(ch) && flag == 1)
		{
			//�������ַ�
			if (digit != 0)
			{
				word[digit] = '\0';
				//����
				SListPhsh(plist, word);
				flag = 0;
				digit = 0;
			}
		}
		//���chΪ��ĸ
		if (isupper(ch) || islower(ch))
		{
			//���Ϊ��д��ĸ��ת��ΪСд��ĸ
			if (isupper(ch))
			{
				ch = tolower(ch);
			}
			word[digit] = ch;
			digit++;
		}

		if (ch == '-')
		{
			flag = 1;
			continue;
		}
		//������ĩ���ַ�
		if (ch == '\n' && flag == 1)
		{
			flag = 0;
			continue;
		}
		else if (!islower(ch))
		{
			//�����ָ���
			if (digit != 0)
			{
				word[digit] = '\0';
			    //����
				SListPhsh(plist, word);
				flag = 0;
				digit = 0;
			}
		}
	}

	//������ĩ����
	if (digit != 0)
	{
		word[digit] = '\0';
		//����
		SListPhsh(plist, word);
		flag = 0;
		digit = 0;
	}

	//��ӡ
	SListTopPrint(plist);
	//����
	SLitstDestory(plist);

	return 0;
}