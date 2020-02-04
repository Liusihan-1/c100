#include <stdio.h>
int main(void)
{
	int day = 9, a1 = 0, a2 = 1;
	while (day > 0)
	{
		a1 = (a2 + 1) * 2;
		a2 = a1;
		day--;
	}
	printf("%d\n", a1);
	return 0;
}
