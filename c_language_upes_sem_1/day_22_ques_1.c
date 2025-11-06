#include <stdio.h>

int main() {
    int num, temp, digit, sum = 0, fact, i;

    // Input
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    // Calculate sum of factorials of digits
    while (temp != 0) {
        digit = temp % 10;

        // Find factorial of digit
        fact = 1;
        for (i = 1; i <= digit; i++)
            fact *= i;

        sum += fact;
        temp /= 10;
    }

    // Check Strong Number condition
    if (sum == num)
        printf("%d is a Strong Number.\n", num);
    else
        printf("%d is Not a Strong Number.\n", num);

    return 0;
}
