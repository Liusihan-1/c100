#include <stdio.h>
int main()
{
	int n,i,a[50];
	scanf("%d",&n);
	for(a[0]=a[1]=1,i=2;i<=n;i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
	printf("%d\n",a[n]);
 return 0;
}
