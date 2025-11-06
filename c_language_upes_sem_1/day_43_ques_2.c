#include <stdio.h>

int main() {
    char str[100];
    int i, length = 0, flag = 1;

    // Input string
    printf("Enter a string: ");
    gets(str);

    // Find length manually
    while (str[length] != '\0')
        length++;

    // Check palindrome
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("\nThe string is a Palindrome.\n");
    else
        printf("\nThe string is NOT a Palindrome.\n");

    return 0;
}
