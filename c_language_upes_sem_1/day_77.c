#include <stdio.h>
#include <ctype.h>  // for toupper()

int main() {
    FILE *input, *output;
    char ch;

    // Open source file for reading
    input = fopen("input.txt", "r");
    if (input == NULL) {
        printf("Error! Could not open input.txt\n");
        return 1;
    }

    // Open destination file for writing
    output = fopen("output.txt", "w");
    if (output == NULL) {
        printf("Error! Could not create output.txt\n");
        fclose(input);
        return 1;
    }

    // Read each character, convert to uppercase, write to output
    while ((ch = fgetc(input)) != EOF) {
        fputc(toupper(ch), output);
    }

    fclose(input);
    fclose(output);

    printf("Conversion complete! Output saved to output.txt\n");
    return 0;
}
