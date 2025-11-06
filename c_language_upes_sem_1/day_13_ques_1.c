#include <stdio.h>

int main() {
    float num1, num2, result;
    char op;

    // Input
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op);
    printf("Enter second number: ");
    scanf("%f", &num2);

    // Perform operation using switch-case
    switch (op) {
        case '+':
            result = num1 + num2;
            printf("Result = %.2f\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result = %.2f\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result = %.2f\n", result);
            break;
        case '/':
            if (num2 != 0)
                printf("Result = %.2f\n", num1 / num2);
            else
                printf("Error! Division by zero.\n");
            break;
        case '%':
            // % works only with integers
            printf("Result = %d\n", (int)num1 % (int)num2);
            break;
        default:
            printf("Invalid operator! Please use +, -, *, /, or %%.\n");
    }

    return 0;
}
