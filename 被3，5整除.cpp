//20.дһ������
//����� 1 �� n ���ֵ��ַ�����ʾ
//1. ��� n ��3�ı����������Fizz��
//2. ��� n ��5�ı����������Buzz��
//3.��� n ͬʱ��3��5�ı�������� ��FizzBuzz����
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	printf("������һ��������\n"); 
	scanf("%d",&n);
	char str[128]={0};
	for (int i=1;i<=n;i++)
	{
		if(i%3==0 && i%5==0)
			printf("FizzBuzz\n");
		else if(i%3==0)
			printf("Fizz\n");
		else if(i%5==0)
			printf("Buzz\n");
		else
		{
			itoa(i,str,10);
			printf("%s\n",str); 
		}	
	}
	return 0;
 } 
