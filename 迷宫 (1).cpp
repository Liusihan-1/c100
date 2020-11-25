#include<stdio.h>
#include<stdlib.h>
#define error(str) fprintf(stderr,"%s",str),exit(1)
typedef struct node
{
	int i,j,k;
	struct node *next;
}stack;
stack *s;//这里直接声明stack* s 
stack* creat()
{
	stack* s=(stack*)malloc(sizeof(stack));
	s->i=0,s->j=0,s->k=0,s->next=NULL;
	return s;
}
int isempty(stack* s)
{
	return s->next==NULL;
}
void push(stack* s,int i,int j,int k)
{
	stack* front=(stack*)malloc(sizeof(stack));
	front->i=i,front->j=j,front->k=k;
	front->next=s->next;
	s->next=front;
}
void pop(stack* s)
{
	if(isempty(s))
		error("is already empty");
	stack* front=s->next;
	s->next=s->next->next;
	free(front);
}
int findway(int a[][100],int ei,int ej,int si,int sj,int i,int j)//这里采用递归算法寻路 
{
	int e=0;//用e做flag
	a[i][j]=2;//这里主要是用于替换对任何数字都可以 
	if(i==ei&&j==ej)
		e=1;
	if(e!=1&&j+1<=ej&&a[i][j+1]==0)//往东 
	{
		push(s,i,j,1);
		if(findway(a,ei,ej,si,sj,i,j+1)==1)//这里通过递归继续整个算法 
			return 1;
	}
	if(e!=1&&i+1<=ei&&a[i+1][j]==0)//往南 
	{
		push(s,i,j,2);
		if(findway(a,ei,ej,si,sj,i+1,j)==1)
			return 1;
	}
	if(e!=1&&j-1>=sj&&a[i][j-1]==0)//往西 
	{
		push(s,i,j,3);
		if(findway(a,ei,ej,si,sj,i,j-1)==1)
			return 1;
	}
	if(e!=1&&i-1>=si&&a[i-1][j]==0)//往北
	{
		push(s,i,j,4);
		if(findway(a,ei,ej,si,sj,i-1,j)==1)
			return 1;
	} 
	if(e!=1)
	{
		a[i][j]==0;
		pop(s);
	}
	return e;
}
void show(stack* s)
{
	if(s->next)
		show(s->next);
	if(s->i)
		printf("(%d,%d,%d)",s->i,s->j,s->k);
}
int main()
{
	s=creat();//stack* s以在前面声明过 
	int i,j,l,k;
	scanf("%d %d",&i,&j);
	int a[100][100];
	for(l=1;l<=i;l++)
		for(k=1;k<=j;k++)
			scanf("%1d",&a[l][k]);
	if(findway(a,i,j,1,1,1,1)==1)
	{
		push(s,i,j,0);//这里是最后的情况，输出位置和0. 
		show(s);
	}
	return 0;
}

