#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int totalSum = 0, leftSum = 0;

    // Calculate total sum of array
    for (int i = 0; i < n; i++)
        totalSum += arr[i];

    int pivotIndex = -1;

    for (int i = 0; i < n; i++) {
        int rightSum = totalSum - leftSum - arr[i];

        if (leftSum == rightSum) {
            pivotIndex = i;
            break;  // we need the leftmost pivot index
        }

        leftSum += arr[i];
    }

    printf("%d\n", pivotIndex);

    return 0;
}
