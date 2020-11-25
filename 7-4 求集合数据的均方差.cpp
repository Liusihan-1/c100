#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	int i,j;
	double x=0;
	int a[10005];
	double result;
	int sum=0;
	double avg; 
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{ 
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	avg = sum*1.0/n;
	for(i=0;i<n;i++)
	{
		x += (a[i]-avg)*(a[i]-avg);
	}
	result = sqrt(x/n);
	printf("%.5lf\n",result);	
}

