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
	printf("请输入a和b的值\n");
	scanf("%d，%d",&a,&b);
	c=(*p)(a,b);
	printf("%d和%d中较大的值是%d\n",a,b,c);
	return 0;
}
