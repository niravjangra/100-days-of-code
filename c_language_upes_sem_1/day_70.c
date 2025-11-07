#include <stdio.h>
#include <ctype.h>   // for toupper() and tolower()
#include <string.h>

int main() {
    char str[200];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // read full line (including spaces)

    int len = strlen(str);
    int newSentence = 1;  // flag to check start of a new sentence

    for (int i = 0; i < len; i++) {
        if (newSentence && isalpha(str[i])) {
            str[i] = toupper(str[i]);  // capitalize first letter of a sentence
            newSentence = 0;
        } else {
            str[i] = tolower(str[i]);  // make all other letters lowercase
        }

        // Detect sentence ending punctuation
        if (str[i] == '.' || str[i] == '!' || str[i] == '?')
            newSentence = 1;
    }

    printf("Sentence case: %s", str);
    return 0;
}
