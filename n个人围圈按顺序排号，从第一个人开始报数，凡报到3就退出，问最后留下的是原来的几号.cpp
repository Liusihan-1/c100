#include <stdio.h>
#define nmax 50
int main()
{
	int i,k,m,n,num[nmax],*p;
	printf("������������:");
	scanf("%d",&n);
	p=num;
	for(i=0;i<n;i++)
	{
		*(p+1)=i+1;	
	}
	i=0;
	k=0;
	m=0;
	while(m<n-1)
	{
		if(*(p+1)!=0)
		{ 
			k++;
		}
		if(k==3)
		{
			*(p+i)=0;
			k=0;
			m++;	
		}
		i++;
		if(i==n)
		{
			i=0; 
		} 
	}
	while(*p==0)
	{
		p++;
	}
	printf("%d��������\n",*p);
	return 0;	
} 
