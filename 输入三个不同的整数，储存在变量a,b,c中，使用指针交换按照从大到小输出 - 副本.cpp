#include <stdio.h>
int main(void)
{
	int a,b,c;
	int *p1=&a,*p2=&b,*p3=&c,*p;
	printf("���������a,b,c\n");
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
	printf("����a��ֵ��%d,b��ֵ��%d,c��ֵ��%d\n",a,b,c);
	printf("����*p1��ֵ��%d,*p2��ֵ��%d,*p3��ֵ��%d",*p1,*p2,*p3);
	return 0;
}
 
