#include <stdio.h>
#define Max 100
main()
{  
	int a[5],i,j,t,max,min;
    for(i=0;i<5;i++)
    	scanf("%d",&a[i]);
    for(i=0;i<5;i++)
    { 
		for(j=0;j<5;j++)
        {
	      	if(a[j]<a[j+1])
	        { 
			t=a[j];
	        a[j]=a[j+1];
	        a[j+1]=t;
		 	}
	    }
	}
      max=a[0];
      min=a[4];
      printf("%d %d\n",max,min);

} 
