#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int result[n];

    // For each element, find the previous greater element to its left
    for (int i = 0; i < n; i++) {
        int prevGreater = -1;
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prevGreater = arr[j];
                break;
            }
        }
        result[i] = prevGreater;
    }

    // Print result in comma-separated format
    for (int i = 0; i < n; i++) {
        printf("%d", result[i]);
        if (i != n - 1)
            printf(", ");
    }
    printf("\n");

    return 0;
}
