#include <stdio.h>

int main() {
    int n, i;

    // Input
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Loop to print numbers
    printf("Numbers from 1 to %d are:\n", n);
    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}
