#include <stdio.h>

int main() {
    int n, k, i, temp;
    int arr[100];

    // Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input number of rotations
    printf("Enter number of positions to rotate (k): ");
    scanf("%d", &k);

    // Handle if k > n
    k = k % n;

    // Rotate right by k positions
    for (int r = 0; r < k; r++) {
        temp = arr[n - 1];
        for (i = n - 1; i > 0; i--) {
            arr[i] = arr[i - 1];
        }
        arr[0] = temp;
    }

    // Output rotated array
    printf("Array after rotating right by %d positions:\n", k);
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
