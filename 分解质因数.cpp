#include <stdio.h>
int main()
{
	int n;
	int i;  
	printf("输入一个整数：");
	scanf("%d",&n);
	printf("%d=",n);
	for(i=2; i<=n; i++)
	{
		while(n!=i)
		{ 
			if(n%i==0)
			{
				printf("%d*",i); 
				n=n/i;
			}
			else
				break;
		} 
	}
} 
