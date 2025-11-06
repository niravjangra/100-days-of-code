#include <stdio.h>

int main() {
    char str[200], result[200];
    int i = 0, j = 0;

    // Input string
    printf("Enter a string: ");
    gets(str);

    // Remove vowels
    while (str[i] != '\0') {
        char ch = str[i];
        if (!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
              ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')) {
            result[j] = ch;
            j++;
        }
        i++;
    }

    result[j] = '\0'; // End the new string

    printf("\nString after removing vowels: %s\n", result);

    return 0;
}
