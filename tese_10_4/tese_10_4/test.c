#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//����n�Ľ׳�
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int j = 1;
//    scanf("%d",&n);
//	for ( i = 1; i <= n; i++)
//	{
//		 j = i * j;
//	
//	}
//	printf("%d\n", j);
//	return 0;
//}

////����n�Ľ׳�֮��
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int j = 1;
//	int sum = 0;
//	scanf("%d",&n);
//	if (n != 0)
//	{
//		for (i = 1; i <= n; i++)
//		{
//			j = i * j;
//			sum = sum + j;
//		}
//	}
//	else
//		sum = 1;
//	printf("%d\n", sum);
//	return 0;
//}

//��һ�����������в���ĳ�����������n-->�۰���ҡ����ֲ���-->������log�Զ�Ϊ�׵�n�Σ�����ȡ����
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//
//	
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid+1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid-1;
//		}
//		else
//		{
//			printf("�ҵ���:���������±�Ϊ%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���");
//	}
//	return 0;
//}

//��д���룬��ʾ����ַ��������ƶ������м��ۡ�
//#include<string.h>
//#include<windows.h>
//
//int main()
//{
//	//char arr1[] = "welcome to my github!!!!!";
//	char arr1[] = "welcome to �й�!!!!!";
//	//char arr2[] = "#########################";
//	char arr2[] = "####################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//
//        //չʾ��̬Ч��
//		Sleep(1000);//Sleep(��λ���룩˯��1s
//		system("cls");//�����Ļ
//
//		left++;
//		right--;
//	}
//	printf("%s\n", arr1);
//	return 0;
//}

//��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ�
//��ֻ���������������룬���������ȷ����ʾ��¼�ɹ���������ξ�����������˳�����

//������ȷ���������ַ���"123456"
#include<string.h>//�ַ�����������strlen��strcmp)�����õ�ͷ�ļ���
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("����������:");
		scanf("%s", password);
		//if(password=="123456")//error--�����ַ����ıȽϣ�����ʹ��==��Ӧ��ʹ��strcmp������
		if (strcmp(password, "123456") == 0)
		{
			printf("��¼�ɹ�\n");
			break;
		}
		else if(i<2)
		{
			printf("��������������룡\n");
		}
	}
	if (i == 3)
	{
		printf("���ξ���������˳�����");
	}
	return 0;
}




