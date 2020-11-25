#include<stdio.h>
int main()
{
	int a[10];
	int b[10]={0};
	int i,j=0,k;
	int *p ;
	int count=0;
	scanf("%d",&a[0]);
	for( i=1;i<10;i++)
	{
		scanf(",%d",&a[i]);
	}
	while (j<10)
	{
		for(i=0;i<9;i++)
		{
			if(i<9)
			{
				if(a[i]>a[i+1])
				{
					b[i]=a[i+1];
					a[i+1]=a[i];
					a[i]=b[i];
				}
			}
		}
		j++;
	}
	int c[10]={0};
	for(i=0;i<10;i++)
	{
		if(a[i]==2||a[i]==3||a[i]==5||a[i]==7||a[i]==11)
		{
			count++;
			c[i]=a[i];
			
		}
		if(a[i]%2!=0&&a[i]%3!=0&&a[i]%5!=0&&a[i]%7!=0&&a[i]%9!=0&&a[i]%11!=0)
		{
			count++ ;
			c[i]=a[i];
		}
		if(a[i]==1)
		{
			count--; 
			c[i]=0;
	    }
	}
	int d[count];
	if(count==0)
	{
		printf("Not found!");
	}
	j=0;
	for(i=0;i<10;i++)
	 {
	 	if(c[i]!=0)
	 	{
	 		d[j]=c[i];
	 		j++;
	 	 } 
     }
     for(k=0;k<count;k++)
     {
     	if(k<count-1)
     	{
     		printf("%d,",d[k]);
		 }
		 else
		 {
		 	printf("%d",d[k]);
		 }
	 }
}
