#include <stdio.h>
#define MAX 5
int main()
{
	int code[MAX];
	int i,total=0;
	for (i=0;i<MAX;i++)
	{
		printf("������һ������:");
		scanf("%d",&code[i]);	
	}
	for(i=0;i<MAX;i++)
	{
		printf("%d\n",code[i]);
		total+=code[i];
	}
	printf("\n����%d\nƽ��ֵ��%d\n",total,total/MAX);
	return 0;
} 
