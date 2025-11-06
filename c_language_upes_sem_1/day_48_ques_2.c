#include <stdio.h>
#include <string.h>

void reverseWord(char *start, char *end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[200];
    int i = 0;
    char *word_start = NULL;

    printf("Enter a sentence: ");
    gets(str);

    while (1) {
        if (str[i] != ' ' && str[i] != '\0') {
            if (word_start == NULL)
                word_start = &str[i];
        } else {
            if (word_start != NULL) {
                reverseWord(word_start, &str[i - 1]);
                word_start = NULL;
            }
        }

        if (str[i] == '\0')
            break;
        i++;
    }

    printf("\nSentence after reversing each word:\n%s\n", str);

    return 0;
}
