#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    char words[10][50];
    int i = 0, j = 0, k = 0;

    printf("Enter your full name: ");
    gets(name);

    // Split into words
    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] != ' ') {
            words[k][j++] = name[i];
        } else if (j > 0) {
            words[k][j] = '\0';
            k++;
            j = 0;
        }
    }
    words[k][j] = '\0';
    int totalWords = k + 1;

    // Print initials for first n-1 words
    printf("\nFormatted Name: ");
    for (i = 0; i < totalWords - 1; i++)
        printf("%c. ", toupper(words[i][0]));

    // Print last word (surname) in full
    printf("%s\n", words[totalWords - 1]);

    return 0;
}
