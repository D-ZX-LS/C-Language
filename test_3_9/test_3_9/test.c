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

//单词的插入及统计
void SListPhsh(SListNode* pHead,char* word)
{
	SListNode* cur = pHead->next;
	SListNode* prev = pHead;

	while (cur != NULL)
	{
		//找到相同的单词
		if (strcmp(cur->SListword, word) == 0)
		{
			cur->count++;
			break;
		}
		//按字典顺序找完了，后面不可能再有相同的了
		if (strcmp(cur->SListword, word) > 0)
		{
			break;
		}
		prev = cur;
		cur = cur->next;
	}
	//没找到相同的单词，按字典顺序插入

	if (cur == NULL || strcmp(cur->SListword, word) > 0)
	{
		SListNode* newNode = (SListNode*)malloc(sizeof(SListNode));

		if (newNode == NULL)
		{
			printf("newNode malloc failed\n");
			return;
		}
		//_strdup拷贝一份word的形参，不然后续SLitword会随着word的改变而改变
		//_strdup相当于(strlen + memcpy)
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
			cur = pHead->next;//cur从头开始找

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
			MaxCount--;//打印频率次高的单词
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
	
	//打开文件
	FILE* pf = fopen("case1.in", "r");
	if (pf == NULL)
	{
		printf("fopen failed\n");
		return -1;
	}
	//创建带头结点的单向链表
	SListNode* plist = (SListNode*)malloc(sizeof(SListNode));
	if (plist == NULL)
	{
		printf("plist malloc failed\n");
		return -1;
	}
	plist->SListword = NULL;
	plist->count = -1;
	plist->next = NULL;

	//从文件中读取单词
	char ch = 0;
	char word[21] = { 0 };
	int digit = 0;

	//判断前一个字符是否为连字符
	int flag = 0;

	while ((ch = fgetc(pf)) != EOF)
	{
		if (islower(ch) && flag == 1)
		{
			//文中连字符
			if (digit != 0)
			{
				word[digit] = '\0';
				//插入
				SListPhsh(plist, word);
				flag = 0;
				digit = 0;
			}
		}
		//如果ch为字母
		if (isupper(ch) || islower(ch))
		{
			//如果为大写字母，转化为小写字母
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
		//遇到文末连字符
		if (ch == '\n' && flag == 1)
		{
			flag = 0;
			continue;
		}
		else if (!islower(ch))
		{
			//其他分隔符
			if (digit != 0)
			{
				word[digit] = '\0';
			    //插入
				SListPhsh(plist, word);
				flag = 0;
				digit = 0;
			}
		}
	}

	//处理文末单词
	if (digit != 0)
	{
		word[digit] = '\0';
		//插入
		SListPhsh(plist, word);
		flag = 0;
		digit = 0;
	}

	//打印
	SListTopPrint(plist);
	//销毁
	SLitstDestory(plist);

	return 0;
}