#include <stdio.h>

int main() {
    int n, i, key, found = 0;
    int arr[100];

    // Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input element to search
    printf("Enter element to search: ");
    scanf("%d", &key);

    // Linear search
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = 1;
            printf("Element %d found at position %d.\n", key, i + 1);
            break;
        }
    }

    if (!found)
        printf("Element %d not found in the array.\n", key);

    return 0;
}
