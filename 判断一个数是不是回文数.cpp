#include <stdio.h>
main()
{
	long x;
	int ge,shi,bai,qian,wan;
	printf("\n请输入一个五位数：");
	scanf("%ld",&x);
	if(x>=10000&&x<100000)
	{
		wan=x/10000;
		qian=x%10000/1000;
		shi=x%100/10;
		ge=x%10;
		if(wan==ge&&qian==shi)

		printf("该数是回文数");
		else printf("该数不是回文数");
	} 
	else
	{
		printf("error!该数不是五位数!\n");
	}
	 
} 
