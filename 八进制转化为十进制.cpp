//编写程序，输入一个八进制数（不超过3位），输出该数对应的十进制数。
#include<stdio.h>
int main()
{
int a,b,c,d,e;
scanf("%d",&a);
b=a/100;
c=(a-b*100)/10;
d=(a-b*100-c*10);
e=b*8*8+c*8+d;
printf("%d(8)=%d(10)",a,e);
return 0;	
}



