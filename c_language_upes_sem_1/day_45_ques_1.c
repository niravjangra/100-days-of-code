#include <stdio.h>

int main() {
    char str[200], ch;
    int i = 0, count = 0;

    // Input string
    printf("Enter a string: ");
    gets(str);

    // Input character to count
    printf("Enter the character to find frequency: ");
    scanf("%c", &ch);

    // Count occurrences of the character
    while (str[i] != '\0') {
        if (str[i] == ch)
            count++;
        i++;
    }

    printf("\nFrequency of '%c' = %d\n", ch, count);

    return 0;
}
