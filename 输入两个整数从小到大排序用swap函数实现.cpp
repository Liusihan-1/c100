#include <stdio.h>
swap(int *p1,int *p2)
{
	int a;
	a=*p1;
	*p1=*p2;
	*p2=a;
}
main()
{
 	int m,n;
 	printf("Input m,n: ");
 	scanf("%d%d",&m,&n);
 	if(m>n) swap(&m,&n);
 	   printf("Sorted: %d  %d\n",m,n);
} 
