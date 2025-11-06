#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;
    int numerator = 2, denominator = 3;

    // Input
    printf("Enter number of terms: ");
    scanf("%d", &n);

    // Calculate the series
    for (i = 1; i <= n; i++) {
        sum += (float)numerator / denominator;
        numerator += 2;      // increase numerator by 2
        denominator += 4;    // increase denominator by 4
    }

    printf("Sum of the series up to %d terms = %.4f\n", n, sum);

    return 0;
}
