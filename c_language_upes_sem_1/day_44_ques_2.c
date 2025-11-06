#include <stdio.h>

int main() {
    char str[200];
    int i = 0;

    // Input string
    printf("Enter a string: ");
    gets(str);

    // Replace spaces with hyphens
    while (str[i] != '\0') {
        if (str[i] == ' ')
            str[i] = '-';
        i++;
    }

    printf("\nModified string: %s\n", str);

    return 0;
}
