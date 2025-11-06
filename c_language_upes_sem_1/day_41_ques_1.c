#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    // Input string
    printf("Enter a string: ");
    gets(str);  // Note: gets() is simple for beginners but unsafe; prefer fgets() in real code.

    // Count characters manually
    while (str[count] != '\0') {
        count++;
    }

    printf("\nTotal number of characters = %d\n", count);
    return 0;
}
