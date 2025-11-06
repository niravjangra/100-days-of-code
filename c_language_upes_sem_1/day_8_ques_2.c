#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Input
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Compare numbers
    if (num1 >= num2 && num1 >= num3)
        printf("%d is the Largest number.\n", num1);
    else if (num2 >= num1 && num2 >= num3)
        printf("%d is the Largest number.\n", num2);
    else
        printf("%d is the Largest number.\n", num3);

    return 0;
}
