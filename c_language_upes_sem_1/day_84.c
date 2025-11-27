#include <stdio.h>

enum Status { SUCCESS, FAILURE, TIMEOUT };

int main() {
    enum Status result;

    result = SUCCESS;  // You can change this to FAILURE or TIMEOUT

    switch(result) {
        case SUCCESS:
            printf("Operation completed successfully.\n");
            break;
        case FAILURE:
            printf("Operation failed. Please try again.\n");
            break;
        case TIMEOUT:
            printf("Operation timed out. Check your network or retry.\n");
            break;
        default:
            printf("Unknown status.\n");
    }

    return 0;
}
