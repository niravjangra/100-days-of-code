#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    // Input string
    printf("Enter a lowercase string: ");
    gets(str);

    // Convert to uppercase manually
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32; // ASCII difference between 'a' and 'A'
        i++;
    }

    printf("\nString in uppercase: %s\n", str);

    return 0;
}
