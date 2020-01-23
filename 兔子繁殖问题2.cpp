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
	int mon;
	long num;
	scanf("%d",&mon);
	num=fun(mon);
	printf("第%d个月共有%ld只\n",mon,num);
	return 0;
}
