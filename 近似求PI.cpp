#include <stdio.h>

double factor(int n) {
    if (n == 0) {
        return 1.0;
    }
    else {
        double result = 1.0;
        for (int i = 2; i <= n; i++) {
            result *= i;
        }

        return result;
    }
}

int main(void) {
    double sum = 0.0, numerator = 1.0, denominator = 1.0, item, eps, result;

    scanf("%le", &eps);
    for (int i = 0;; i++) {
        numerator = factor(i);
        denominator *= 2 * i + 1;
        item = numerator / denominator;
        sum += item;
        if (item < eps) {
            break;
        }
    }
    result = 2 * sum;
    printf("PI = %.5f\n", result);

    return 0;
}

