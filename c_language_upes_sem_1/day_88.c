#include <stdio.h>

enum UserRole { ADMIN = 0, USER, GUEST };

int main() {
    enum UserRole role;
    const char* roleNames[] = { "ADMIN", "USER", "GUEST" };
    int numRoles = sizeof(roleNames) / sizeof(roleNames[0]);

    for (role = ADMIN; role <= GUEST; role++) {
        printf("%s = %d\n", roleNames[role], role);
    }

    return 0;
}
