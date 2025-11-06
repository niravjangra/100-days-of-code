#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int posCount = 0, negCount = 0, zeroCount = 0;

    // Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Count positive, negative, and zero elements
    for (i = 0; i < n; i++) {
        if (arr[i] > 0)
            posCount++;
        else if (arr[i] < 0)
            negCount++;
        else
            zeroCount++;
    }

    // Output result
    printf("Positive elements count = %d\n", posCount);
    printf("Negative elements count = %d\n", negCount);
    printf("Zero elements count = %d\n", zeroCount);

    return 0;
}
