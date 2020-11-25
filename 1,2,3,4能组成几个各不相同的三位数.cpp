#include <stdio.h>
main()
{ 
	int a,b,c;
	int sum=0;
	printf("能组成的三位数的个数为\n"); 
	for(a=1;a<5;a++)
	{
		for(b=1;b<5;b++) 
		{
			for(c=1;c<5;c++) 
			{
				if(a!=b&&b!=c&&a!=c)
				{
					printf("%d%d%d\n", a,b,c);
					sum++;
				}
			}
		}
	} 
    printf("%d\n",sum);
} 
