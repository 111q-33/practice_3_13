#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
//int main()
//{
//	char *p1 = (char*)malloc(20);
//	if (p1 != NULL) //判断是否开辟成功
//	{
//		strcpy(p1, "hello world");
//		printf("%s\n", p1);
//	}
//	free(p1);
//	p1 = NULL;  //该操作是非常有必要的，因为free过后，p1所指的空间归还，不能被使用
//	            //该操作可避免非法访问内存
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
//	int *ps = (int *)calloc(10, sizeof(int)); //此时开辟了40个字节的空间
//	if (ps != NULL)
//	{
//		int* tmp = realloc(ps, 80);//扩充到80字节
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
//	*ps = 20;//当ps为NULL会发生什么？
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
//			ps[i] = i;   //当i>=10时，就会发生越界。
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