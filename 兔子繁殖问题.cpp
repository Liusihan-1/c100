#include<stdio.h> 
long fun(int month)
{
	if(month==1||month==2)
	{
		return 1;
	}
	else
	{
		return fun(month-1)+fun(month-2); 
	}
}
int main()
{
	int n,sum=0,mon=0;
	scanf("%d",&n);
	do
	{
		mon++;
		if(mon==1||mon==2)
		{
			sum=1;
		}	
		else
		{
			sum=fun(mon-1)+fun(mon-2);
		}
	}
	while(sum<n);
	printf("%d\n",mon);
	return 0;	
}

