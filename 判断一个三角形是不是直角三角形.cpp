#include <stdio.h>
#include <math.h>
main()
{
	int a,b,c;
	printf("�����������ε������߳���");
	scanf("%d,%d,%d",&a,&b,&c);
	if(a<0||b<0||c<0)
	{ 
		printf("���󣡱߳�����Ϊ������");
	}
	if(a+b<=c||a+c<=b||b+c<=a)
	{
		printf("��������֮��Ӧ���ڵ����ߣ�");
	} 
	if( (pow(a,2))+(pow(b,2))==(pow(c,2)))
	{
		printf("����������ֱ�������Σ�"); 
	}
	else	printf("���ܹ���ֱ�������Σ�"); 
} 
