#include <stdio.h>
int main()
{
	int a3[3][3] =
	{
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};
	int s;
	for (int i = 0; i < 3; i++)
		s += a[i][i];
	printf("%d\n", s);
	return 0;
}
