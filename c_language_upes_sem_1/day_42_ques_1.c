#include <stdio.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0, i = 0;

    // Input string
    printf("Enter a string: ");
    gets(str);

    // Count vowels and consonants
    while (str[i] != '\0') {
        char ch = str[i];

        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            // Check for vowels
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
                vowels++;
            else
                consonants++;
        }
        i++;
    }

    printf("\nNumber of vowels = %d", vowels);
    printf("\nNumber of consonants = %d\n", consonants);

    return 0;
}
