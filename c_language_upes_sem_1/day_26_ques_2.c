#include <stdio.h>

int main() {
    int i, j;
    int rows[] = {1, 2, 5, 3, 1}; // pattern group sizes

    // Loop through each group
    for (i = 0; i < 5; i++) {
        for (j = 1; j <= rows[i]; j++) {
            printf("*\n");
        }
        printf("\n"); // blank line between groups
    }

    return 0;
}
