#include <stdio.h> 
main()
{
	int coin1,coin2,coin5,count=0;
	printf("��һԪ����һ�֣����֣���ֹ���ʮö�ķ���Ϊ:");
	for(coin5=0;coin5<=20;coin5++)
	{
		for(coin2=0;coin2<=50;coin2++)
		{
			coin1=(100-coin5*5-coin2*2);
				if((coin1+coin2+coin5==60)&&(coin1+coin2*2+coin5*5==100))
				{
					count++;
					printf("\n����Ϊ[%d]Ϊ:%d��5��Ӳ�ң�%d��2��Ӳ�ң�%d��1��Ӳ��",count,coin5,coin2,coin1);
				}	
		}
	}
}

