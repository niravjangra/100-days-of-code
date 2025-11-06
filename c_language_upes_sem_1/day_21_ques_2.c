#include <stdio.h>

int main() {
    int num, i, sum = 0;

    // Input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Find sum of proper divisors
    for (i = 1; i <= num / 2; i++) {
        if (num % i == 0)
            sum += i;
    }

    // Check for perfect number
    if (sum == num)
        printf("%d is a Perfect Number.\n", num);
    else
        printf("%d is Not a Perfect Number.\n", num);

    return 0;
}
