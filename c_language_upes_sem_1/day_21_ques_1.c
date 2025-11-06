#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, digits, swappedNum;

    // Input
    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = num;

    // Find last digit
    last = num % 10;

    // Find number of digits
    digits = (int)log10(num);

    // Find first digit
    first = num / pow(10, digits);

    // Swap first and last digits
    swappedNum = last * pow(10, digits) + (num % (int)pow(10, digits));
    swappedNum = swappedNum - last + first;

    printf("Number after swapping first and last digit: %d\n", swappedNum);

    return 0;
}
