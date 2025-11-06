#include <stdio.h>

int main() {
    int num, binary = 0, rem, place = 1;

    // Input
    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = num;  // store original number for display

    // Convert to binary
    while (num > 0) {
        rem = num % 2;          // get remainder (0 or 1)
        binary = binary + rem * place;
        place *= 10;
        num /= 2;
    }

    // Output
    printf("Binary equivalent of %d = %d\n", temp, binary);

    return 0;
}
