#include <stdio.h>
#include <math.h>
main()
{
	int a,b,c;
	printf("请输入三角形的三条边长：");
	scanf("%d,%d,%d",&a,&b,&c);
	if(a<0||b<0||c<0)
	{ 
		printf("错误！边长不能为负数！");
	}
	if(a+b<=c||a+c<=b||b+c<=a)
	{
		printf("错误！两边之和应大于第三边！");
	} 
	if( (pow(a,2))+(pow(b,2))==(pow(c,2)))
	{
		printf("该三角形是直角三角形！"); 
	}
	else	printf("不能构成直角三角形！"); 
} 
