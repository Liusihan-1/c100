#include<stdio.h>
#include<stdlib.h>
#define N sizeof(stu)
typedef struct student {
	int num;
	char name[20];
	struct student* next;
}stu,*Stu;
Stu creat(int n) 
{
	Stu head;
	Stu p;
	Stu s = (Stu)malloc(N);
	head = s;
	p = head;
	for(int i =0; i < n; ++i) 
	{
		s = (Stu)malloc(N);
		printf("�������%d��ѧ������Ϣ\n",i+1);
		printf("������ѧ��\n");
		scanf("%d", &s->num);
		printf("����������\n");
		scanf("%s", &s->name);
		s->next = p->next;
		p->next = s;
		p = p->next;}
		if (int i=n-1) 
		{
			p->next = NULL;
			return head;
		}
	}
int main()
{
	int n;
	printf("��������ĳ���\n");
	scanf("%d", &n);
	Stu a = creat(n);
	printf("a");
}

