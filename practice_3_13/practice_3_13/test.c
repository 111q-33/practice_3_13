#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
//int main()
//{
//	char *p1 = (char*)malloc(20);
//	if (p1 != NULL) //�ж��Ƿ񿪱ٳɹ�
//	{
//		strcpy(p1, "hello world");
//		printf("%s\n", p1);
//	}
//	free(p1);
//	p1 = NULL;  //�ò����Ƿǳ��б�Ҫ�ģ���Ϊfree����p1��ָ�Ŀռ�黹�����ܱ�ʹ��
//	            //�ò����ɱ���Ƿ������ڴ�
//	return 0;
//}

//int main()
//{
//	int *arr = (int*)calloc(10, sizeof(int));
//	if (arr != NULL)
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//	free(arr);
//	arr = NULL;
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int *ps = (int *)calloc(10, sizeof(int)); //��ʱ������40���ֽڵĿռ�
//	if (ps != NULL)
//	{
//		int* tmp = realloc(ps, 80);//���䵽80�ֽ�
//		if (tmp != NULL)
//		{
//			ps = tmp;
//		}
//	}
//	for (i = 0; i < (80) / sizeof(int); i++)
//	{
//		ps[i] = i;
//	}
//	for (i = 0; i < (80) / sizeof(int); i++)
//	{
//		printf("%d ", ps[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int * ps = (int*)malloc(INT_MAX / 4);
//	*ps = 20;//��psΪNULL�ᷢ��ʲô��
//	printf("%d\n", ps);
//	free(ps);
//	ps = NULL;
//	return 0;
//}

//int main()
//{
//	int *ps = (int *)malloc(10 * sizeof(int));
//	int i = 0;
//	if (ps != NULL)
//	{
//		for (i = 0; i < 12; i++)
//		{
//			ps[i] = i;   //��i>=10ʱ���ͻᷢ��Խ�硣
//		}
//	}
//	free(ps);
//	ps = NULL;
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int *p = &i;
//	free(p);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int *ps = (int *)malloc(40);
//	if (ps != NULL)
//	{
//		for (i = 0; i < 5; i++)
//		{
//			*ps = i;
//			ps++;
//		}
//	}
//	free(ps);
//	ps = NULL;
//	return 0;
//}

//int main()
//{
//	int *ps = (int*)malloc(40);
//	if (ps != NULL)
//	{
//		free(ps);
//	}
//	free(ps);
//	return 0;
//}

void test()
{
	int *ps = (int*)malloc(40);
	if (ps != NULL)
	{
		*ps = 20;
	}
}
int main()
{
	test();
	while (1);
	return 0;
}