#include <stdio.h>

int main() {
    FILE *fp;
    int n, roll;
    char name[50];
    float marks;

    // ==== Writing Records to File ====
    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\n--- Student %d ---\n", i + 1);
        printf("Enter name: ");
        scanf("%s", name);
        printf("Enter roll number: ");
        scanf("%d", &roll);
        printf("Enter marks: ");
        scanf("%f", &marks);

        fprintf(fp, "%s %d %.2f\n", name, roll, marks);
    }

    fclose(fp);
    printf("\nRecords stored successfully in students.txt\n");

    // ==== Reading Records From File ====
    printf("\n\n--- Reading Records From File ---\n");

    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    printf("\nName\tRoll\tMarks\n");
    printf("--------------------------\n");

    while (fscanf(fp, "%s %d %f", name, &roll, &marks) != EOF) {
        printf("%s\t%d\t%.2f\n", name, roll, marks);
    }

    fclose(fp);

    return 0;
}
