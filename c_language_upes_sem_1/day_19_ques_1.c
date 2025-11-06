#include <stdio.h>

int main() {
    int a, b, lcm;

    // Input
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Find the greater number
    lcm = (a > b) ? a : b;

    // Find LCM using loop
    while (1) {
        if (lcm % a == 0 && lcm % b == 0) {
            printf("LCM of %d and %d is: %d\n", a, b, lcm);
            break;
        }
        lcm++;
    }

    return 0;
}
