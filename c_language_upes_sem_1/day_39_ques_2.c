#include <stdio.h>

int main() {
    int n, i, j, sum = 0;
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

    // Calculate sum of main diagonal elements
    for (i = 0; i < n; i++) {
        sum += mat[i][i];
    }

    // Display result
    printf("\nSum of main diagonal elements = %d\n", sum);

    return 0;
}
