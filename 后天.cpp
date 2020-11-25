#include<stdio.h>
int main()
{
	int d;
	scanf("%d",&d);
	if(d<1 || d>7)	
        return 0;
	if(d<=5)
		printf("%d",d+2);
	else
		printf("%d",d-7+2);
	return 0;
}


