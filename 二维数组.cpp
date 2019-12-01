#include<stdio.h>
int main()
{
	int a,b;
	int c[3][2]={1,2,3,4,5,6};
	for(b=0;b<3;b++)
	{
		for(a=0;a<2;a++)
		{
			printf("%d ",c[b][a]);
			if(b==1&&a==0)printf("\n");	
		}
	}
}

