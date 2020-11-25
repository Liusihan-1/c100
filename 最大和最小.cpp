#include <stdio.h>
int main()
{
    int a[10];
    int *p, *pmax, *pmin;
    for(p = a; p < a+10; p ++)
        scanf("%d",p);
    for(p=pmax=pmin=a; p<a+10; p ++)
        if(*pmax < *p) pmax=p;
        else if(*pmin > *p) pmin = p;
    printf("%d\n", *pmax- *pmin);
    return 0;
}
