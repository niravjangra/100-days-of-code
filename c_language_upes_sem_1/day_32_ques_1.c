#include <stdio.h>

int main() {
    int n1, n2, i, j, k;
    int arr1[100], arr2[100], merged[200];

    // Input first array
    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);
    printf("Enter %d elements for first array:\n", n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input second array
    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);
    printf("Enter %d elements for second array:\n", n2);
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Merge arrays
    for (i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }
    for (j = 0, k = n1; j < n2; j++, k++) {
        merged[k] = arr2[j];
    }

    // Output merged array
    printf("Merged array:\n");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }

    printf("\n");
    return 0;
}
