List Merge( List L1, List L2 )
{
	if(L1 == NULL || L2 == NULL)
	{
		printf("param error!");
		return NULL;
	}
	List L3 = (List)malloc(sizeof(struct Node));
	if(L3 == NULL)
	{
		printf("alloc error!");
		return NULL;
	}
	List tmpList = L3;	//保存合并后链表头结点
	
	List p1 = L1->Next;
	List p2 = L2->Next;
	
	while(p1 && p2)
	{
		if(p1->Data < p2->Data)
		{
			tmpList->Next = p1;
			p1 = p1->Next;
		}
		else
		{
			tmpList->Next = p2;
			p2 = p2->Next;	
		}
		tmpList = tmpList->Next;
	}
	if(p1)
	{
		tmpList->Next = p1;
	}
	if(p2)
	{
		tmpList->Next = p2;
	}
	L1->Next = NULL;
	L2->Next = NULL;
	
	return L3;
}

