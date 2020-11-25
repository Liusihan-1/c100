#include<stdio.h>
void inc ( void )
{   
     static  int  x = 0;
     x++;
     printf ( "(%d)", x );
}
main(  )
{  
     inc ( );
     inc ( );
}
