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
		printf("请输入第%d个学生的信息\n",i+1);
		printf("请输入学号\n");
		scanf("%d", &s->num);
		printf("请输入姓名\n");
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
	printf("输入链表的长度\n");
	scanf("%d", &n);
	Stu a = creat(n);
	printf("a");
}

