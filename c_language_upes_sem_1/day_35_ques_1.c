#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int first, second;

    // Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("At least two elements are required.\n");
        return 0;
    }

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize first and second largest
    first = second = -2147483648; // minimum possible int

    // Find first and second largest
    for (i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] < first) {
            second = arr[i];
        }
    }

    if (second == -2147483648)
        printf("No second largest element (all elements are equal).\n");
    else
        printf("Second largest element = %d\n", second);

    return 0;
}
