#include<stdio.h>
int main()
{  
   int divisor(int m,int n);
   int multiple(int p,int q);
   int n1,n2,c,d;
   printf("please input n1 n2:");
   scanf("%d%d",&n1,&n2);
   c=divisor(n1,n2);
   d=multiple(n1,n2);
   printf("最大公约数是：%d\n",c);
   printf("最小公倍数是：%d\n",d);
}
int divisor(int m,int n)
{
 int x,y,z;
 if(m>n)  x=m,y=n;
  else x=n,y=m; 
  for(z=y;;y--) 
{
  if(x%y==0)
   if(z%y==0) break; 
}
 return y;
}
int multiple(int p,int q)
{
 long int i,a,b;
 if(p>q)  a=p,b=q;
 else a=q,b=p;
 for(i=2;;i++)
{
   if(a%b==0) break;
   else a=a*i; 
}
 return a;
}
