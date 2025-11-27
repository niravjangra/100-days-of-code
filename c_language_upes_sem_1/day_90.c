#include <stdio.h>

// Define enum for Gender
enum Gender { MALE, FEMALE, OTHER };

// Define struct Person
struct Person {
    char name[50];
    int age;
    enum Gender gender;
};

int main() {
    struct Person p1;

    // Assign values
    printf("Enter name: ");
    scanf("%49s", p1.name);

    printf("Enter age: ");
    scanf("%d", &p1.age);

    printf("Enter gender (0 for MALE, 1 for FEMALE, 2 for OTHER): ");
    int g;
    scanf("%d", &g);
    p1.gender = (enum Gender)g;

    // Print person's details
    printf("\nName: %s\n", p1.name);
    printf("Age: %d\n", p1.age);

    printf("Gender: ");
    switch(p1.gender) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        case OTHER:
            printf("Other\n");
            break;
        default:
            printf("Unknown\n");
    }

    return 0;
}

