#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//ģ��ʵ��strcpy����
//void my_strcpy(char arr1[], char arr2[])
//{
//	while (arr2[i] != '\0')
//	{
//		arr1[i] = arr2[i];
//		i++;
//	}
//	arr1[i] = '\0';
//}

//д�Ĳ�����
//void my_strcpy(char* dest, char* sour)
//{
//	while (*sour != '\0')
//	{
//		*dest = *sour;
//		sour++;
//		dest++;
//	}
//	*dest = *sour;
//}

//void my_strcpy(char* dest, char* sour)
//{
//	while (*sour != '\0')
//	{
//		*dest++ = *sour++;
//	}
//	*dest = *sour;
//}

//void my_strcpy(char* dest, char* sour)
//{
//	while (*dest++ = *sour++)//��copy��'\0'����ʹ��ѭ��ֹͣ
//	{
//		;
//	}
//}

//#include<assert.h>
//
//char* my_strcpy(char* dest, const char* sour)// - const
//{
//	assert(dest != NULL);//����
//	assert(sour != NULL);//����
//	char* ret = dest;
//	while (*dest++ = *sour++)//��copy��'\0'����ʹ��ѭ��ֹͣ
//	{
//		;
//	}
//	return ret;//����Ŀ��ռ����ʼ��ַ
//}
//
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxxxxxx";
//	char arr2[20] = "hello";
//	printf("%s", my_strcpy(arr1, arr2));//��ʽ����
//	return 0;
//}

//const����ָ��
//int main()
//{
//	const int num = 10;
//	//num = 20; - error
//    const int* p = &num;
//    int const * p = &num;
//	//*p = 20; - error
//	int n = 0;
//	p = &n;
//	//*p = 20; - error
//	printf("%d\n", num);
//	printf("%d\n", n);
//	return 0;
//}

//int main()
//{
//	const int num = 10;
//	//num = 20; - error
//    int* const p = &num;
//	//*p = 20;
//	int n = 0;
//	//p = &n; - error
//	*p = 20;
//	printf("%d\n", num);
//	printf("%d\n", n);
//	return 0;
//}


//int n = 10;
//int* p1 = &n;
//int const * const * const p2 = &p1;

//ģ��ʵ��strlen
//const 
//��׳��
//³����
#include<assert.h>

//size_t - unsigned int 

size_t my_strlen(const char* str)
{
	//assert(str != NULL);
	assert(str);//NULL - 0
	size_t count = 0;
	while (*str++ != '\0')
	{
		count++;
	}
	return count;
}

int main()
{
	char arr[20] = "hello bit";
	printf("%d\n", my_strlen(arr));
	return 0;
}

//__cdecl - ��������Լ�� - Դ����
