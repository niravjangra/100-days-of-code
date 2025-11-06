#include <stdio.h>

int main() {
    int num, digit, product = 1, hasOdd = 0;

    // Input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Process each digit
    while (num != 0) {
        digit = num % 10;
        if (digit % 2 != 0) {  // check for odd digit
            product *= digit;
            hasOdd = 1;
        }
        num /= 10;
    }

    // Output
    if (hasOdd)
        printf("Product of odd digits = %d\n", product);
    else
        printf("No odd digits found.\n");

    return 0;
}
