#include<stdio.h>
void fun(int n);
int main()
{
	int num;
	printf("������һ��������");
	scanf("%d",&num);
	fun(num);
	return 0; 
 } 
 void fun(int n)
 {
 	if(n==1)
 		printf("�������ݴη�\n");
 	while(n>3 &&n%3==0)
 		n/=3;
 	if(n==3)
 		printf("�������ݴη�\n",n); 
 	else
 		printf("���������ݴη�\n",n);
 }
