#include <stdio.h>

int main() {
    char str[200];
    int i = 0;

    // Input string
    printf("Enter a string: ");
    gets(str);

    // Toggle case
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32; // lowercase → uppercase
        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32; // uppercase → lowercase
        i++;
    }

    printf("\nToggled case string: %s\n", str);

    return 0;
}
