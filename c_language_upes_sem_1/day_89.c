#include <stdio.h>

enum Status { SUCCESS = 10, FAILURE = 20, TIMEOUT = 30 };

int main() {
    enum Status s1 = SUCCESS;
    enum Status s2 = FAILURE;
    enum Status s3 = TIMEOUT;

    printf("SUCCESS = %d\n", s1);
    printf("FAILURE = %d\n", s2);
    printf("TIMEOUT = %d\n", s3);

    // You can also perform arithmetic with enum values
    printf("SUCCESS + FAILURE = %d\n", s1 + s2);

    return 0;
}
