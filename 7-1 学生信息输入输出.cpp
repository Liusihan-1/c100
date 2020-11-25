#include <stdio.h>
#include <malloc.h>

struct node
{
    char name[10];
    int num,score;
    struct node *next;
};
struct node *create()
{

    struct node *Head,*p,*tail;
    int date;
    Head = (struct node *)malloc(sizeof(struct node));
    Head->next = NULL;
    tail = Head;
    p = (struct node *)malloc(sizeof(struct node));
    p->next = NULL;
    while(scanf("%d",&date) != EOF)

                       
    {
        if(date == 0) break;
        p->num = date;
        scanf("%s %d",p->name,&p->score);
        tail->next = p;
        tail = p;
        p = (struct node *)malloc(sizeof(struct node));
        p->next = NULL;
    }
    return Head;
}
void print(struct node *Head)
{
    struct node *p;
    p = Head->next;
    while(p != NULL)
    {
        printf("%d %s %d\n",p->num,p->name,p->score);
        p = p->next;
    }
}
int main()
{
    struct node *head;
    head = create();
    print(head);
    return 0;
}
