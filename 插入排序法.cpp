#include<stdio.h>
insert(char s[])
{
	int i, j, t;
	for (i = 1; i <= 9; i++)
	{
		t = s[i];
		j = i - 1;
		while ((j >= 0) && (t < s[j]))
		{
			s[j + 1] = s[j];
			j--;
		}
		s[j + 1] = t;
	}
}
main()
{
	char a[11];
	int i;
	printf("Input 10 CHARACTER:");
	for (i = 0; i < 10; i++)
		a[i] = getchar();
		a[i] = '\0';
		insert(a);
		printf("Sorted character is:%s\n", a);
}

