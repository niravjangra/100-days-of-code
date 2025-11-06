#include <stdio.h>

int main() {
    int n, i, j, distinct = 1;
    int mat[10][10];

    // Input matrix size
    printf("Enter the size of square matrix (n x n): ");
    scanf("%d", &n);

    // Input matrix elements
    printf("Enter elements of the matrix (%d x %d):\n", n, n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    // Check distinctness of diagonal elements
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (mat[i][i] == mat[j][j]) {
                distinct = 0;
                break;
            }
        }
        if (!distinct)
            break;
    }

    // Display result
    if (distinct)
        printf("\nAll diagonal elements are distinct.\n");
    else
        printf("\nDiagonal elements are NOT distinct.\n");

    return 0;
}
