#include <stdio.h> 
main()
{
	int coin1,coin2,coin5,count=0;
	printf("用一元换成一分，两分，五分共六十枚的方案为:");
	for(coin5=0;coin5<=20;coin5++)
	{
		for(coin2=0;coin2<=50;coin2++)
		{
			coin1=(100-coin5*5-coin2*2);
				if((coin1+coin2+coin5==60)&&(coin1+coin2*2+coin5*5==100))
				{
					count++;
					printf("\n方案为[%d]为:%d个5分硬币，%d个2分硬币，%d个1分硬币",count,coin5,coin2,coin1);
				}	
		}
	}
}

