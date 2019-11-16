#include <stdio.h>
main()
{
	int i;
	double j;
	printf("请输入本月利润i");
	scanf("%d",&i);
	if(i<=10)
	{
		j=i*0.1;
	}
	else if(i<=20)
	{
		j=(i-10)*0.075+10*0.1;
	}
	else if(i<=40)
	{
		j=(i-60)*0.015+20*0.03+20*0.05+10*0.075+10*0.1;
	}
	else
	{
		j=(i-100)*0.01+40*0.015+20*0.03+20*0.05+10*0.075+10*0.1;
	}
	printf("本月的奖金为%f",j);
	return 0;
} 
