#include<stdio.h>
main()
{    
    int  j;
    scanf("%d",&j);
    switch(j)
    {   
        case 9: j+=1;
      case 10: j+=2;
      case 11: j+=3;
      default: j+=4;
    }
    printf("%d",j);
}
