#include <stdio.h>

// Function to find index of ceil of x
int findCeil(int arr[], int n, int x) {
    int low = 0, high = n - 1, result = -1;
    
    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] >= x) {
            result = mid;      // possible ceil found
            high = mid - 1;    // search in left half for smaller index
        } else {
            low = mid + 1;     // search in right half
        }
    }
    return result;
}

int main() {
    int n, x;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter value of x: ");
    scanf("%d", &x);

    int index = findCeil(arr, n, x);

    if (index == -1)
        printf("-1\n");
    else
        printf("Ceil of %d is %d at index %d\n", x, arr[index], index);

    return 0;
}
