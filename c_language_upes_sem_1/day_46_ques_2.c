#include <stdio.h>

int main() {
    char str[200];
    int freq[26] = {0};
    int i = 0, found = 0;

    // Input string
    printf("Enter a string (lowercase letters only): ");
    gets(str);

    // Find first repeating lowercase alphabet
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            int index = str[i] - 'a';
            freq[index]++;
            if (freq[index] == 2) { // Found first repeating
                printf("\nFirst repeating lowercase alphabet: %c\n", str[i]);
                found = 1;
                break;
            }
        }
        i++;
    }

    if (!found)
        printf("\nNo repeating lowercase alphabet found.\n");

    return 0;
}
