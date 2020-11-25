#include <stdio.h>

int main(void)
{
    int a[101];
	int n, m, i;
	scanf("%d,%d", &n, &m);
    for (i = 0; i < n - 1; i++)
        scanf("%d,", &a[i]);
    scanf("%d", &a[i]);
    for (i = n - m; i < 2 * n - m; i++)
    {
        printf("%d", a[i % n]);
        if (i != 2 * n - m - 1)
            printf(",");
    }
    printf("\n");
    return 0;
}

