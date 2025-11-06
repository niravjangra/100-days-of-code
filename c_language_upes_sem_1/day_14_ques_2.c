#include <stdio.h>

int main() {
    int n, i;
    long long product = 1;  // use long long for large results

    // Input
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Loop to calculate product of even numbers
    for (i = 2; i <= n; i += 2) {
        product *= i;
    }

    // Output
    printf("Product of even numbers from 1 to %d = %lld\n", n, product);

    return 0;
}
