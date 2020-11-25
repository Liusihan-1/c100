#include <stdio.h>

int main() {
    int a[11][11];
    int i, j, n;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == j || i + j == n - 1)
                a[i][j] = 2;
            else if ((i == 0 || i == n - 1) || (j == 0 || j == n - 1))
                a[i][j] = 1;
            else
                a[i][j] = 0;
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            printf("%-2d", a[i][j]);
        printf("\n");
    }
    return 0;
}

