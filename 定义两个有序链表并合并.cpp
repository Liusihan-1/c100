#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
	int data;
	struct Node*next;
}Node,*PLinkList;
Node *MergeList(PLinkList p1,PLinkList p2)
{
	PLinkList newhead = NULL;   //新链表的头结点
    PLinkList   end = newhead ;    //新链表的当前结点
    if(!p1 )
    {
        return p2 ;
    }
    if(!p2 )
    {
	    return p1 ;
    }
    if(p1 ->data<p2->data)
    {
        newhead= p1;
        p1=p1 ->next;
	}
    else
    {
        newhead= p1;
        p1=p1 ->next;
    }
    end=newhead;
    while(p1 &&p2)
    {
        if(p1 ->data>p2->data)
        {
            end->next= p2;
            end= p2;
            p2=p2 ->next;
        }
        else
        {
            end->next= p1;
            end= p1;
            p1=p1 ->next;
        }
    }
    if(!p1 )
    {
        end->next= p2;
    }
    if(!p2 )
    {
        end->next= p1;
    }
    return newhead;
}
