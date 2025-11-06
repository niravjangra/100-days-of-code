#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;

    // Input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Loop to reverse digits
    while (num != 0) {
        remainder = num % 10;           // get last digit
        reversed = reversed * 10 + remainder;  // build reversed number
        num /= 10;                      // remove last digit
    }

    // Output
    printf("Reversed number = %d\n", reversed);

    return 0;
}
