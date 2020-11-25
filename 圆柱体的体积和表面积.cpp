#include<stdio.h>
main()
{
	float r,v,s,h;
	printf("请输入圆柱体的半径和高;\n");
	scanf("%f %f",&r,&h);
	v=3.141593*r*r*h;
	s=2*3.141593*r*r+2*3.142593*r*h;
	printf("v=%f,s=%f\n",v,s);
	return 0;
}
