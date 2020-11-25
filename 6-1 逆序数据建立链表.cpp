struct ListNode *createlist()
{
   struct ListNode *   head,*q;
   head = (struct ListNode *)malloc(sizeof(struct ListNode));
   head->next = NULL;
   while(1)
   {
       q = (struct ListNode *)malloc(sizeof(struct ListNode));
       scanf("%d",&q->data);
       if(q->data == -1)
       break;
       q->next = head ->next;
       head->next = q;
       
   }
   return head->next;
}

