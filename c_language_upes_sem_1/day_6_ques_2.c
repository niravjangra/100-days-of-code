#include <stdio.h>

int main() {
    int num;

    // Input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check number type
    if (num >= 0) {
        if (num == 0)
            printf("The number is Zero.\n");
        else
            printf("The number is Positive.\n");
    } else {
        printf("The number is Negative.\n");
    }

    return 0;
}
