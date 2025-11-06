#include <stdio.h>

int main() {
    int num, reversed = 0, remainder, original;

    // Input
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;  // store for comparison

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    // Check palindrome condition
    if (original == reversed)
        printf("%d is a Palindrome.\n", original);
    else
        printf("%d is Not a Palindrome.\n", original);

    return 0;
}
