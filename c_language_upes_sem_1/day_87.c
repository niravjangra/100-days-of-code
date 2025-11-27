#include <stdio.h>

enum UserRole { ADMIN, USER, GUEST };

int main() {
    enum UserRole role;

    // Assign role (can be changed to USER or GUEST)
    role = ADMIN;

    switch(role) {
        case ADMIN:
            printf("Welcome, Admin! You have full access.\n");
            break;
        case USER:
            printf("Welcome, User! You have limited access.\n");
            break;
        case GUEST:
            printf("Welcome, Guest! You have read-only access.\n");
            break;
        default:
            printf("Unknown role.\n");
    }

    return 0;
}
