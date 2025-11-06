#include <stdio.h>

int main() {
    long binary, onesComplement = 0;
    int digit, place = 1;

    // Input
    printf("Enter a binary number: ");
    scanf("%ld", &binary);

    // Find 1’s complement
    while (binary != 0) {
        digit = binary % 10;
        if (digit == 0)
            onesComplement += 1 * place;
        else if (digit == 1)
            onesComplement += 0 * place;
        else {
            printf("Invalid binary number!\n");
            return 0;
        }
        binary /= 10;
        place *= 10;
    }

    // Output
    printf("1’s Complement = %ld\n", onesComplement);

    return 0;
}
