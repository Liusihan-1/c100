#include <stdio.h>
int main()
{
	int a,b,c;
	printf("请输入三角形三条边:\n");
	scanf("%d %d %d",&a,&b,&c); 
	if(a+b>c||b+c>a||a+c>b)
	{
		if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
		printf("这个三角形是直角三角形:");
	else
	printf("这个三角形不是直角三角形:"); 
	}
	
} 
