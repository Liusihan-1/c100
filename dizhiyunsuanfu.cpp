#include<stdio.h>
main()
{
	int x,y;
	int *p=&x,*q=&y;
	printf("Input x,y: ");
	scanf("%d%d",p,&y);
	printf("x=%d   &x=%X\n",x,&x);
	printf("*p=%d   p=%X\n",*p,p);
	printf("y=%d   &y=%X\n",y,&y);
	printf("*q=%d   *q=%X\n",*q,q);
}
