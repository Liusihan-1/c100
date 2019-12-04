#include <stdio.h>
int main()
{
	int a[5]={1,2,3,4,5};
	int i,max=a[0],min=a[0];
	
	for(i=0;i<5;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	printf("%d %d",max,min);
}
	
