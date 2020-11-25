#include<stdio.h>
main()            
{  
   int x=1234, value=0, t;
   while(x!=0)
   {  
        t=x%10;
        value+=t;
        x=x/10;
   }
   printf("%d",value);
}


