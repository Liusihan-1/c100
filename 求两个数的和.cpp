#include<stdio.h>
int sum(int a,int b)
{
	int s;
	s=a+b;
	return s;
}
main()
{
	int a,b,s=0;
 	printf("ÇëÊäÈëa,b\n");
 	scanf("%d%d",&a,&b);
 	s = sum(a,b);
	printf("ºÍÎª£º%d\n",s);
}
