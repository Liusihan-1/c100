#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	scanf("%d",&a[0]);
	for( int i=1;i<n;i++)
	{
		scanf(",%d",&a[i]);
	}
	printf("%d",a[n-1]);
	for(int i=n-2;i>=0;i--)
	{
		printf(",%d",a[i]);
	}
	return 0;
}
