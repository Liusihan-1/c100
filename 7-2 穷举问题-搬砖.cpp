#include<stdio.h>
int main()
{
int x,y,z,n,count;
scanf("%d",&n);
count=0;
for(x=0;x<=n;x++) 
for(y=0;y<=n;y++)
for(z=0;z<=n;z++)
if(3*x+2*y+0.5*z==n&&x+y+z==n) {
printf("men = %d, women = %d, child = %d\n",x,y,z);
count++;
}
if(count==0)
printf("None");
return 0;
}
  

