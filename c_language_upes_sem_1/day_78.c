#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char filename[100], ch;
    int vowels = 0, consonants = 0;

    // Get file name
    printf("Enter filename: ");
    scanf("%s", filename);

    // Open file in read mode
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error! File cannot be opened.\n");
        return 1;
    }

    // Read character by character
    while ((ch = fgetc(fp)) != EOF) {
        ch = tolower(ch);

        if (ch >= 'a' && ch <= 'z') {        // only alphabets
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    fclose(fp);

    // Display result
    printf("\n----- Result -----\n");
    printf("Vowels     : %d\n", vowels);
    printf("Consonants : %d\n", consonants);

    return 0;
}
