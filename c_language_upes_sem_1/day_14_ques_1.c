#include <stdio.h>

int main() {
    int n, i, sum = 0, odd;

    // Input
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Loop to calculate sum of first n odd numbers
    for (i = 1; i <= n; i++) {
        odd = 2 * i - 1;   // formula for i-th odd number
        sum += odd;
    }

    // Output
    printf("Sum of the first %d odd numbers = %d\n", n, sum);

    return 0;
}
