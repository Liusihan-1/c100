#include <stdio.h>
main()
{
	long x;
	int ge,shi,bai,qian,wan;
	printf("\n������һ����λ����");
	scanf("%ld",&x);
	if(x>=10000&&x<100000)
	{
		wan=x/10000;
		qian=x%10000/1000;
		shi=x%100/10;
		ge=x%10;
		if(wan==ge&&qian==shi)

		printf("�����ǻ�����");
		else printf("�������ǻ�����");
	} 
	else
	{
		printf("error!����������λ��!\n");
	}
	 
} 
