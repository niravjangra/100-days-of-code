#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int evenCount = 0, oddCount = 0;

    // Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Count even and odd elements
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    // Output result
    printf("Even numbers count = %d\n", evenCount);
    printf("Odd numbers count = %d\n", oddCount);

    return 0;
}
