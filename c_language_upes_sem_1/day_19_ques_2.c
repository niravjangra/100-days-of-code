#include <stdio.h>

int main() {
    int num, sum = 0, remainder;

    // Input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Loop to calculate sum of digits
    while (num != 0) {
        remainder = num % 10;
        sum += remainder;
        num /= 10;
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}
