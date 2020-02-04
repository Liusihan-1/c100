#include <stdio.h>
int main()
{
	printf("请输入一个长度为10的数组：\n");
	int a1[10], a2[10];
	int i, j, k;
	j = 0;
	for (i = 0; i < 10; i++)
		scanf("%d", &a1[i]);
	printf("请输入移动量：");
	scanf("%d", &k);
	for (i = 10 - k; i < 10; i++)
	{
		a2[j] = a1[i];
		j++;
	}
	for (i = 0; i < 10 - k; i++)
	{
		a2[j] = a1[i];
		j++;
	}
	for (j = 0; j < 10; j++)
		printf("%d ", a2[j]);
	return 0;
}
