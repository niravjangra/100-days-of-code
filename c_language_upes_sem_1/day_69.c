#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements (numbers from 0 to %d, one repeated): ", n, n - 2);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Expected sum if there were no repeats: 0 + 1 + 2 + ... + (n-2)
    int expectedSum = (n - 2) * (n - 1) / 2;

    // Actual sum of elements
    int actualSum = 0;
    for (int i = 0; i < n; i++)
        actualSum += arr[i];

    int repeated = actualSum - expectedSum;
    printf("Repeated element: %d\n", repeated);

    return 0;
}
