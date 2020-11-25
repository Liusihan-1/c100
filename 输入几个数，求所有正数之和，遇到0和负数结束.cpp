#include <stdio.h>
main()
{
	float x;
	float sum=0;
	scanf("%f",&x);
	while(x>0)
	{
		sum+=x;
		scanf("%f",&x);
	}
	printf("ºÍ=%6.2f",sum);
}
