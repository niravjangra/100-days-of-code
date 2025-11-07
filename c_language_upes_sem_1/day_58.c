#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    int answer[n];
    int prefix[n], suffix[n];

    // Compute prefix products
    prefix[0] = 1;
    for (int i = 1; i < n; i++)
        prefix[i] = prefix[i - 1] * nums[i - 1];

    // Compute suffix products
    suffix[n - 1] = 1;
    for (int i = n - 2; i >= 0; i--)
        suffix[i] = suffix[i + 1] * nums[i + 1];

    // Compute result: product of prefix[i] * suffix[i]
    for (int i = 0; i < n; i++)
        answer[i] = prefix[i] * suffix[i];

    // Print result array
    printf("Answer: ");
    for (int i = 0; i < n; i++) {
        printf("%d", answer[i]);
        if (i != n - 1)
            printf(", ");
    }
    printf("\n");

    return 0;
}
