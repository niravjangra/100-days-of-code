#include <stdio.h>

int main() {
    FILE *fp;
    int num, sum = 0, count = 0;
    float avg;

    // Open the file
    fp = fopen("numbers.txt", "r");

    if (fp == NULL) {
        printf("Error! Could not open numbers.txt\n");
        return 1;
    }

    // Read integers until EOF
    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fp);

    // Compute average
    if (count > 0)
        avg = (float)sum / count;
    else
        avg = 0;

    // Display results
    printf("Total Numbers Read: %d\n", count);
    printf("Sum of Numbers    : %d\n", sum);
    printf("Average           : %.2f\n", avg);

    return 0;
}
