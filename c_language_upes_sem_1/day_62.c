#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int max_so_far = INT_MIN;  // stores the maximum sum found so far
    int curr_sum = 0;          // current subarray sum

    for (int i = 0; i < n; i++) {
        curr_sum += arr[i];

        if (curr_sum > max_so_far)
            max_so_far = curr_sum;

        // If current sum becomes negative, reset it to 0
        if (curr_sum < 0)
            curr_sum = 0;
    }

    printf("Maximum subarray sum: %d\n", max_so_far);

    return 0;
}
