#include<stdio.h>
main( )
{   
    enum color {  YELLOW=1,  BLUE=3,  RED };
    enum color  c;
    c=RED;
    printf("%d\n",c);
}
