#include <stdio.h>

int main() {
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    int totalSum = n * (n + 1) / 2; // Sum of numbers from 1 to n

    for (int x = 1; x <= n; x++) {
        int leftSum = x * (x + 1) / 2;        // Sum from 1 to x
        int rightSum = totalSum - leftSum + x; // Sum from x to n

        if (leftSum == rightSum) {
            printf("%d\n", x);
            return 0; // Pivot found
        }
    }

    printf("-1\n"); // No pivot found
    return 0;
}
