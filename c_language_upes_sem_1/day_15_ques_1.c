#include <stdio.h>

int main() {
    int n, i;
    long long factorial = 1;  // long long for large results

    // Input
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Check for valid input
    if (n < 0)
        printf("Factorial is not defined for negative numbers.\n");
    else {
        // Loop to calculate factorial
        for (i = 1; i <= n; i++) {
            factorial *= i;
        }

        // Output
        printf("Factorial of %d = %lld\n", n, factorial);
    }

    return 0;
}
