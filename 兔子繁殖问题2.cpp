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
	printf("��%d���¹���%ldֻ\n",mon,num);
	return 0;
}
