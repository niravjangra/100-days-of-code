#include <stdio.h>
#include <ctype.h>   // for isspace()

int main() {
    FILE *fp;
    char filename[100];
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;

    // Ask user to enter file name
    printf("Enter file name: ");
    scanf("%s", filename);

    // Open file
    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Read file character by character
    while ((ch = fgetc(fp)) != EOF) {
        characters++;  // count characters

        // Count lines
        if (ch == '\n')
            lines++;

        // Check for word boundary
        if (!isspace(ch) && inWord == 0) { 
            inWord = 1;   // inside a word
            words++;
        } 
        else if (isspace(ch)) {
            inWord = 0;   // word ended
        }
    }

    fclose(fp);

    // Display results
    printf("\n----- File Statistics -----\n");
    printf("Total Characters : %d\n", characters);
    printf("Total Words      : %d\n", words);
    printf("Total Lines      : %d\n", lines);

    return 0;
}
