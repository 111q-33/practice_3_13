#define _CRT_SECURE_NO_WARNINGS
#include"func.h"
//ͨѶ¼
//  ����
//1.���
//2.ɾ��
//3.����
//4.��ʾ
//5.����
//6.�޸�
//7.�˳�
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
			printf("������\n");
			break;
		}
	} while (input);
	return 0;
}