#include <stdio.h>

int main() {
    FILE *fp;
    char line[200];

    // Open the file in read mode
    fp = fopen("info.txt", "r");

    // Check if file exists or opens successfully
    if (fp == NULL) {
        printf("Error! File not found or cannot be opened.\n");
        return 1;
    }

    // Read and display file contents until EOF
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    // Close the file
    fclose(fp);

    return 0;
}
