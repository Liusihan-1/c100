#include<stdio.h>
main()
{
	float r,v,s,h;
	printf("������Բ����İ뾶�͸�;\n");
	scanf("%f %f",&r,&h);
	v=3.141593*r*r*h;
	s=2*3.141593*r*r+2*3.142593*r*h;
	printf("v=%f,s=%f\n",v,s);
	return 0;
}
