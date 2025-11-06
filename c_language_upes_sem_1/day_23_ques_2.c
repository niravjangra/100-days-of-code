#include <stdio.h>

int main() {
    int i, j;

    // Using nested loops
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5; j++) {
            printf("*");
        }
        printf("\n"); // Move to next line
    }

    return 0;
}
