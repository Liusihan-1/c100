struct ListNode *createlist()
{
 struct ListNode *head,*p1,*tail;
 int num;
 head=(struct ListNode *)malloc(sizeof(struct ListNode));
 p1=tail=(struct ListNode *)malloc(sizeof(struct ListNode));
 p1->next=tail->next=head->next=NULL;
 while(1)
 {
  scanf("%d",&num);
  if(num!=-1)
  {
   
   p1->data=num;
   if(head->next==NULL)
   {
    head->next=p1;
   }
   else 
   {
    tail->next=p1;
    tail=p1;
   }
   p1=(struct ListNode *)malloc(sizeof(struct ListNode));
   p1->next=NULL;
  }
  else 
  break;
 }
 return head;
}
struct ListNode *deleteeven(struct ListNode *head)
{
 struct ListNode *num,*p;
 p=head;
 num=head->next;
 while(num!=NULL)
 {
  if(num->data%2==0)
     {
      p->next=num->next;
  }
  else
  p=p->next;
  num=num->next;
 }
 return head->next;
}

