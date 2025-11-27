#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char text[200];

    // Input filename
    printf("Enter file name to append data: ");
    scanf("%s", filename);

    // Open file in append mode
    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error! Could not open file.\n");
        return 1;
    }

    // Clear newline left by scanf
    getchar();

    // Get text to append
    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    // Append text to file
    fputs(text, fp);

    fclose(fp);

    printf("Text appended successfully!\n");

    return 0;
}
