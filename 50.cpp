#include <stdio.h>
int main()
{
	printf("������һ������Ϊ10�����飺\n");
	int a1[10], a2[10];
	int i, j, k;
	j = 0;
	for (i = 0; i < 10; i++)
		scanf("%d", &a1[i]);
	printf("�������ƶ�����");
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
