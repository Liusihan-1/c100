#include <stdio.h>
main()
{
	int i,n,flag; 
	for(n=1;n<2000;n++)
	{
		flag=0;
		for(i=1;i<n;i++)
		{
			if(n+100==i*i)
			{
				flag++;
		    }
			if(n+268==i*i)
			{
				flag++;
				break;
			}
		}
		if(flag==2)
		{
			printf("%d\n",n);
		}
	}

	return 0;
}
