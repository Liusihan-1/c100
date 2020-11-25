#include<stdio.h>
int main()
{
 int k=1,j=2,*p,*q,*t; 
 p=&k; 
 q=&j; 
 t=p; 
 p=q; 
 q=t;
 printf("%d,%d",*p,*q);
}
