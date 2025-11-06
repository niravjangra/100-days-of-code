#include <stdio.h>

int main() {
    int i, j, space;
    int n = 5;  // total number of pyramid levels (top half height)

    // 🔼 Upper pyramid
    for (i = 1; i <= n; i++) {
        for (space = i; space < n; space++)
            printf(" ");
        for (j = 1; j <= (2 * i - 1); j++)
            printf("*");
        printf("\n");
    }

    // 🔽 Lower inverted pyramid
    for (i = n - 1; i >= 1; i--) {
        for (space = n; space > i; space--)
            printf(" ");
        for (j = 1; j <= (2 * i - 1); j++)
            printf("*");
        printf("\n");
    }

    return 0;
}
