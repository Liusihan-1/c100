#include <stdio.h>
int max(int x,int y)
{
	int z;
	if(x>y)
	{
		z=x;	
	}
	else
	{
		z=y;
	}	
	return z;
}
int main()
{
	int (*p)(int,int);
	int a,b,c;
	p=max;
	printf("������a��b��ֵ\n");
	scanf("%d��%d",&a,&b);
	c=(*p)(a,b);
	printf("%d��%d�нϴ��ֵ��%d\n",a,b,c);
	return 0;
}
