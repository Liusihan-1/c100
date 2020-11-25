#include <stdio.h>
#include <stdlib.h>
 
int main()
{
	int n,i;
	double sum = 0;
	double aver;
	double *p;
 
	scanf("%d",&n);
 
	if((p=(double *)calloc(n, sizeof(double))) == NULL)
	{
		exit(1);
	}
 
	for(i=0;i<n;i++)
	{
		scanf("%lf",p+i);
	}
 
	double min = *(p+0);
	double max = *(p+0);
 
	for(i=0;i<n;i++)
	{
		sum = sum + *(p+i);
		if(*(p+i)<min)
		{
			min = *(p+i);
		}
		if(*(p+i)>max)
		{
			max = *(p+i);
		}
	}
	aver = sum/n;
 
	printf("average = %.2lf\n",aver);
	printf("max = %.2lf\n",max);
	printf("min = %.2lf\n",min);
 
	free(p);
 
	return 0;
}
