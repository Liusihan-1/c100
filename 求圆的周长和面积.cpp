#define PI 3.1415926  
#include <stdio.h>
main()
{
	float r;
	float s,l;
	printf("请输入圆的半径:");
	scanf("%f",&r);
	s=PI*r*r;
	l=2*PI*r;
	printf("面积=%6.3f,周长=%6.3f \n",s,l);
}
