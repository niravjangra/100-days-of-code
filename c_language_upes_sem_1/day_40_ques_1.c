#include <stdio.h>

int main() {
    int rows, cols, i, j, k;
    int mat[10][10];

    // Input matrix size
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Input elements
    printf("Enter elements of the matrix (%d x %d):\n", rows, cols);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nDiagonal Traversal:\n");

    // Print upper diagonals (including main)
    for (k = 0; k < cols; k++) {
        i = 0;
        j = k;
        while (i < rows && j < cols) {
            printf("%d ", mat[i][j]);
            i++;
            j++;
        }
        printf("\n");
    }

    // Print lower diagonals
    for (k = 1; k < rows; k++) {
        i = k;
        j = 0;
        while (i < rows && j < cols) {
            printf("%d ", mat[i][j]);
            i++;
            j++;
        }
        printf("\n");
    }

    return 0;
}
