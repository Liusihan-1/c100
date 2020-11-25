#include<stdio.h>
#include<stdlib.h>
struct stud_node{
	int num;
	char name[20];
	int score;
	struct stud_node *next;
};

struct stud_node *Creat_Stu_Doc()  //����
{
	struct stud_node *p, *q, *head=NULL;
	while(1)
	{
		p=(struct stud_node *)malloc(sizeof(struct stud_node));
		scanf("%d", &p->num);
		if(p->num==0)
			break;
		scanf("%s %d", p->name, &p->score);
		p->next=NULL;
		if(head==NULL)
			head=p;
		else
			q->next=p;
		q=p;
	}
	return head;
}
struct stud_node *DeleteDoc(struct stud_node *head,int min_score)   //�����ɾ��
{
	struct stud_node *p, *q;
	while(head!=NULL && head->score<min_score)   //��ɾ��ͷ�����������
    {																				//ʹͷ��㲻����ɾ��
        p=head;
        head=head->next;
        free(p);
    }
    if(head==NULL)    //�ж�ͷ����Ƿ�Ϊ�գ����Ϊ��������Ϊ��
        return NULL;
    p=head;
    q=head->next;
    while(q!=NULL)    //ɾ������ͷ���֮��Ŀ�ɾ�Ľ��
    {
        if(q->score<min_score)
        {
            p->next=q->next;
            free(q);
        }
        else
            p=q;
        q=p->next;
    }

	return head;
}
void Ptrint_Stu_Doc(struct stud_node *head) //�������
{
	while(head!=NULL)
	{
		printf("%d %s %d\n", head->num, head->name, head->score);
		head=head->next;
	}
}
int main()
{
	struct stud_node *head;
	int n;
	head=Creat_Stu_Doc();
	scanf("%d", &n);
	head=DeleteDoc(head, n);
	Ptrint_Stu_Doc(head);
	return 0;
}
