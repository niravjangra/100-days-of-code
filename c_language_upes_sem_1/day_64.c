#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    printf("Enter a string: ");
    scanf("%s", s);

    int n = strlen(s);
    int lastIndex[256];  // ASCII table for tracking last seen positions
    for (int i = 0; i < 256; i++)
        lastIndex[i] = -1; // initialize all as unseen

    int maxLen = 0;
    int start = 0; // start index of current window

    for (int i = 0; i < n; i++) {
        // If character already seen, move start forward
        if (lastIndex[(unsigned char)s[i]] >= start)
            start = lastIndex[(unsigned char)s[i]] + 1;

        // Update last seen index of current character
        lastIndex[(unsigned char)s[i]] = i;

        // Calculate window length
        int currLen = i - start + 1;

        if (currLen > maxLen)
            maxLen = currLen;
    }

    printf("Length of longest substring without repeating characters: %d\n", maxLen);

    return 0;
}
