#include <stdio.h>

int main() {
    int num, i;

    // Input
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factors of %d are: ", num);

    // Loop to find factors
    for (i = 1; i <= num; i++) {
        if (num % i == 0)
            printf("%d ", i);
    }

    printf("\n");
    return 0;
}
