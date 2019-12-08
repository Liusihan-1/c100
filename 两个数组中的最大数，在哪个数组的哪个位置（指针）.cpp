#include <stdio.h>
#include <string.h>
int *max(int x[],int y[],int *p,int *c)
{
	int i;
	int *m=&x[0];
	for(i=0;i<9;i++)
	{
		if(*m<x[i])
		{
			*m=x[i];
			*p=i;
			*c=1; 
		}
	}
	for(i=0;i<9;i++)
	{
		if(*m<y[i])
		{
			*m=y[i];
			*p=i;
			*c=2;
		}
	}
	return m;
}
int main()
{
	int c1[10]={1,2,3,4,5,6,7,8,9,0};
	int c2[10]={11,12,13,14,15,16,17,18,19,10};
	int n;
	int c;
	int *p;
	p=max(c1,c2,&n,&c);
	printf("两个数组中最大的是%d,在%d中的位置是%d\n",*p,c,n);
	return 0;
}
