#include <stdio.h>
#include <stdlib.h>
#define PT "ѧ��:%ld ����:%-10s �ɼ�:6.1f\n",p->num,p->score
#define N sizeof(struct stud)
struct stud
{
	long num;
	char name[11];
	float score;
	struct stud *next;
};
void print (struct stud *p)
{
	p=p->next;
	while(p!=NULL)
	{
		printf(PT);
		p=p->next;
	}
}
struct stud *creat()
{
	struct stud *p1,*p2,*head;
	head=p2=(struct stud *)malloc(N);
	printf("������ѧ��	����	�ɼ�(ѧ������0����)\n");
	p1=(struct stud*)malloc(N);
	scanf("%ld %s %f",&p1->num,p1->name,&p1->score);
	while(p1->num!=0)
	{
		p2->next=p1;
		p2=p1;
		p1=(struct stud *)malloc(N);
		scanf("%ld%s%f",&p1->num,p1->name,&p1->score);
	}
	p2->next=NULL;
	free(p1);
	return head;
}
main()
{
	struct stud *head;
	head=creat();
	print(head);
}
