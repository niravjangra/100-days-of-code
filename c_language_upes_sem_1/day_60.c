#include <stdio.h>

int main() {
    int n, k;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter window size k: ");
    scanf("%d", &k);

    if (k > n || k <= 0) {
        printf("Invalid window size.\n");
        return 0;
    }

    // Traverse the array for each window of size k
    for (int i = 0; i <= n - k; i++) {
        int max = arr[i];

        // Find the maximum in the current window
        for (int j = i + 1; j < i + k; j++) {
            if (arr[j] > max)
                max = arr[j];
        }

        // Print the maximum for this window
        printf("%d", max);
        if (i != n - k)
            printf(" ");
    }

    printf("\n");
    return 0;
}
