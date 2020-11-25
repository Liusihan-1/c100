#include<stdio.h>
#include<math.h>
#define PI 3.1415926535897932384626
int main()
{
  	double v,x;
  	scanf("%lf %lf",&v,&x);
  	double ret = (9.8*x)/(v*v);
  	double a = asin(ret);
  	a = a/2.0;
  	double t = v*sin(a)/9.8*2;
  	a = a * (180.0/PI);
  	a = 90-a;
  	int du = (int)a;
  	int minute = (int)((a-du)*60);
  	double second = ((a-du)*60-minute)*60;
  	printf("%d %d %.2f",(int)a,minute,second);
    return 0;
}

