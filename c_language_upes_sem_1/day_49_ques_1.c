#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i;

    printf("Enter your full name: ");
    gets(name);

    printf("\nInitials: ");
    if (name[0] != ' ')
        printf("%c. ", (name[0]));

    for (i = 1; name[i] != '\0'; i++) {
        if (name[i - 1] == ' ' && name[i] != ' ')
            printf("%c. ", (name[i]));
    }

    printf("\n");
    return 0;
}
