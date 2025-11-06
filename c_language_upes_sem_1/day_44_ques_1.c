#include <stdio.h>

int main() {
    char str[200];
    int i = 0, spaces = 0, digits = 0, special = 0;

    // Input string
    printf("Enter a string: ");
    gets(str);

    // Count spaces, digits, and special characters
    while (str[i] != '\0') {
        if (str[i] == ' ')
            spaces++;
        else if (str[i] >= '0' && str[i] <= '9')
            digits++;
        else if (!((str[i] >= 'a' && str[i] <= 'z') || 
                   (str[i] >= 'A' && str[i] <= 'Z')))
            special++;
        i++;
    }

    printf("\nNumber of spaces = %d", spaces);
    printf("\nNumber of digits = %d", digits);
    printf("\nNumber of special characters = %d\n", special);

    return 0;
}
