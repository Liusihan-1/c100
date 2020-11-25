//IPµØÖ·×ª»»
#include "stdio.h"
#include "math.h"
void main()
{   double b[4]={0};
    int a[33],i,k=0,p,j;
    for(i=0;i<32;i++)
    a[i]=getchar();
     for(i=0;i<4;i++)
     {  p=7;
      	for(j=0;j<8;j++)
      	{
     	 b[i]+=(a[k]-'0')*pow(2,p);k++;p--;
        }
     	printf("%.lf",b[i]);
     	if(i==3)break;
     	printf(".");
     }
} 
