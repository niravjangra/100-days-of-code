#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, remainder, digits = 0;
    int sum = 0;

    // Input
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    // Count number of digits
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = num;

    // Calculate sum of each digit raised to 'digits' power
    while (temp != 0) {
        remainder = temp % 10;
        sum += pow(remainder, digits);
        temp /= 10;
    }

    // Check Armstrong condition
    if (sum == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
