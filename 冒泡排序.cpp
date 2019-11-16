#include <stdio.h>
#define Max 100
main()
{  int a[Max],i,n=0,j,t;
   scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    { 
		for(j=0;j<n-1;j++)
        {
	      	if(a[j]<a[j+1])
	        { t=a[j];
	        a[j]=a[j+1];
	        a[j+1]=t;
		 }
	  }
	}
    printf("Sorted date is:\n");
    for(i=0;i<n;i++)
      printf("%d ",a[i]);
    printf("\n");
} 

