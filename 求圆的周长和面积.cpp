#define PI 3.1415926  
#include <stdio.h>
main()
{
	float r;
	float s,l;
	printf("������Բ�İ뾶:");
	scanf("%f",&r);
	s=PI*r*r;
	l=2*PI*r;
	printf("���=%6.3f,�ܳ�=%6.3f \n",s,l);
}
