#include <stdio.h>

int main() {
    long num;
    int digit, freq[10] = {0};
    int maxFreq = 0, mostFreqDigit = 0;

    // Input number
    printf("Enter an integer number: ");
    scanf("%ld", &num);

    // Convert to positive if negative
    if (num < 0)
        num = -num;

    // Count frequency of each digit
    while (num > 0) {
        digit = num % 10;
        freq[digit]++;
        num /= 10;
    }

    // Find digit with highest frequency
    for (int i = 0; i < 10; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            mostFreqDigit = i;
        }
    }

    // Output result
    printf("Digit that occurs the most: %d\n", mostFreqDigit);
    printf("It occurs %d times.\n", maxFreq);

    return 0;
}
