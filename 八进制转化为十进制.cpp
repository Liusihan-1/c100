//��д��������һ���˽�������������3λ�������������Ӧ��ʮ��������
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



