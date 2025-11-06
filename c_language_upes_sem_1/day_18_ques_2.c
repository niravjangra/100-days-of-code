#include <stdio.h>

int main() {
    int a, b, i, hcf;

    // Input
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Find HCF by checking common factors
    for (i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0)
            hcf = i;
    }

    printf("HCF (GCD) of %d and %d is: %d\n", a, b, hcf);

    return 0;
}
