#include<stdio.h>
int main()
{       int A[10];
		int len; 
		scanf("%d",&len); 
		for(int k=0;k<len;k++)

			scanf("%d,",&A[k]);
	 	for(int i=0;i<len;i++)
            for(int j=i;j<len;j++)
            {
               if(A[i]>A[j])
               {
                   int t=A[i];
                   A[i]=A[j];
                   A[j]=t ;
               }
            }
           
			printf("%d,%d",A[len-1],A[len-2]);
 }
