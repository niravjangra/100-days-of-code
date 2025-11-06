#include <stdio.h>

int main() {
    int rows, cols, i, j, sum = 0;
    int mat[10][10];

    // Input matrix size
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Input matrix elements
    printf("Enter elements of the matrix (%d x %d):\n", rows, cols);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
            sum += mat[i][j];
        }
    }

    // Output sum
    printf("Sum of all elements in the matrix = %d\n", sum);

    return 0;
}
