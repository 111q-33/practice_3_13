#define _CRT_SECURE_NO_WARNINGS
#include"func.h"
int _compare(const void *elem1, const void *elem2)
{
	return strcmp(((struct people*)elem1)->name 
		,((struct people*)elem2)->name);
}
void Destroy(struct contact *s)
{
	free(s->arr);
	s->arr = NULL;
	s->max = 0;
	s->sz = 0;
}
void Show(struct contact *s)
{
	if (s->sz!=0)
	{
		printf("%-15s\t%-15s\t%-15s\n", "����", "�绰", "��ַ");
		int n = s->sz;
		int i = 0;
		for (i = 0; i < n ; i++)
		{
			printf("%-15s\t", (s->arr[i].name));
			printf("%-15s\t", (s->arr[i].phone));
			printf("%-15s\t\n", (s->arr[i].addr));
		}
	}
	return;
}
int Find(char*a,struct contact *s)
{
	int i = 0;
	int n = s->sz;
	for (i = 0; i < n; i++)
	{
		if (strcmp(a, s->arr[i].name) == 0)
			return i;
	}
	return -1;
}
void Initial(struct contact *s)
{
	s->sz = 0;
	struct people * tmp = (struct people *)malloc(default_num*sizeof(s->arr[0]));
	if (tmp != NULL)
	{
		s->arr = tmp;
		s->max = default_num;
	}
	else
		printf("����ʧ��\n");
}
int Add(struct contact *s)
{
	if (s->max == s->sz)
	{
		struct people * tmp = (struct people *)realloc
			(s->arr, (s->max + 2)*sizeof(s->arr[0]));
		if (tmp != NULL)
		{
			s->arr = tmp;
			int n = s->sz;
			printf("������:\n");
			printf("���������֡�\n");
			scanf("%s", &(s->arr[n].name));
			printf("������绰��\n");
			scanf("%s", &(s->arr[n].phone));
			printf("������סַ��\n");
			scanf("%s", &(s->arr[n].addr));
			s->sz++;
			s->max += 2;
		}
	}
	else
	{
		int n = s->sz;
		printf("������:\n");
		printf("���������֡�\n");
		scanf("%s", &(s->arr[n].name));
		printf("������绰��\n");
		scanf("%s", &(s->arr[n].phone));
		printf("������סַ��\n");
		scanf("%s", &(s->arr[n].addr));
		s->sz++;
	}
	return 0;
}


void Modify(struct contact *s)
{
	printf("������Ҫ�޸ĵ�����->\n");
	char a[name_max] = {0};
	scanf("%s", &a);
	int pos = Find(a,s);
	if (pos >= 0)
	{
		printf("������:\n");
		printf("���������֡�\n");
		scanf("%s", &(s->arr[pos].name));
		printf("������绰��\n");
		scanf("%s", &(s->arr[pos].phone));
		printf("������סַ��\n");
		scanf("%s", &(s->arr[pos].addr));
	}
	else
		printf("���û�������\n");
	return;
}

void Del(struct contact *s)
{
	int n = 0;
	if (0 == s->sz)
	{
		printf("ͨѶ¼û�ˡ�\n");
		return;
	}
	else
	{
		printf("������Ҫɾ��������\n");
		char sname[10];
		scanf("%s", sname);
		n = Find(sname, s);
		if (n < 0)
		{
			printf("�����ڴ��ˡ�\n");
			return;
		}
		else
		{
			for (; n < s->sz - 1; n++)
			{
				s->arr[n] = s->arr[n + 1];
			}
			s->sz--;
		}
	}
	return;
}
void Seacher(struct contact *s)
{
	if (s->sz == 0)
	{
		printf("�ȼӼ��˰ɡ�\n");
		return ;
	}
	printf("����������\n");
	char sname[10];
	scanf("%s", sname);
	int n = Find(sname, s);
	if (n >= 0)
	{
		printf("%-15s\t%-15s\t%s-15\n", "����", "�绰", "��ַ");
		printf("%-15s\t", (s->arr[n].name));
		printf("%-15s\t", (s->arr[n].phone));
		printf("%-15s\t\n", (s->arr[n].addr));
		return;
	}
	printf("���޴���\n");
	return;
}
void Qsort(struct contact *s)
{
	qsort(s->arr, s->sz, sizeof(s->arr[0]), _compare);
}