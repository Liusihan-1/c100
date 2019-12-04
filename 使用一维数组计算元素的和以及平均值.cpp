#include <stdio.h>
#define MAX 5
int main()
{
	int code[MAX];
	int i,total=0;
	for (i=0;i<MAX;i++)
	{
		printf("请输入一个数据:");
		scanf("%d",&code[i]);	
	}
	for(i=0;i<MAX;i++)
	{
		printf("%d\n",code[i]);
		total+=code[i];
	}
	printf("\n和是%d\n平均值是%d\n",total,total/MAX);
	return 0;
} 
