#include <stdio.h>

int main() {
    char str[100], rev[100];
    int i, j, length = 0;

    // Input string
    printf("Enter a string: ");
    gets(str);

    // Find string length manually
    while (str[length] != '\0')
        length++;

    // Reverse string
    for (i = length - 1, j = 0; i >= 0; i--, j++) {
        rev[j] = str[i];
    }
    rev[j] = '\0';  // End string

    printf("\nReversed string: %s\n", rev);

    return 0;
}
