#include<stdio.h> 
main()
{
   long int i,n,p=1,s=0;
   scanf("%ld",&n);
   for(i=1;i<=n;i++)
   {
   		p*=i;
   		s+=p;
   }
	printf("%ld\n",s);
}
    
	
    




