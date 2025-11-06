#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;
    int numerator = 1, denominator = 2;

    // Input
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Calculate series sum
    for (i = 1; i <= n; i++) {
        sum += (float)numerator / denominator;
        numerator += 2;
        denominator += 2;
    }

    printf("Sum of the series up to %d terms = %.4f\n", n, sum);

    return 0;
}
