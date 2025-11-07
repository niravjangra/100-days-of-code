#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int arr[n];  // Array has size n but contains numbers from 0 to n (one missing)
    printf("Enter %d elements (numbers between 0 and %d, one missing): ", n, n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Calculate expected sum (sum of 0 to n)
    int totalSum = n * (n + 1) / 2;

    // Calculate actual sum of array elements
    int actualSum = 0;
    for (int i = 0; i < n; i++)
        actualSum += arr[i];

    // Missing number = totalSum - actualSum
    int missing = totalSum - actualSum;

    printf("Missing number: %d\n", missing);

    return 0;
}
