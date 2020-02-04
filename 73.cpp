#include <stdio.h>
int main()
{
	int nums[4] = {2, 7, 11, 15};
	int flag;
	scanf("%d", &flag);
	for (int i = 0; i < 4; i++)
		for (int j = i + 1; j < 4; j++)
			if (nums[i] == flag - nums[j])
				printf("%d %d\n", i, j);
	return 0;
}
