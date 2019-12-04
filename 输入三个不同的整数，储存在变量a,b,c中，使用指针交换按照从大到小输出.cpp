#include <stdio.h>
int main(void)
{
	int a,b,c;
	int *p1=&a,*p2=&b,*p3=&c,*p;
	printf("请输入变量a,b,c\n");
	scanf("%d %d %d",&a,&b,&c);
	if(*p1<*p2)
	{
		p=p1;
		p1=p2;
		p2=p;
	}
	if(*p1<*p3)
	{
		p=p1;
		p1=p3;
		p3=p;
	}
	if(*p2<*p3)
	{
		p=p2;
		p2=p3;
		p3=p;
	}
	printf("变量a的值是%d,b的值是%d,c的值是%d\n",a,b,c);
	printf("变量*p1的值是%d,*p2的值是%d,*p3的值是%d",*p1,*p2,*p3);
	return 0;
}
 
