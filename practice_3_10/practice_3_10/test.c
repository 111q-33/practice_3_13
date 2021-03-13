#define _CRT_SECURE_NO_WARNINGS
#include"func.h"
//通讯录
//  功能
//1.添加
//2.删除
//3.查找
//4.显示
//5.排序
//6.修改
//7.退出
void menu()
{
	printf("******************\n");
	printf("*1.add****2.del***\n");
	printf("*3.seacher*4.show*\n");
	printf("*5.qsort**6.modify*\n");
	printf("*0.exit***********\n");
	printf("******************\n");
}
int main()
{
	int input = 0;
	struct contact s;
	Initial(&s);
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 0: 
			Destroy(&s);
			break;
		case 1:
			Add(&s);
			break;
		case 2:
			Del(&s);
			break;
		case 3:
			Seacher(&s);
			break;
		case 4:
			Show(&s);
			break;
		case 5:
			Qsort(&s);
			break;
		case 6:
			Modify(&s);
			break;
		default:
			printf("请重试\n");
			break;
		}
	} while (input);
	return 0;
}